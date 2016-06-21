/*
  ==============================================================================

    PluginAssignProcessor.cpp
    Created: 25 Aug 2015 9:57:39pm
    Author:  Gary Jones

  ==============================================================================
*/

#include "PluginAssignProcessor.h"
#include "PluginProcessor.h"

PluginAssignProcessor::PluginAssignProcessor(AudioPluginFormatManager & _formatManager, KnownPluginList * pluginList, void * proc, int slot):
formatManager(_formatManager),
pluginList(pluginList)
{
    procpointer = proc;
    
    hasPlugin = false;
    
    slot_latency_in_samples = 0;
    
    delay[0] = new Delay(44100);
    delay[1] = new Delay(44100);
    
    slotRef = slot;
}

const String PluginAssignProcessor::getName() const
{
   if (hasPlugin)
   {
        return instance->getName();
   }
   else return "no plugin";
}

int PluginAssignProcessor::getNumParameters()
{
   if (hasPlugin) { return instance->getNumParameters();  }
   else return 0;
}

float PluginAssignProcessor::getParameter (int index)
{
    if (hasPlugin) {
        return instance->getParameter(index-SLOT_PARAM_1);
    }
    else return 0; // should prob return 0 in this case
}

void PluginAssignProcessor::setParameter (int index, float newValue)
{
    if (index == SLOT_PLUGINREF)
    {
       // if (newValue != -1)
        if (newValue > 0)
        {
            bool didLoad = false;
            PluginDescription * plugResult = pluginList->getType((int)newValue);
            if (plugResult)
            {
                didLoad = loadNewPlugin(plugResult);
                
                // set parameter for plugin loaded..
                // latencyInSamples = instance->getLatencySamples();
                // printf("  new instance : latency = %i  ", latencyInSamples);
                
                if (didLoad)
                {
                    AudioVitaminsAudioProcessor * p = (AudioVitaminsAudioProcessor*)procpointer;
                    
                    // set plugin to active..
                    int param = (slotRef * TOTAL_SLOT_PARAMS) + SLOT_ACTIVE;
                    p->setParameter( param , true);
                    
                    // run latency test
                    p->runLatencyTest();
                    
                }
            }
        }
        else if (newValue == -1)
        {
            AudioVitaminsAudioProcessor * p = (AudioVitaminsAudioProcessor*)procpointer;
            
            // set plugin to active..
            int param = (slotRef * TOTAL_SLOT_PARAMS) + SLOT_ACTIVE;
            p->setParameter( param , false);
        }
        
    }
    else if (index >= SLOT_PARAM_1 && index < TOTAL_SLOT_PARAMS)
    {
        if (hasPlugin) instance->setParameter(index-SLOT_PARAM_1, newValue); 
    }
}

const String PluginAssignProcessor::getParameterName (int index)
{
    return "no param";
}

const String PluginAssignProcessor::getParameterText (int index)
{
    return "no text";
}

const String PluginAssignProcessor::getInputChannelName (const int channelIndex) const
{
    return String (channelIndex + 1);
}

const String PluginAssignProcessor::getOutputChannelName (const int channelIndex) const
{
    return String (channelIndex + 1);
}

bool PluginAssignProcessor::isInputChannelStereoPair (int index) const
{
    return false;
}

bool PluginAssignProcessor::isOutputChannelStereoPair (int index) const
{
    return false;
}

bool PluginAssignProcessor::acceptsMidi() const
{
    return true;
}

bool PluginAssignProcessor::producesMidi() const
{
    return true;
}

//==============================================================================
void PluginAssignProcessor::prepareToPlay (double sampleRate, int samplesPerBlock)
{
    this->setPlayConfigDetails(getNumInputChannels(), getNumOutputChannels(), sampleRate, samplesPerBlock);

    if (hasPlugin) {
      instance->setPlayConfigDetails(getNumInputChannels(), getNumOutputChannels(), sampleRate, samplesPerBlock);
      instance->prepareToPlay(sampleRate, samplesPerBlock);
    }
}

bool PluginAssignProcessor::pluginIsLoaded()
{
    return hasPlugin;
}

void PluginAssignProcessor::processBlock (AudioSampleBuffer&buffer, MidiBuffer&midiBuffer)
{
    int numChannels = buffer.getNumChannels();
    
    //int plugNumChannels=0;
    
 /*   if (instance) {
        plugNumChannels = instance->getNumInputChannels();
    }else plugNumChannels = 0;
  */
    
   // int plugNumChannels = instance->getNumInputChannels();
   // int plugNumChannels = instance->getNumInputChannels();
    
    
  //  if (plugNumChannels > numChannels) {
        // this is to fix Stereo plugins in Mono Channel
        // should find better way to handle this
        // maybe best strategy is not to not permit loading of stereo plugs into mono instance simply..
        // or handle it another way..
 //   }
 //   else
    
    
    {
        if (hasPlugin && instance)
        {
            instance->processBlock(buffer, midiBuffer);
        }
        
        if (slot_latency_in_samples)
        {
            for (int c = 0; c < getNumOutputChannels(); c++)
            {
                float * data = buffer.getWritePointer(c);
                for (int i = 0; i < getBlockSize(); i++)
                {
                    delay[c]->Process(&data[i]);
                    buffer.setSample(c, i , delay[c]->GetDelayedSample(slot_latency_in_samples));
                }
            }
        }
    }
}

bool PluginAssignProcessor::clearPlugin()
{
    suspendProcessing(true);
    
    delete instance;
    instance = nullptr;
    hasPlugin = false;
    
    suspendProcessing(false);
    
    if (instance == nullptr)
    {
        return true;
    } else  return false;
}


bool PluginAssignProcessor::loadNewPlugin(const PluginDescription*desc)
{
    suspendProcessing(true);
    
    if (pluginIsLoaded()) {
        hasPlugin = false;
        // delete instance object
        delete instance;
        instance = nullptr;
        
        //recreate it
        String errorMessage;
        instance = formatManager.createPluginInstance(*desc, getSampleRate(), getBlockSize(), errorMessage);
        instance->setPlayConfigDetails(getNumInputChannels(), getNumOutputChannels(), getSampleRate(), getBlockSize());
        instance->prepareToPlay(getSampleRate(), getBlockSize());
        hasPlugin = true;
    }
    else
    {
        //recreate it
        String errorMessage;
        instance = formatManager.createPluginInstance(*desc, getSampleRate(), getBlockSize(), errorMessage);
        
        if (instance != nullptr)
        {
            instance->prepareToPlay(getSampleRate(), getBlockSize());
            hasPlugin = true;
        }
        else
        {
          //  AlertWindow::showMessageBox (AlertWindow::WarningIcon, TRANS("Couldn't create filter"), errorMessage);
            hasPlugin = false;
        }
    }
    
    suspendProcessing(false);
    
    if (hasPlugin) return true;
    else return false;
}

void callToAddFilter()
{}

void PluginAssignProcessor::releaseResources()
{
    if (hasPlugin)
    {
       // instance->releaseResources();
    }
}

//==============================================================================
void PluginAssignProcessor::getStateInformation (MemoryBlock& destData)
{
    if (hasPlugin) {
      //  instance->getStateInformation(destData);
    }
}

void PluginAssignProcessor::setStateInformation (const void* data, int sizeInBytes)
{
    if (hasPlugin) {
      //  instance->setStateInformation(data, sizeInBytes);
    }
}
double PluginAssignProcessor::getTailLengthSeconds() const
{
    return 0.0;
}