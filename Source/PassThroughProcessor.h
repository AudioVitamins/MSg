/*
  ==============================================================================

    PassThroughProcessor.h
    Created: 25 Aug 2015 10:01:31pm
    Author:  Gary Jones

  ==============================================================================
*/

#ifndef PASSTHROUGHPROCESSOR_H_INCLUDED
#define PASSTHROUGHPROCESSOR_H_INCLUDED

#include <iostream>
#include "JuceHeader.h"

class PassThroughProcessor : public AudioProcessor
{
public:
    
    PassThroughProcessor();
    ~PassThroughProcessor();
    
    const String getName() const;
    void prepareToPlay (double sampleRate, int estimatedSamplesPerBlock);
    void releaseResources();
    void processBlock (AudioSampleBuffer& buffer, MidiBuffer& midiMessages);
    
	const String getInputChannelName (const int channelIndex) const;
	const String getOutputChannelName (const int channelIndex) const;
    
    bool isInputChannelStereoPair (int index) const;
    bool isOutputChannelStereoPair (int index) const;
    
    bool hasEditor() const                  { return false; }
    
    bool acceptsMidi() const;
    bool producesMidi() const;
    
    /** Returns true if a silent input always produces a silent output. */
    bool silenceInProducesSilenceOut() const {return false;}
    
    /** Returns the length of the filter's tail, in seconds. */
    double getTailLengthSeconds() const  {return 0.0;}
    
	AudioProcessorEditor* createEditor() { return 0; }
    
	int getNumParameters() { return 1; }
	const String getParameterName (int parameterIndex) { return String::empty; }
	float getParameter (int parameterIndex) { return 0.0f; }
	const String getParameterText (int parameterIndex) { return String::empty; }
	void setParameter (int parameterIndex, float newValue) {  }
    
	int getNumPrograms() { return 1; }
	int getCurrentProgram() { return 0; }
	void setCurrentProgram (int index) { }
	const String getProgramName (int index) { return String::empty; }
	void changeProgramName (int index, const String& newName) { }
    
	void getStateInformation (MemoryBlock& destData) { }
	void getCurrentProgramStateInformation (MemoryBlock& destData) { }
	void setStateInformation (const void* data, int sizeInBytes) { }
	
	void setNodeID (int32 newNodeID) { nodeID = newNodeID; }
	int32 getNodeID() { return nodeID; }
    
private:
	int32 nodeID;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (PassThroughProcessor)
};
    





#endif  // PASSTHROUGHPROCESSOR_H_INCLUDED
