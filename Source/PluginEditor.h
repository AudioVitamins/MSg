/*
  ==============================================================================

  This is an automatically generated GUI class created by the Projucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Projucer version: 4.2.3

  ------------------------------------------------------------------------------

  The Projucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright (c) 2015 - ROLI Ltd.

  ==============================================================================
*/

#ifndef __JUCE_HEADER_3C7CDA14573A515C__
#define __JUCE_HEADER_3C7CDA14573A515C__

//[Headers]     -- You can add your own extra header files here --
#include "../JuceLibraryCode/JuceHeader.h"
//[/Headers]

#include "MainViewComponent.h"


//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Projucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class AudioVitaminsAudioProcessorEditor  : public AudioProcessorEditor,
                                           public Timer,
                                           public ButtonListener
{
public:
    //==============================================================================
    AudioVitaminsAudioProcessorEditor (AudioVitaminsAudioProcessor& p);
    ~AudioVitaminsAudioProcessorEditor();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    //[/UserMethods]

    void paint (Graphics& g) override;
    void resized() override;
    void buttonClicked (Button* buttonThatWasClicked) override;

    // Binary resources:
    static const char* msg_expireddemo_png;
    static const int msg_expireddemo_pngSize;


private:
    //[UserVariables]   -- You can add your own custom variables in this section.
	void updateDemoVersion();
	AudioVitaminsAudioProcessor& processor;
	void timerCallback() override;
    //[/UserVariables]

    //==============================================================================
    ScopedPointer<MainViewComponent> mainViewComponent;
    ScopedPointer<ImageButton> imageButtonDemo;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (AudioVitaminsAudioProcessorEditor)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

#endif   // __JUCE_HEADER_3C7CDA14573A515C__
