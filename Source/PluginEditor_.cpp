/*
  ==============================================================================

    This file was auto-generated by the Introjucer!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"


//==============================================================================
AudioVitaminsAudioProcessorEditor::AudioVitaminsAudioProcessorEditor (AudioVitaminsAudioProcessor& p)
    : AudioProcessorEditor (&p), processor (p)
{
    // Make sure that before the constructor has finished, you've set the
    // editor's size to whatever you need it to be.
    
    addAndMakeVisible(mainViewComponent = new MainViewComponent());
    mainViewComponent->setProcessor(&processor);
    
    setSize (284, 415);
}

AudioVitaminsAudioProcessorEditor::~AudioVitaminsAudioProcessorEditor()
{
}

//==============================================================================
void AudioVitaminsAudioProcessorEditor::paint (Graphics& g)
{
    g.fillAll (Colours::white);

    g.setColour (Colours::black);
    g.setFont (15.0f);
   // g.drawFittedText ("Hello World!", getLocalBounds(), Justification::centred, 1);
}

void AudioVitaminsAudioProcessorEditor::resized()
{
    // This is generally where you'll want to lay out the positions of any
    // subcomponents in your editor..
     mainViewComponent->setBounds(0, 0, 284, 415);
}