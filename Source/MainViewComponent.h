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

#ifndef __JUCE_HEADER_16D92098AB691ACA__
#define __JUCE_HEADER_16D92098AB691ACA__

//[Headers]     -- You can add your own extra header files here --
#include "JuceHeader.h"
#include "PluginSlotComponent.h"
#include "PluginProcessor.h"
#include "PluginBrowser_Component.h"
#include "FilmStripSlider.h"
#include "HighQualityMeter.h"



class ClipComponent : public Component, public MouseListener
{
public:
	ClipComponent()
	{
		dbValue = 0.f;
	}
	~ClipComponent()
	{

	}

	float dbValue;

	void SetDBValue(float db)
	{
		dbValue = db;
		if (dbValue > 1.0f) {
			repaint();
		}

		// if db is > 0db set background color to Red, else color=black
	}

	//==============================================================================
	void paint(Graphics& g)
	{
		//[UserPrePaint] Add your own custom painting code here..
		//[/UserPrePaint]


		// if (dbValue >= 1.0f) {
		//     g.setColour (Colours::red);
		// }else g.setColour (Colours::black);

		if (dbValue >= 1.0) {
			g.fillAll(Colours::red);
		}
		else  g.fillAll(Colours::black);



		//[UserPaint] Add your own custom painting code here..
		//[/UserPaint]
	}

	// mouse click to revert color to black
	//void mouseDoubleClick (const MouseEvent& event) override
	void mouseDown(const MouseEvent& event) override
	{
		// detect double click..
		dbValue = 0.0;
		repaint();
	}


};
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Introjucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class MainViewComponent  : public Component,
                           public SliderListener,
                           public Timer
{
public:
    //==============================================================================
    MainViewComponent ();
    ~MainViewComponent();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    AudioVitaminsAudioProcessor * processor;
    void setProcessor (AudioVitaminsAudioProcessor * proc) { processor = proc; } //pluginBrowserComponent = new
    void ViewPlugins(bool display)
    {
        if (display) { }
        else { }
    }

#define WIN_ONLY 1

    void rescanPlugins()
    {
        // only scan for FX , not instruments
#ifdef _WINDOWS
        // only scan for FX , not instruments
		String pf = "VST";
        String pfvst3 = "VST3";
		bool questionVST = false;
		bool questionVST3 = false;
		FileSearchPath fspVST ;
		FileSearchPath fspVST3 ;
        for (int i = 0; i < processor->fPluginManager.getNumFormats(); i++)
        {
            AudioPluginFormat* const format = processor->fPluginManager.getFormat(i);

           	FileSearchPath fsp ;
			bool shouldScan = true;
			if(format->getName() == pf){
				if ( !questionVST){
					WildcardFileFilter wildcardFilter ("*.dll", String::empty, "Foo files");
					FileBrowserComponent browser (FileBrowserComponent::canSelectDirectories | FileBrowserComponent::openMode,
						File::nonexistent,
						&wildcardFilter,
						nullptr);
					FileChooserDialogBox dialogBox ("Select your VST plugins  Directory",
						"Please highlight the directory and click Open",
						browser,
						false,
						Colours::lightgrey);


					if (dialogBox.show())
					{
						File selectedFile = browser.getSelectedFile (0);
						fspVST = FileSearchPath(selectedFile.getFullPathName());
					}
					questionVST = true;
				}
				fsp = fspVST;
			} else if(format->getName() == pfvst3){
				if ( !questionVST3){
					WildcardFileFilter wildcardFilter ("*.dll", String::empty, "Foo files");
					FileBrowserComponent browser (FileBrowserComponent::canSelectDirectories | FileBrowserComponent::openMode,
						File::nonexistent,
						&wildcardFilter,
						nullptr);
					FileChooserDialogBox dialogBox ("Select your VST3 plugins  Directory",
						"Please highlight the directory and click Open",
						browser,
						false,
						Colours::lightgrey);


					if (dialogBox.show())
					{
						File selectedFile = browser.getSelectedFile (0);
						fspVST3 = FileSearchPath(selectedFile.getFullPathName());
					}
					questionVST3 = true;
				}
				fsp = fspVST3;
			} else {
				fsp	= format->getDefaultLocationsToSearch();
				shouldScan = AlertWindow::showOkCancelBox (AlertWindow::WarningIcon,
                                          TRANS("Plugin Scanning"),
                                          TRANS("If you choose to scan folders that contain non-plugin files, "
                                                "then scanning may take a long time, and can cause crashes when "
                                                "attempting to load unsuitable files."),
                                          TRANS ("Scan"),
                                          String::empty,
                                          nullptr,
                                          nullptr);
			}

			PluginDirectoryScanner * scanner = new PluginDirectoryScanner(*processor->knownPluginList, *format, fsp, true, processor->deadMansPedalFile);
            String plugName;

            if (shouldScan)
            {
                while (scanner->scanNextFile(true, plugName))
                { }
            }
        }
#else
		String pfau = "AudioUnit";
        String pfvst = "VST";
        String pfvst3 = "VST3";
        bool questionAU = false;
        bool questionVST = false;
        bool questionVST3 = false;

        bool skipAU = false;
        bool skipVST = false;
        bool skipVST3 = false;
        FileSearchPath fspAU ;
        FileSearchPath fspVST ;
        FileSearchPath fspVST3 ;
        for (int i = 0; i < processor->fPluginManager.getNumFormats(); i++)
        {
            AudioPluginFormat* const format = processor->fPluginManager.getFormat(i);

           	FileSearchPath fsp ;
            bool shouldScan = false;
            if(format->getName() == pfau){
                if ( !questionAU && !skipAU){
                    WildcardFileFilter wildcardFilter ("*.component", String::empty, "Foo files");
                    shouldScan = AlertWindow::showOkCancelBox (AlertWindow::WarningIcon,
                                                  TRANS("AU Plugin Scanning"),
                                                  TRANS("If you choose to scan folders that contain non-plugin files, "
                                                        "then scanning may take a long time, and can cause crashes when "
                                                        "attempting to load unsuitable files."),
                                                  TRANS ("Scan"),
                                                  String::empty,
                                                  nullptr,
                                                  nullptr);

                    fspAU = format->getDefaultLocationsToSearch() ;
                    questionAU = true;
                    skipAU = !shouldScan;
                }

                if(skipAU){
                    continue;
                }
                fsp = fspAU;

            } else if(format->getName() == pfvst){
                if ( !questionVST && !skipVST){
                    WildcardFileFilter wildcardFilter ("*.vst", String::empty, "Foo files");
                    shouldScan = AlertWindow::showOkCancelBox (AlertWindow::WarningIcon,
                                                  TRANS("VST Plugin Scanning"),
                                                  TRANS("If you choose to scan folders that contain non-plugin files, "
                                                        "then scanning may take a long time, and can cause crashes when "
                                                        "attempting to load unsuitable files."),
                                                  TRANS ("Scan"),
                                                  String::empty,
                                                  nullptr,
                                                  nullptr);

                   //if (juce::NativeMessageBox::showOkCancelBox.show())
                   // {
                    fspVST =format->getDefaultLocationsToSearch() ; //"/Library/Audio/Plugins/VST/";
                    //}
                    questionVST = true;
                    skipVST = !shouldScan;
                }
                if(skipVST){
                    continue;
                }
                fsp = fspVST;
            } else {
                if ( !questionVST3 && !skipVST3){
                    WildcardFileFilter wildcardFilter ("*.vst3", String::empty, "Foo files");
                    shouldScan = AlertWindow::showOkCancelBox (AlertWindow::WarningIcon,
                                                  TRANS("VST3 Plugin Scanning"),
                                                  TRANS("If you choose to scan folders that contain non-plugin files, "
                                                        "then scanning may take a long time, and can cause crashes when "
                                                        "attempting to load unsuitable files."),
                                                  TRANS ("Scan"),
                                                  String::empty,
                                                  nullptr,
                                                  nullptr);

                    //if (juce::NativeMessageBox::showOkCancelBox.show())
                    //{
                    fspVST3 = format->getDefaultLocationsToSearch() ;//"/Library/Audio/Plugins/VST3/";
                    //}
                    questionVST3 = true;
                    skipVST3 = !shouldScan;
                }
                if(skipVST3){
                    continue;
                }
                fsp = fspVST3;
            }

            PluginDirectoryScanner * scanner = new PluginDirectoryScanner(*processor->knownPluginList, *format, fsp, true, processor->deadMansPedalFile);
            String plugName;

            if (shouldScan)
            {
                while (scanner->scanNextFile(true, plugName))
                { }
            }
        }
#endif
    }

  //  ScopedPointer<TextButton> button_scan;
    ScopedPointer<TextButton> button_barLength;
    ScopedPointer<TextButton> button_reset;

    ScopedPointer<TextButton> button_latencytest;

    void openPluginSelector() { }

    void scanFor (AudioPluginFormat& format);
    bool isScanning() const noexcept;
    void scanFinished (const StringArray& failedFiles);

    FileSearchPath getLastSearchPath (PropertiesFile& properties, AudioPluginFormat& format);

    void setLastSearchPath (PropertiesFile& properties, AudioPluginFormat& format,
                            const FileSearchPath& newPath);

    void sliderValueChanged (Slider* sliderThatWasMoved);

    void timerCallback();

    void syncUIFromProcessor();
    void computeMeters();



    //[/UserMethods]

    void paint (Graphics& g) override;
    void resized() override;

    // Binary resources:
    static const char* background1_png;
    static const int background1_pngSize;
    static const char* background2_png;
    static const int background2_pngSize;
    static const char* background3_png;
    static const int background3_pngSize;
    static const char* msg_ui_background_png;
    static const int msg_ui_background_pngSize;
    static const char* msg_ui_background2_png;
    static const int msg_ui_background2_pngSize;
    static const char* msg_ui_background3_png;
    static const int msg_ui_background3_pngSize;
    static const char* whitered_dial_0100_60x60_horizontal_png;
    static const int whitered_dial_0100_60x60_horizontal_pngSize;
    static const char* whitered_dial_0100_60x60_vertical_png;
    static const int whitered_dial_0100_60x60_vertical_pngSize;
    static const char* whitered_dial_1010_60x60_horizontal_png;
    static const int whitered_dial_1010_60x60_horizontal_pngSize;
    static const char* whitered_dial_1010_60x60_vertical_png;
    static const int whitered_dial_1010_60x60_vertical_pngSize;
    static const char* msg_expireddemo_png;
    static const int msg_expireddemo_pngSize;


private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    PluginSlotComponent * pluginSlotComponent;

    class Scanner;
    friend class Scanner;
    friend struct ContainerDeletePolicy<Scanner>;
    ScopedPointer<Scanner> currentScanner;


    Image image_gaindials;
    Image image_wetdrydials;

    ScopedPointer<FilmstripSlider> slider_InputGain_Mid;
    ScopedPointer<FilmstripSlider> slider_InputGain_Side;

    ScopedPointer<FilmstripSlider> slider_OutputGain_Mid;
    ScopedPointer<FilmstripSlider> slider_OutputGain_Side;

    ScopedPointer<FilmstripSlider> slider_WetDry_Mid;
    ScopedPointer<FilmstripSlider> slider_WetDry_Side;

    ScopedPointer<HighQualityMeter> meter_inputL;
    ScopedPointer<HighQualityMeter> meter_inputR;
    ScopedPointer<HighQualityMeter> meter_inputMid;
    ScopedPointer<HighQualityMeter> meter_inputSide;

    ScopedPointer<HighQualityMeter> meter_outputL;
    ScopedPointer<HighQualityMeter> meter_outputR;
    ScopedPointer<HighQualityMeter> meter_outputMid;
    ScopedPointer<HighQualityMeter> meter_outputSide;

    ScopedPointer<ClipComponent> clip_inputL;
    ScopedPointer<ClipComponent> clip_inputR;
    ScopedPointer<ClipComponent> clip_inputMid;
    ScopedPointer<ClipComponent> clip_inputSide;

    ScopedPointer<ClipComponent> clip_outputL;
    ScopedPointer<ClipComponent> clip_outputR;
    ScopedPointer<ClipComponent> clip_outputMid;
    ScopedPointer<ClipComponent> clip_outputSide;




    //[/UserVariables]

    //==============================================================================
    Image cachedImage_msg_ui_background3_png_1;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainViewComponent)
};

//[EndFile] You can add extra defines here...

//[/EndFile]

#endif   // __JUCE_HEADER_16D92098AB691ACA__
