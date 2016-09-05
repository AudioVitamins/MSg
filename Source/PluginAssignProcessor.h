/*
  ==============================================================================

    PluginAssignProcessor.h
    Created: 25 Aug 2015 9:57:39pm
    Author:  Gary Jones

  ==============================================================================
*/

/*
 ==============================================================================
 
 PluginAssignProcessor.h
 Created: 21 Jan 2014 4:53:52pm
 Author:  Gary Jones
 
 ==============================================================================
 */

#ifndef PluginAssignProcessor_H_INCLUDED
#define PluginAssignProcessor_H_INCLUDED

#include "../JuceLibraryCode/JuceHeader.h"
#include "Delay.h"
#include <queue>

class PluginAssignProcessor : public AudioProcessor 
 #if JucePlugin_Build_AAX
	,public Timer//public AudioProcessorGraph
#endif
{
#if JucePlugin_Build_AAX
	struct Parameter{
		int Index;
		float Value;
	};
	std::queue<Parameter> parameters;
#endif
public:

    const String getName() const;
    void processBlock (AudioSampleBuffer&, MidiBuffer&);
    void prepareToPlay (double sampleRate, int samplesPerBlock);
    void releaseResources();
    
    bool loadNewPlugin(const PluginDescription*desc);
    bool clearPlugin();
    
    // void processBlock (AudioSampleBuffer& buffer, MidiBuffer& midiMessages);
    
    AudioProcessorEditor* createEditor() { return 0; };
    
    int getNumParameters();
    
    float getParameter (int index);
    void setParameter (int index, float newValue);
	void setParameterTimer (int index, float newValue);
#if JucePlugin_Build_AAX
	void timerCallback();
#endif
    const String getParameterName (int index);
    const String getParameterText (int index);
    
    const String getInputChannelName (const int channelIndex) const;
    const String getOutputChannelName (const int channelIndex) const;
    bool isInputChannelStereoPair (int index) const;
    bool isOutputChannelStereoPair (int index) const;
    
    bool acceptsMidi() const;
    bool producesMidi() const;
    
    /** Returns true if a silent input always produces a silent output. */
    bool silenceInProducesSilenceOut() const {return false;}
    
    /** Returns the length of the filter's tail, in seconds. */
    double getTailLengthSeconds() const;
    bool hasEditor() const { return true; };
    
    int latencyInSamples;
    
    int getNumPrograms()                                        { return 0; }
    int getCurrentProgram()                                     { return 0; }
    void setCurrentProgram (int index)                          { }
    const String getProgramName (int index)                     { return String::empty; }
    void changeProgramName (int index, const String& newName)   { }
    
    void getStateInformation (MemoryBlock& destData);
    void setStateInformation (const void* data, int sizeInBytes);
    
    int slotRef;
    
    bool hasPlugin;
    bool pluginIsLoaded();
    
    AudioPluginFormatManager & formatManager;
    KnownPluginList * pluginList;
    
    AudioProcessor * instance;
    
    void * procpointer;
    
    PluginAssignProcessor(AudioPluginFormatManager & _formatManager, KnownPluginList * pluginList, void * proc, int slot);
    
    ~PluginAssignProcessor(){
        
    }
    
    int getLatencySamples()
    {
        if (instance) {
            return instance->getLatencySamples();
        }else return 0;
    }
    
    void setDelayCompensation(int numSamplesDelay)
    {
        slot_latency_in_samples = numSamplesDelay;
    }
    
    Delay * delay[2];
    unsigned int slot_latency_in_samples; // holds latency amount, set by plugin processor after test
    
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (PluginAssignProcessor);
    
    
};




#endif  // PLUGINASSIGNPROCESSOR_H_INCLUDED
