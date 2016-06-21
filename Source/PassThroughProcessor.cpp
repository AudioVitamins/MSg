/*
  ==============================================================================

    PassThroughProcessor.cpp
    Created: 25 Aug 2015 10:01:31pm
    Author:  Gary Jones

  ==============================================================================
*/

#include "PassThroughProcessor.h"

PassThroughProcessor::PassThroughProcessor()
{
}
PassThroughProcessor::~PassThroughProcessor()
{
}
const String PassThroughProcessor::getName() const
{
	return "PassThrough Processor";
}
void PassThroughProcessor::prepareToPlay (double sampleRate, int estimatedSamplesPerBlock)
{
	 setPlayConfigDetails (2, 2, sampleRate, estimatedSamplesPerBlock);
}
void PassThroughProcessor::releaseResources()
{
}
void PassThroughProcessor::processBlock (AudioSampleBuffer& buffer, MidiBuffer& midiMessages)
{
}
const String PassThroughProcessor::getInputChannelName (const int channelIndex) const
{
	return String (channelIndex + 1);
}
const String PassThroughProcessor::getOutputChannelName (const int channelIndex) const
{
	return String (channelIndex + 1);
}
bool PassThroughProcessor::isInputChannelStereoPair (int index) const
{
	return false;
}
bool PassThroughProcessor::isOutputChannelStereoPair (int index) const
{
	return false;
}
bool PassThroughProcessor::acceptsMidi() const
{
	return false;
}
bool PassThroughProcessor::producesMidi() const
{
	return false;
}

