/*
  ==============================================================================

  This is an automatically generated GUI class created by the Introjucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Introjucer version: 3.2.0

  ------------------------------------------------------------------------------

  The Introjucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright (c) 2015 - ROLI Ltd.

  ==============================================================================
*/

//[Headers] You can add your own extra header files here...
//[/Headers]

#include "MainViewComponent.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
MainViewComponent::MainViewComponent ()
{
    //[Constructor_pre] You can add your own custom stuff here..
    //[/Constructor_pre]

    cachedImage_msg_ui_background3_png_1 = ImageCache::getFromMemory (msg_ui_background3_png, msg_ui_background3_pngSize);

    //[UserPreSize]

    pluginSlotComponent = new PluginSlotComponent();
    pluginSlotComponent->setSlotIndex(0);
    addAndMakeVisible(pluginSlotComponent);

    //image_wetdrydials    = ImageFileFormat::loadFrom (BinaryData::WhistleTune_png, BinaryData::WhistleTune_pngSize);
    image_gaindials    = ImageFileFormat::loadFrom (BinaryData::whitered_dial_0100_60x60_vertical_png, BinaryData::whitered_dial_0100_60x60_vertical_pngSize);
    //image_gaindials     = ImageFileFormat::loadFrom (BinaryData::WhistleTune2_png, BinaryData::WhistleTune2_pngSize);
    
    image_wetdrydials = ImageFileFormat::loadFrom (BinaryData::whitered_dial_1010_60x60_vertical_png, BinaryData::whitered_dial_1010_60x60_vertical_pngSize);


    slider_WetDry_Mid = new FilmstripSlider ("new slider");
    slider_WetDry_Mid->setRange (0.0, 100.0, 0);
    slider_WetDry_Mid->setSliderStyle (Slider::RotaryVerticalDrag);
    slider_WetDry_Mid->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider_WetDry_Mid->addListener (this);
    slider_WetDry_Mid->setImage(image_gaindials, 101, false);
    slider_WetDry_Mid->setDoubleClickReturnValue(true, 0.0);
    addAndMakeVisible (slider_WetDry_Mid);

    slider_WetDry_Side = new FilmstripSlider ("new slider");
    slider_WetDry_Side->setRange (0.0, 100.0, 0);
    slider_WetDry_Side->setSliderStyle (Slider::RotaryVerticalDrag);
    slider_WetDry_Side->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider_WetDry_Side->addListener (this);
    slider_WetDry_Side->setImage(image_gaindials, 101, false);
    slider_WetDry_Side->setDoubleClickReturnValue(true, 0.0);
    addAndMakeVisible (slider_WetDry_Side);

    slider_InputGain_Mid = new FilmstripSlider ("new slider");
    slider_InputGain_Mid->setRange (-15.0, 15.0, 0);
    slider_InputGain_Mid->setSliderStyle (Slider::RotaryVerticalDrag);
    slider_InputGain_Mid->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider_InputGain_Mid->addListener (this);
    slider_InputGain_Mid->setImage(image_wetdrydials, 101, false);
    slider_InputGain_Mid->setDoubleClickReturnValue(true, 0.0);
    addAndMakeVisible (slider_InputGain_Mid);

    slider_InputGain_Side = new FilmstripSlider ("new slider");
    slider_InputGain_Side->setRange (-15.0, 15.0, 0);
    slider_InputGain_Side->setSliderStyle (Slider::RotaryVerticalDrag);
    slider_InputGain_Side->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider_InputGain_Side->addListener (this);
    slider_InputGain_Side->setImage(image_wetdrydials, 101, false);
    slider_InputGain_Side->setDoubleClickReturnValue(true, 0.0);
    addAndMakeVisible (slider_InputGain_Side);

    slider_OutputGain_Mid = new FilmstripSlider ("new slider");
    slider_OutputGain_Mid->setRange (-15.0, 15.0, 0);
    slider_OutputGain_Mid->setSliderStyle (Slider::RotaryVerticalDrag);
    slider_OutputGain_Mid->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider_OutputGain_Mid->addListener (this);
    slider_OutputGain_Mid->setImage(image_wetdrydials, 101, false);
    slider_OutputGain_Mid->setDoubleClickReturnValue(true, 0.0);
    addAndMakeVisible (slider_OutputGain_Mid);

    slider_OutputGain_Side = new FilmstripSlider ("new slider");
    slider_OutputGain_Side->setRange (-15.0, 15.0, 0);
    slider_OutputGain_Side->setSliderStyle (Slider::RotaryVerticalDrag);
    slider_OutputGain_Side->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider_OutputGain_Side->addListener (this);
    slider_OutputGain_Side->setImage(image_wetdrydials, 101, false);
    slider_OutputGain_Side->setDoubleClickReturnValue(true, 0.0);
    addAndMakeVisible (slider_OutputGain_Side);


    
    
    
    
    // meters
    meter_inputL = new HighQualityMeter(1);
    addAndMakeVisible (meter_inputL);

    meter_inputR = new HighQualityMeter(1);
    addAndMakeVisible (meter_inputR);

    meter_inputMid = new HighQualityMeter(1);
    addAndMakeVisible (meter_inputMid);

    meter_inputSide = new HighQualityMeter(1);
    addAndMakeVisible (meter_inputSide);

    meter_outputL = new HighQualityMeter(1);
    addAndMakeVisible (meter_outputL);

    meter_outputR = new HighQualityMeter(1);
    addAndMakeVisible (meter_outputR);

    meter_outputMid = new HighQualityMeter(1);
    addAndMakeVisible (meter_outputMid);

    meter_outputSide = new HighQualityMeter(1);
    addAndMakeVisible (meter_outputSide);
    
    // clips
    clip_inputL = new ClipComponent();
    addAndMakeVisible(clip_inputL);
    
    clip_inputR = new ClipComponent();
    addAndMakeVisible(clip_inputR);
    
    clip_inputMid = new ClipComponent();
    addAndMakeVisible(clip_inputMid);
    
    clip_inputSide = new ClipComponent();
    addAndMakeVisible(clip_inputSide);
    
    clip_outputL = new ClipComponent();
    addAndMakeVisible(clip_outputL);
    
    clip_outputR = new ClipComponent();
    addAndMakeVisible(clip_outputR);
    
    clip_outputMid = new ClipComponent();
    addAndMakeVisible(clip_outputMid);
    
    clip_outputSide = new ClipComponent();
    addAndMakeVisible(clip_outputSide);
    


    //[/UserPreSize]

    setSize (322, 583);


    //[Constructor] You can add your own custom stuff here..





     startTimer(50);
    //[/Constructor]
}

MainViewComponent::~MainViewComponent()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]



    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void MainViewComponent::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colours::white);

    g.setColour (Colours::black);
    g.drawImageWithin (cachedImage_msg_ui_background3_png_1,
                       0, 0, 284, 415,
                       RectanglePlacement::centred | RectanglePlacement::onlyReduceInSize,
                       false);

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void MainViewComponent::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    //[UserResized] Add your own custom resize handling here..
    
    
    pluginSlotComponent->setBounds(0, 1, 322, 56);

    int marginX, marginY;
    int width       = 50;
    int space = 58;
    marginX         = 86;
    marginY         = 58;
    int spacey      = 96;

   // slider_InputGain_Mid->setBounds(    marginX,        marginY,      60,      60   );
    
    slider_InputGain_Mid->setBounds(    marginX,        marginY,      width,      width   );
    slider_InputGain_Side->setBounds(   marginX+space,  marginY,      width,      width   );
    slider_WetDry_Mid->setBounds(   marginX,        marginY+spacey,    width,      width   );
    slider_WetDry_Side->setBounds(  marginX+space,  marginY+spacey,    width,      width   );
    slider_OutputGain_Mid->setBounds(       marginX,        marginY+(spacey*2)+2,    width,      width   );
    slider_OutputGain_Side->setBounds(      marginX+space,  marginY+(spacey*2)+2,    width,      width   );



    // meters

 /*   marginX         = 19;
    int marginXa    = 63;
    width           = 4;
    space       = 5;
    int width2      = width + space;
    int topMargin   = 59;
    int length      = 334;
    int marginX2    = 208;
    int marginX2a    = marginX2 + 43;
  */
    
    marginX         = 19-2;
    int marginXa    = 63-2;
    width           = 4+2;
    space       = 5;
    int width2      = width + space;
    int topMargin   = 59;
    int length      = 334;
    int marginX2    = 208-2;
    int marginX2a    = marginX2 + 43;

    meter_inputL->setBounds(marginX, topMargin, width, length);
    meter_inputR->setBounds(marginX + width2, topMargin, width, length);
    meter_inputMid->setBounds(marginXa, topMargin, width, length);
    meter_inputSide->setBounds(marginXa + width2, topMargin, width, length);

    meter_outputL->setBounds(marginX2, topMargin, width, length);
    meter_outputR->setBounds(marginX2 + width2, topMargin, width, length);
    meter_outputMid->setBounds(marginX2a, topMargin, width, length);
    meter_outputSide->setBounds(marginX2a + width2, topMargin, width, length);

    
    int clipsize = width;
    clip_inputL->setBounds(marginX, topMargin-clipsize-2, clipsize, clipsize);
    clip_inputR->setBounds(marginX+width2, topMargin-clipsize-2, clipsize, clipsize);
    clip_inputMid->setBounds(marginXa, topMargin-clipsize-2, clipsize, clipsize);
    clip_inputSide->setBounds(marginXa + width2, topMargin-clipsize-2, clipsize, clipsize);
    
    clip_outputL->setBounds(marginX2, topMargin-clipsize-2, clipsize, clipsize);
    clip_outputR->setBounds(marginX2+width2, topMargin-clipsize-2, clipsize, clipsize);
    clip_outputMid->setBounds(marginX2a, topMargin-clipsize-2, clipsize, clipsize);
    clip_outputSide->setBounds(marginX2a + width2, topMargin-clipsize-2, clipsize, clipsize);

    //[/UserResized]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...

void MainViewComponent::timerCallback()
{
    syncUIFromProcessor();
    computeMeters();
}

void MainViewComponent::computeMeters ()
{
    AudioVitaminsAudioProcessor * proc = (AudioVitaminsAudioProcessor*)processor;

    float vu[8];
    for (int i = 0; i<8; i++)
    {
        vu[i] = 1.f;
        vu[i] = proc->getVUMeterValue(i);
    }

    meter_inputL->setValue(0, vu[0]);
    meter_inputR->setValue(0, vu[1]);
    meter_inputMid->setValue(0, vu[2]);
    meter_inputSide->setValue(0, vu[3]);
    meter_outputL->setValue(0, vu[4]);
    meter_outputR->setValue(0, vu[5]);
    meter_outputMid->setValue(0, vu[6]);
    meter_outputSide->setValue(0, vu[7]);

    meter_inputL->refresh();
    meter_inputR->refresh();
    meter_inputMid->refresh();
    meter_inputSide->refresh();
    meter_outputL->refresh();
    meter_outputR->refresh();
    meter_outputMid->refresh();
    meter_outputSide->refresh();
    
    clip_inputL->SetDBValue(vu[0]);
    clip_inputR->SetDBValue(vu[1]);
    clip_inputMid->SetDBValue(vu[2]);
    clip_inputSide->SetDBValue(vu[3]);
    clip_outputL->SetDBValue(vu[4]);
    clip_outputR->SetDBValue(vu[5]);
    clip_outputMid->SetDBValue(vu[6]);
    clip_outputSide->SetDBValue(vu[7]);


}

void MainViewComponent::syncUIFromProcessor()
{
    AudioVitaminsAudioProcessor * proc = (AudioVitaminsAudioProcessor*)processor;

    pluginSlotComponent->button_pluginNamePopupMenu->setButtonText(proc->pluginAssignProcessor[0]->getName());

    slider_InputGain_Mid->setValue(proc->getParameter(INPUTGAIN_MID));
    slider_InputGain_Side->setValue(proc->getParameter(INPUTGAIN_SIDE));
    slider_OutputGain_Mid->setValue(proc->getParameter(OUTPUTGAIN_MID));
    slider_OutputGain_Side->setValue(proc->getParameter(OUTPUTGAIN_SIDE));
    slider_WetDry_Mid->setValue(proc->getParameter(WETDRY_MID));
    slider_WetDry_Side->setValue(proc->getParameter(WETDRY_SIDE));

}

void MainViewComponent::sliderValueChanged (Slider* sliderThatWasMoved)
{
    AudioVitaminsAudioProcessor * proc = (AudioVitaminsAudioProcessor*)processor;

    if (sliderThatWasMoved == slider_InputGain_Mid)
    {
        proc->setParameter(INPUTGAIN_MID, slider_InputGain_Mid->getValue());
    }
    else if (sliderThatWasMoved == slider_InputGain_Side)
    {
        proc->setParameter(INPUTGAIN_SIDE, slider_InputGain_Side->getValue());
    }
    else if (sliderThatWasMoved == slider_OutputGain_Mid)
    {
        proc->setParameter(OUTPUTGAIN_MID, slider_OutputGain_Mid->getValue());
    }
    else if (sliderThatWasMoved == slider_OutputGain_Side)
    {
        proc->setParameter(OUTPUTGAIN_SIDE, slider_OutputGain_Side->getValue());
    }
    else if (sliderThatWasMoved == slider_WetDry_Mid)
    {
        proc->setParameter(WETDRY_MID, slider_WetDry_Mid->getValue());
    }
    else if (sliderThatWasMoved == slider_WetDry_Side)
    {
        proc->setParameter(WETDRY_SIDE, slider_WetDry_Side->getValue());
    }

}


void MainViewComponent::buttonClicked (Button* buttonThatWasClicked)
{
  //  if (buttonThatWasClicked == button_scan)
  //  {
  //      rescanPlugins();
  //  }
/*    if (buttonThatWasClicked == button_reset)
    {
        AudioVitaminsAudioProcessor * proc = (AudioVitaminsAudioProcessor*)processor;
        proc->resetBarCounter();
    }
    else if (buttonThatWasClicked == button_latencytest)
    {
        AudioVitaminsAudioProcessor * proc = (AudioVitaminsAudioProcessor*)processor;
        proc->runLatencyTest();
    }
    else if (buttonThatWasClicked == button_barLength)
    {
        PopupMenu menu;

        String s = "0"; menu.addItem(1, s);
        s = "1"; menu.addItem(2, s);
        s = "2"; menu.addItem(3, s);
        s = "4"; menu.addItem(4, s);
        s = "8"; menu.addItem(5, s);
        s = "16"; menu.addItem(6, s);
        s = "32"; menu.addItem(7, s);

        const int result = menu.show();
        if (result)
        {
            AudioVitaminsAudioProcessor * proc = (AudioVitaminsAudioProcessor*)processor;
            switch (result)
            {
                case 1: proc->SetBarLength(0); s = "0"; break;
                case 2: proc->SetBarLength(1); s = "1";break;
                case 3: proc->SetBarLength(2); s = "2";break;
                case 4: proc->SetBarLength(4); s = "4";break;
                case 5: proc->SetBarLength(8); s = "8";break;
                case 6: proc->SetBarLength(16); s = "16";break;
                case 7: proc->SetBarLength(32); s = "32";break;
                default: proc->SetBarLength(0); s = "0";break;
            }

            button_barLength->setButtonText(s);
        }
    }

 */
}

class MainViewComponent::Scanner    : private Timer
{
public:
    Scanner (MainViewComponent& plc, AudioPluginFormat& format, PropertiesFile* properties, int threads)
    : owner (plc), formatToScan (format), propertiesToUse (properties),
    pathChooserWindow (TRANS("Select folders to scan..."), String::empty, AlertWindow::NoIcon),
    progressWindow (TRANS("Scanning for plug-ins..."),
                    TRANS("Searching for all possible plug-in files..."), AlertWindow::NoIcon),
    progress (0.0), numThreads (threads), finished (false)
    {
        FileSearchPath path (formatToScan.getDefaultLocationsToSearch());

        if (path.getNumPaths() > 0) // if the path is empty, then paths aren't used for this format.
        {
            if (propertiesToUse != nullptr)
                path = owner.getLastSearchPath (*propertiesToUse, formatToScan);

            pathList.setSize (500, 300);
            pathList.setPath (path);

            pathChooserWindow.addCustomComponent (&pathList);
            pathChooserWindow.addButton (TRANS("Scan"),   1, KeyPress (KeyPress::returnKey));
            pathChooserWindow.addButton (TRANS("Cancel"), 0, KeyPress (KeyPress::escapeKey));

            pathChooserWindow.enterModalState (true,
                                               ModalCallbackFunction::forComponent (startScanCallback,
                                                                                    &pathChooserWindow, this),
                                               false);
        }
        else
        {
            startScan();
        }
    }

    ~Scanner()
    {
        if (pool != nullptr)
        {
            pool->removeAllJobs (true, 60000);
            pool = nullptr;
        }
    }


private:
    MainViewComponent& owner;
    AudioPluginFormat& formatToScan;
    PropertiesFile* propertiesToUse;
    ScopedPointer<PluginDirectoryScanner> scanner;
    AlertWindow pathChooserWindow, progressWindow;
    FileSearchPathListComponent pathList;
    String pluginBeingScanned;
    double progress;
    int numThreads;
    bool finished;
    ScopedPointer<ThreadPool> pool;

    static void startScanCallback (int result, AlertWindow* alert, Scanner* scanner)
    {
        if (alert != nullptr && scanner != nullptr)
        {
            if (result != 0)
                scanner->warnUserAboutStupidPaths();
            else
                scanner->finishedScan();
        }
    }

    // Try to dissuade people from to scanning their entire C: drive, or other system folders.
    void warnUserAboutStupidPaths()
    {
        for (int i = 0; i < pathList.getPath().getNumPaths(); ++i)
        {
            const File f (pathList.getPath()[i]);

            if (isStupidPath (f))
            {
                AlertWindow::showOkCancelBox (AlertWindow::WarningIcon,
                                              TRANS("Plugin Scanning"),
                                              TRANS("If you choose to scan folders that contain non-plugin files, "
                                                    "then scanning may take a long time, and can cause crashes when "
                                                    "attempting to load unsuitable files.")
                                              + newLine
                                              + TRANS ("Are you sure you want to scan the folder \"XYZ\"?")
                                              .replace ("XYZ", f.getFullPathName()),
                                              TRANS ("Scan"),
                                              String::empty,
                                              nullptr,
                                              ModalCallbackFunction::create (warnAboutStupidPathsCallback, this));
                return;
            }
        }

        startScan();
    }

    static bool isStupidPath (const File& f)
    {
        Array<File> roots;
        File::findFileSystemRoots (roots);

        if (roots.contains (f))
            return true;

        File::SpecialLocationType pathsThatWouldBeStupidToScan[]
        = { File::globalApplicationsDirectory,
            File::userHomeDirectory,
            File::userDocumentsDirectory,
            File::userDesktopDirectory,
            File::tempDirectory,
            File::userMusicDirectory,
            File::userMoviesDirectory,
            File::userPicturesDirectory };

        for (int i = 0; i < numElementsInArray (pathsThatWouldBeStupidToScan); ++i)
        {
            const File sillyFolder (File::getSpecialLocation (pathsThatWouldBeStupidToScan[i]));

            if (f == sillyFolder || sillyFolder.isAChildOf (f))
                return true;
        }

        return false;
    }

    static void warnAboutStupidPathsCallback (int result, Scanner* scanner)
    {
        if (result != 0)
            scanner->startScan();
        else
            scanner->finishedScan();
    }

    void startScan()
    {
        pathChooserWindow.setVisible (false);

        scanner = new PluginDirectoryScanner (*owner.processor->knownPluginList, formatToScan, pathList.getPath(),
                                              true, owner.processor->deadMansPedalFile);

        if (propertiesToUse != nullptr)
        {
            owner.setLastSearchPath (*propertiesToUse, formatToScan, pathList.getPath());
            propertiesToUse->saveIfNeeded();
        }

        progressWindow.addButton (TRANS("Cancel"), 0, KeyPress (KeyPress::escapeKey));
        progressWindow.addProgressBarComponent (progress);
        progressWindow.enterModalState();

        if (numThreads > 0)
        {
            pool = new ThreadPool (numThreads);

            for (int i = numThreads; --i >= 0;)
                pool->addJob (new ScanJob (*this), true);
        }

        startTimer (20);
    }

    void finishedScan()
    {
        owner.scanFinished (scanner != nullptr ? scanner->getFailedFiles()
                            : StringArray());
    }

    void timerCallback() override
    {
        if (pool == nullptr)
        {
            if (doNextScan())
                startTimer (20);
        }

        if (! progressWindow.isCurrentlyModal())
            finished = true;

        if (finished)
            finishedScan();
        else
            progressWindow.setMessage (TRANS("Testing") + ":\n\n" + pluginBeingScanned);
    }

    bool doNextScan()
    {
        if (scanner->scanNextFile (true, pluginBeingScanned))
        {
            progress = scanner->getProgress();
            return true;
        }

        finished = true;
        return false;
    }

    struct ScanJob  : public ThreadPoolJob
    {
        ScanJob (Scanner& s)  : ThreadPoolJob ("pluginscan"), scanner (s) {}

        JobStatus runJob()
        {
            while (scanner.doNextScan() && ! shouldExit())
            {}

            return jobHasFinished;
        }

        Scanner& scanner;

        JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (ScanJob)
    };

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (Scanner)
};

void MainViewComponent::scanFor (AudioPluginFormat& format)
{
    int numThreads = 8;
    currentScanner = new Scanner (*this, format,processor->gAppProperties->getUserSettings(), numThreads);
}

bool MainViewComponent::isScanning() const noexcept
{
    return currentScanner != nullptr;
}

void MainViewComponent::scanFinished (const StringArray& failedFiles)
{
    StringArray shortNames;

    for (int i = 0; i < failedFiles.size(); ++i)
        shortNames.add (File::createFileWithoutCheckingPath (failedFiles[i]).getFileName());

    currentScanner = nullptr; // mustn't delete this before using the failed files array

    if (shortNames.size() > 0)
        AlertWindow::showMessageBoxAsync (AlertWindow::InfoIcon,
                                          TRANS("Scan complete"),
                                          TRANS("Note that the following files appeared to be plugin files, but failed to load correctly")
                                          + ":\n\n"
                                          + shortNames.joinIntoString (", "));
}

FileSearchPath MainViewComponent::getLastSearchPath (PropertiesFile& properties, AudioPluginFormat& format)
{
    return FileSearchPath (properties.getValue ("lastPluginScanPath_" + format.getName(),
                                                format.getDefaultLocationsToSearch().toString()));
}

void MainViewComponent::setLastSearchPath (PropertiesFile& properties, AudioPluginFormat& format,
                                           const FileSearchPath& newPath)
{
    properties.setValue ("lastPluginScanPath_" + format.getName(), newPath.toString());
}
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Introjucer information section --

    This is where the Introjucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="MainViewComponent" componentName=""
                 parentClasses="public Component" constructorParams="" variableInitialisers=""
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330"
                 fixedSize="0" initialWidth="322" initialHeight="583">
  <BACKGROUND backgroundColour="ffffffff">
    <IMAGE pos="0 0 284 415" resource="msg_ui_background3_png" opacity="1"
           mode="2"/>
  </BACKGROUND>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif

//==============================================================================
// Binary resources - be careful not to edit any of these sections!

// JUCER_RESOURCE: background1_png, 33712, "../../graphic assets/background1.png"
static const unsigned char resource_MainViewComponent_background1_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,1,66,0,0,2,71,8,2,0,0,0,106,234,200,229,0,0,0,25,116,69,88,116,83,111,102,
116,119,97,114,101,0,65,100,111,98,101,32,73,109,97,103,101,82,101,97,100,121,113,201,101,60,0,0,3,34,105,84,88,116,88,77,76,58,99,111,109,46,97,100,111,98,101,46,120,109,112,0,0,0,0,0,60,63,120,112,97,
99,107,101,116,32,98,101,103,105,110,61,34,239,187,191,34,32,105,100,61,34,87,53,77,48,77,112,67,101,104,105,72,122,114,101,83,122,78,84,99,122,107,99,57,100,34,63,62,32,60,120,58,120,109,112,109,101,
116,97,32,120,109,108,110,115,58,120,61,34,97,100,111,98,101,58,110,115,58,109,101,116,97,47,34,32,120,58,120,109,112,116,107,61,34,65,100,111,98,101,32,88,77,80,32,67,111,114,101,32,53,46,48,45,99,48,
54,48,32,54,49,46,49,51,52,55,55,55,44,32,50,48,49,48,47,48,50,47,49,50,45,49,55,58,51,50,58,48,48,32,32,32,32,32,32,32,32,34,62,32,60,114,100,102,58,82,68,70,32,120,109,108,110,115,58,114,100,102,61,
34,104,116,116,112,58,47,47,119,119,119,46,119,51,46,111,114,103,47,49,57,57,57,47,48,50,47,50,50,45,114,100,102,45,115,121,110,116,97,120,45,110,115,35,34,62,32,60,114,100,102,58,68,101,115,99,114,105,
112,116,105,111,110,32,114,100,102,58,97,98,111,117,116,61,34,34,32,120,109,108,110,115,58,120,109,112,61,34,104,116,116,112,58,47,47,110,115,46,97,100,111,98,101,46,99,111,109,47,120,97,112,47,49,46,
48,47,34,32,120,109,108,110,115,58,120,109,112,77,77,61,34,104,116,116,112,58,47,47,110,115,46,97,100,111,98,101,46,99,111,109,47,120,97,112,47,49,46,48,47,109,109,47,34,32,120,109,108,110,115,58,115,
116,82,101,102,61,34,104,116,116,112,58,47,47,110,115,46,97,100,111,98,101,46,99,111,109,47,120,97,112,47,49,46,48,47,115,84,121,112,101,47,82,101,115,111,117,114,99,101,82,101,102,35,34,32,120,109,112,
58,67,114,101,97,116,111,114,84,111,111,108,61,34,65,100,111,98,101,32,80,104,111,116,111,115,104,111,112,32,67,83,53,32,77,97,99,105,110,116,111,115,104,34,32,120,109,112,77,77,58,73,110,115,116,97,110,
99,101,73,68,61,34,120,109,112,46,105,105,100,58,55,69,53,65,57,70,54,53,52,51,54,69,49,49,69,53,66,67,48,49,65,50,55,65,66,68,69,56,48,50,56,49,34,32,120,109,112,77,77,58,68,111,99,117,109,101,110,116,
73,68,61,34,120,109,112,46,100,105,100,58,55,69,53,65,57,70,54,54,52,51,54,69,49,49,69,53,66,67,48,49,65,50,55,65,66,68,69,56,48,50,56,49,34,62,32,60,120,109,112,77,77,58,68,101,114,105,118,101,100,70,
114,111,109,32,115,116,82,101,102,58,105,110,115,116,97,110,99,101,73,68,61,34,120,109,112,46,105,105,100,58,55,69,53,65,57,70,54,51,52,51,54,69,49,49,69,53,66,67,48,49,65,50,55,65,66,68,69,56,48,50,56,
49,34,32,115,116,82,101,102,58,100,111,99,117,109,101,110,116,73,68,61,34,120,109,112,46,100,105,100,58,55,69,53,65,57,70,54,52,52,51,54,69,49,49,69,53,66,67,48,49,65,50,55,65,66,68,69,56,48,50,56,49,
34,47,62,32,60,47,114,100,102,58,68,101,115,99,114,105,112,116,105,111,110,62,32,60,47,114,100,102,58,82,68,70,62,32,60,47,120,58,120,109,112,109,101,116,97,62,32,60,63,120,112,97,99,107,101,116,32,101,
110,100,61,34,114,34,63,62,213,167,181,230,0,0,128,36,73,68,65,84,120,218,236,189,11,124,83,101,186,239,159,149,149,123,210,166,185,244,150,166,119,10,105,185,131,130,219,219,12,162,99,229,131,226,232,
136,34,123,148,97,132,97,112,239,153,205,86,116,95,252,40,56,103,159,217,103,142,30,142,251,243,31,47,131,32,160,227,56,50,32,160,51,94,208,237,120,102,188,128,128,5,91,104,177,105,105,211,166,109,210,
164,77,115,79,214,229,255,36,171,172,92,90,218,213,194,164,65,158,239,103,125,210,247,93,121,215,53,207,111,61,207,243,174,119,173,74,230,204,185,74,132,32,200,229,140,24,79,1,130,160,140,17,4,65,25,35,
8,130,50,70,16,148,49,130,32,40,99,4,65,80,198,8,130,160,140,17,4,101,140,32,8,202,24,65,16,148,49,130,32,40,99,4,65,25,35,8,130,50,70,16,4,101,140,32,8,202,24,65,174,88,36,120,10,16,100,12,74,116,225,
61,63,110,230,202,15,238,176,116,13,200,81,198,151,152,178,178,146,234,234,74,141,70,35,22,19,104,112,8,15,195,48,94,175,207,106,61,103,179,117,95,228,170,166,23,6,141,154,40,87,174,45,14,160,140,83,209,
71,122,254,211,234,173,9,77,251,151,10,241,17,221,36,86,48,115,166,69,163,81,238,223,191,175,187,187,27,126,54,180,93,132,135,36,73,147,201,180,108,217,50,141,70,125,230,204,217,9,24,149,201,239,14,72,
123,6,101,252,28,179,46,204,151,203,13,161,228,198,198,156,104,177,54,242,117,151,250,10,205,141,9,25,43,210,82,65,115,36,164,167,233,162,136,72,204,78,116,13,70,163,193,96,200,219,179,103,143,205,102,
67,13,35,105,208,52,13,134,177,107,215,174,194,66,48,20,161,78,2,156,237,235,235,207,188,181,177,113,113,213,16,55,39,79,69,221,80,227,225,27,92,95,227,129,57,92,121,110,169,111,255,198,166,215,30,58,
51,175,204,55,245,151,173,194,66,147,144,118,114,185,188,182,118,70,101,101,57,203,198,194,149,201,111,208,20,12,174,236,139,44,240,72,173,42,239,141,158,144,129,42,60,104,96,77,33,223,234,30,217,32,73,
56,132,70,44,179,102,213,126,254,249,103,224,135,209,100,145,49,196,28,141,70,107,107,107,237,246,222,113,27,91,138,3,191,255,201,105,40,72,73,246,246,185,46,134,33,64,180,191,250,65,91,133,49,225,129,
193,247,174,90,228,80,203,105,75,81,224,87,247,180,41,164,49,255,241,253,249,253,95,180,229,246,122,100,217,30,84,235,245,186,202,202,10,137,132,188,216,211,122,157,187,103,99,143,123,86,208,120,66,165,
250,208,32,166,68,4,184,97,90,20,173,14,158,91,229,86,221,52,100,222,147,175,120,195,36,162,8,33,187,100,181,90,209,82,145,177,105,109,109,93,186,244,102,33,45,135,130,100,32,34,86,201,134,35,187,135,
111,74,120,136,38,187,122,48,32,209,42,169,58,147,31,164,187,246,250,148,139,66,148,38,60,129,139,77,78,233,199,123,69,81,130,252,63,133,137,244,254,187,94,118,177,159,252,95,69,151,70,198,38,83,81,105,
169,153,162,104,183,123,0,196,51,249,29,189,222,221,182,165,51,152,79,41,29,18,195,159,116,162,32,73,203,88,22,130,122,82,36,63,150,171,59,61,48,80,23,58,251,104,79,181,134,86,239,40,133,67,26,47,58,144,
249,124,62,52,83,100,108,188,94,47,152,138,144,150,246,65,249,154,157,150,55,55,156,230,231,176,172,232,185,15,205,175,124,154,34,164,251,23,59,54,221,98,147,73,18,105,224,67,187,103,180,247,43,46,194,
147,178,244,99,125,236,204,32,225,76,17,35,97,151,50,115,130,204,79,156,226,151,242,47,54,55,134,40,26,52,28,14,135,155,155,91,66,161,240,164,119,149,157,225,109,127,194,6,26,46,248,66,61,237,159,170,
228,123,139,33,31,102,165,177,115,193,168,41,226,116,78,233,207,106,42,94,215,139,8,81,251,58,103,100,121,31,218,31,114,73,96,89,150,32,132,222,197,104,233,85,129,110,185,114,191,87,186,236,185,217,160,
97,72,134,31,184,182,239,241,219,58,193,9,27,115,162,175,31,41,184,117,219,92,190,191,250,197,63,155,26,58,53,147,223,191,92,154,254,159,221,160,225,88,121,96,88,198,236,236,32,245,235,78,226,172,66,252,
123,29,115,163,79,148,71,95,172,140,193,3,123,60,67,141,141,167,253,254,192,228,247,85,78,15,60,208,27,40,142,234,27,149,69,79,85,18,77,185,163,108,217,41,215,110,171,44,255,189,158,145,176,93,15,245,
137,202,3,104,130,72,230,81,202,134,53,179,250,229,90,240,207,160,222,79,30,107,120,228,123,54,112,194,63,191,185,235,163,71,78,62,121,123,135,219,47,89,189,189,150,162,99,87,7,114,226,189,179,137,75,
76,89,132,250,95,221,108,73,244,188,22,135,87,69,88,229,32,93,250,201,30,241,161,188,88,24,251,160,235,98,101,12,26,110,110,62,11,17,245,197,156,26,102,150,207,126,219,144,124,128,52,61,103,18,245,94,
48,252,96,35,132,246,37,179,161,65,233,51,71,131,75,220,104,82,72,230,89,127,99,15,124,110,59,108,238,245,200,30,171,143,169,55,173,193,221,11,157,91,87,156,131,84,249,23,239,148,67,117,93,188,189,80,
33,172,118,211,255,232,72,76,255,179,27,188,113,226,235,62,41,91,24,165,254,203,38,10,136,201,103,10,217,25,33,145,140,21,127,152,203,46,242,95,172,140,47,9,193,107,7,25,146,53,126,161,17,127,149,55,78,
83,151,204,248,158,78,196,138,92,75,61,104,82,72,102,168,52,134,150,88,6,215,127,167,103,199,154,150,152,216,24,98,87,60,150,94,125,205,112,114,247,246,73,195,214,67,21,135,26,12,92,245,206,249,253,166,
188,240,129,175,140,225,104,76,62,59,127,212,2,203,222,100,25,172,202,15,141,35,227,101,30,246,26,63,63,137,210,130,125,57,67,12,145,34,3,69,255,115,31,241,149,42,214,254,123,67,196,71,57,130,242,235,
12,156,38,247,223,121,65,153,234,175,85,41,29,87,36,75,41,98,81,4,43,75,9,75,100,13,57,202,126,137,199,18,50,163,125,33,25,225,15,63,109,146,144,9,35,60,221,19,147,208,202,171,156,92,245,96,131,241,201,
3,21,80,216,127,194,200,176,4,104,24,202,171,22,57,158,253,160,20,90,206,47,243,45,44,247,194,20,139,126,25,98,193,211,11,199,218,82,72,44,82,92,120,140,3,228,192,65,177,248,227,28,102,73,108,109,196,
57,25,248,97,241,103,234,113,187,123,51,229,141,139,162,210,128,88,214,174,76,153,59,36,201,109,149,107,108,82,137,61,229,94,49,225,146,41,156,18,90,198,162,121,33,153,33,89,195,64,79,252,14,48,127,187,
120,223,113,35,255,213,190,227,195,157,198,102,125,172,187,183,223,39,77,94,240,98,242,228,120,86,25,183,255,51,195,89,39,209,33,103,245,84,204,99,251,199,23,105,70,6,99,18,34,2,174,65,105,23,21,183,172,
224,217,178,124,21,69,156,205,73,59,24,130,193,1,210,72,230,128,40,90,156,164,192,130,156,88,159,147,205,61,236,93,150,207,113,157,180,13,247,69,47,159,59,220,219,196,13,246,208,157,31,209,53,188,30,246,
98,101,18,51,127,245,176,187,102,149,12,193,73,70,194,102,133,140,101,3,146,161,170,48,101,14,203,190,76,253,162,93,53,138,94,115,168,176,158,18,211,168,100,36,67,220,253,66,93,117,126,200,82,28,88,92,
57,52,219,236,159,105,138,117,41,237,61,158,191,225,187,246,88,116,125,181,19,98,233,19,157,26,136,159,239,189,122,184,199,235,141,163,5,162,248,0,108,248,108,236,86,31,105,203,109,238,85,90,157,202,113,
182,164,24,115,212,112,124,212,19,11,17,117,92,189,108,93,144,56,173,140,13,172,208,48,89,33,99,253,17,245,80,117,56,104,9,8,185,13,31,173,245,249,139,163,90,171,28,205,11,201,12,109,78,37,76,135,79,235,
158,23,155,78,60,121,28,98,236,251,22,57,64,168,144,12,223,181,32,150,9,67,21,38,190,253,7,77,250,14,151,226,182,217,110,101,124,200,215,131,59,45,148,64,175,227,146,136,12,212,5,191,237,151,136,116,52,
91,22,33,159,139,93,35,64,189,226,247,115,69,229,17,33,43,206,68,110,172,254,92,27,59,132,27,188,162,105,227,117,157,43,232,193,165,131,16,93,24,254,154,131,230,133,100,24,154,33,184,49,91,143,215,219,
242,84,212,214,67,21,7,190,50,166,181,121,175,81,191,121,111,149,66,202,108,185,227,28,84,119,127,86,68,9,142,28,37,255,82,34,249,121,41,55,145,255,84,42,62,156,155,26,135,210,162,48,33,254,141,145,56,
170,166,31,137,117,146,19,205,10,230,94,183,200,151,29,185,49,217,144,155,127,68,237,92,236,119,173,235,54,60,93,37,242,95,112,163,161,31,244,246,221,232,83,58,37,234,195,122,180,42,36,243,12,198,71,71,
67,170,252,219,117,103,86,111,175,125,234,96,197,203,127,41,190,125,174,171,48,55,210,239,147,254,241,148,161,205,169,0,13,195,183,220,115,17,190,240,68,30,52,8,136,99,211,249,68,152,216,101,0,255,204,
220,119,126,136,68,14,3,223,138,63,201,97,167,133,217,5,1,242,255,43,128,32,156,53,69,133,12,198,204,72,23,215,144,180,224,213,2,79,93,71,119,253,144,212,213,153,251,74,137,200,57,34,102,150,211,225,21,
142,182,127,232,99,164,172,233,45,221,240,72,47,4,185,200,110,35,130,96,89,161,93,79,51,138,2,155,110,233,226,202,102,93,248,253,77,167,158,121,191,116,239,177,252,231,63,78,60,5,184,98,94,255,163,183,
218,114,149,195,195,54,30,94,210,125,180,45,167,193,54,201,241,152,226,183,181,162,33,49,179,62,22,186,139,164,231,247,211,67,138,95,54,18,159,171,169,151,58,68,17,66,252,255,52,217,33,99,112,200,127,
53,84,252,38,244,205,166,158,115,171,221,249,53,33,227,65,131,244,68,46,49,32,99,153,88,44,193,212,248,134,110,29,232,188,115,0,174,81,230,63,105,53,123,74,198,61,243,145,72,68,163,209,224,211,17,200,
216,128,145,128,169,8,105,89,170,15,239,94,219,156,146,225,73,153,39,150,119,108,174,183,181,244,42,61,65,73,142,130,158,81,24,80,202,210,59,156,118,172,105,89,249,82,157,213,161,156,164,146,63,201,33,
92,18,250,31,29,162,224,121,71,237,148,16,31,231,176,215,249,32,61,38,255,71,177,160,112,61,67,167,147,21,41,95,43,169,161,8,219,90,135,115,81,0,166,156,14,153,178,91,74,134,196,129,210,136,175,52,66,
43,88,73,80,92,242,142,86,251,66,41,235,29,127,175,92,174,129,170,170,170,83,167,78,161,165,34,99,80,93,93,13,166,34,164,165,78,69,37,75,20,98,105,181,156,94,181,200,33,151,48,115,204,41,125,58,191,59,
90,48,224,151,108,92,98,31,150,16,201,26,53,209,73,203,56,166,219,70,165,228,39,229,233,51,63,213,72,62,21,234,228,137,57,115,174,202,228,105,101,231,12,121,86,56,221,215,248,124,230,104,34,160,30,36,
117,13,42,253,59,122,201,199,70,33,15,27,139,226,111,255,168,171,171,217,190,125,123,56,28,70,99,69,70,69,46,151,175,95,191,190,169,169,165,191,95,208,16,253,249,101,190,93,107,155,3,17,241,35,111,78,
251,172,53,150,214,21,231,69,126,121,87,219,252,243,239,247,104,236,86,111,222,91,101,31,140,165,132,11,203,189,219,238,179,106,149,212,134,87,167,127,110,157,226,28,48,211,50,190,132,204,154,101,81,169,
20,239,190,251,174,221,110,23,158,255,32,87,72,74,92,82,82,82,95,95,239,247,135,154,154,154,133,47,56,175,212,231,240,74,57,161,114,172,185,174,151,79,152,33,73,126,233,147,68,158,108,204,137,150,233,
195,39,58,52,83,126,188,151,241,155,49,27,27,155,203,203,75,239,185,103,165,70,163,22,254,76,41,114,37,0,151,117,159,207,223,218,218,222,217,217,53,161,5,71,118,86,241,195,185,128,14,87,202,243,121,253,
94,41,76,217,112,188,151,247,11,110,59,58,108,48,161,213,34,127,59,206,246,169,252,231,239,42,113,79,77,100,99,244,113,249,6,213,8,130,112,224,63,127,65,16,148,49,130,32,40,99,4,65,80,198,8,130,50,70,
16,4,101,140,32,8,202,24,65,16,148,49,130,160,140,17,4,65,25,35,8,130,50,70,16,4,101,140,32,40,99,4,65,80,198,8,130,160,140,17,4,65,25,35,200,149,203,212,191,253,35,254,250,29,130,224,255,240,127,19,133,
88,57,94,79,169,10,68,44,78,169,141,152,3,85,241,136,198,226,11,148,71,54,190,96,203,180,198,105,205,70,219,183,113,225,207,203,200,170,40,181,144,248,228,222,82,198,127,38,254,38,10,177,114,188,158,82,
21,8,195,164,212,70,204,129,42,51,162,113,114,179,228,239,19,149,81,91,166,173,156,73,219,118,82,179,209,246,109,92,248,243,50,178,42,74,45,36,170,232,141,17,4,249,182,120,99,222,45,224,143,129,32,232,
141,17,4,101,140,32,8,202,24,65,16,148,49,130,32,40,99,4,65,25,35,8,130,50,70,16,4,101,140,32,8,202,24,65,174,64,36,120,10,16,100,12,74,116,225,61,63,30,254,15,201,15,238,176,116,13,200,81,198,151,152,
178,178,146,234,234,74,141,70,35,22,227,255,55,70,18,48,12,227,245,250,172,214,115,54,91,247,69,174,106,122,97,208,168,137,114,229,218,226,0,202,56,21,125,164,231,63,173,222,154,208,180,127,169,16,31,
209,77,98,5,51,103,90,52,26,229,254,253,251,186,187,187,225,103,67,219,69,120,72,146,52,153,76,203,150,45,211,104,212,103,206,156,157,128,81,153,252,238,128,180,103,80,198,207,49,235,194,124,185,220,16,
74,110,108,204,137,22,107,35,95,119,169,175,208,220,152,144,177,34,45,21,52,71,66,122,154,46,138,136,196,19,126,46,194,104,52,24,12,121,123,246,236,177,217,108,168,97,36,13,154,166,193,48,118,237,218,
85,88,8,134,34,212,73,128,179,125,125,253,153,183,54,54,46,174,26,226,230,228,169,168,27,106,60,124,131,235,107,60,48,135,43,207,45,245,237,223,216,244,218,67,103,230,149,249,166,254,178,85,88,104,26,
199,107,234,117,102,115,73,77,77,181,217,108,130,41,39,71,35,147,73,33,98,153,228,6,77,193,224,202,190,200,2,143,212,170,242,222,232,9,25,168,194,131,6,214,20,242,173,238,145,13,146,132,67,104,196,50,
107,86,237,231,159,127,6,126,24,77,22,25,67,204,209,104,180,182,182,214,110,239,29,183,177,165,56,240,251,159,156,134,130,148,100,111,159,235,98,24,2,68,251,171,31,180,85,24,19,30,24,124,239,170,69,14,
181,156,182,20,5,126,117,79,155,66,26,243,31,223,159,223,255,69,91,110,175,71,150,189,65,181,197,50,93,171,205,77,158,3,85,152,212,106,245,55,223,88,39,124,90,175,115,247,108,236,113,207,10,26,79,168,
84,31,26,196,148,136,0,55,76,139,162,213,193,115,171,220,170,155,134,204,123,242,21,111,152,68,212,248,137,46,92,92,172,86,43,90,42,50,54,173,173,173,75,151,222,44,164,229,80,144,12,68,196,42,217,112,
100,247,240,77,9,15,209,100,87,15,6,36,90,37,85,103,242,131,116,215,94,159,114,81,136,210,132,39,48,197,125,76,99,109,222,100,42,2,197,134,195,97,135,195,201,95,207,42,43,203,11,10,242,65,69,240,9,243,
39,160,225,235,221,109,91,58,131,249,148,210,33,49,252,73,39,10,146,180,140,101,33,168,39,69,242,99,185,186,211,3,3,117,161,179,143,246,84,107,104,245,142,82,81,116,28,37,203,229,50,159,207,135,102,138,
140,141,215,235,5,83,17,210,210,62,40,95,179,211,242,230,134,211,252,28,150,21,61,247,161,249,149,79,139,146,155,221,191,216,177,233,22,155,76,146,72,3,31,218,61,163,189,95,145,189,50,230,164,155,22,144,
180,183,119,72,36,18,144,49,40,92,184,140,217,25,222,246,39,108,160,225,130,47,212,133,255,85,66,52,229,138,74,130,172,52,118,46,24,53,69,158,54,148,254,172,70,187,182,251,220,253,238,246,117,206,233,
125,50,217,91,69,104,130,200,197,195,178,44,247,62,35,33,180,244,170,64,183,63,191,185,11,202,253,94,233,15,119,88,64,219,144,12,223,49,207,85,172,13,59,189,178,67,39,13,175,31,41,120,175,81,255,234,67,
103,184,174,175,23,255,108,106,232,212,76,249,97,142,19,12,140,154,84,120,60,67,32,99,185,92,112,207,187,156,30,120,160,55,80,28,213,55,42,139,158,170,20,245,198,47,93,105,157,107,78,185,118,91,101,57,
41,234,184,215,221,245,80,95,213,137,92,81,135,10,173,16,201,48,74,25,205,21,86,191,92,11,233,238,227,183,117,130,251,229,191,5,133,239,59,158,255,244,219,229,171,183,215,126,244,200,73,9,201,146,226,
172,120,107,205,228,123,170,253,126,191,192,150,204,44,159,253,182,33,249,0,105,122,206,52,172,225,81,47,156,17,66,251,146,217,208,160,244,153,163,193,37,110,52,41,36,243,172,191,177,7,62,183,29,54,131,
134,31,171,183,37,107,152,227,238,133,206,173,43,206,65,170,252,139,119,202,161,186,46,222,254,178,148,177,90,173,226,124,178,192,246,193,107,7,25,146,53,126,161,17,127,149,55,78,83,151,204,248,158,78,
196,138,92,75,61,104,82,72,102,168,52,134,150,88,6,215,127,167,103,199,154,150,152,215,97,136,93,159,22,65,44,189,250,154,62,174,193,219,39,13,91,15,85,28,106,48,112,213,59,231,247,155,242,194,7,190,50,
134,163,49,249,236,252,81,11,44,123,147,101,176,42,63,148,165,65,245,168,26,46,40,200,247,251,3,110,247,128,192,69,220,127,231,5,101,170,191,86,165,116,92,145,44,165,136,191,77,79,150,18,150,200,26,114,
148,253,18,143,37,100,70,251,66,50,194,31,126,218,4,225,49,95,61,221,19,243,82,43,175,26,238,247,57,216,96,124,242,64,5,20,246,159,48,50,44,1,26,134,242,170,69,142,103,63,40,133,150,243,203,124,11,203,
189,48,193,76,154,33,22,60,189,240,242,240,198,149,149,21,20,69,79,232,110,83,176,40,42,13,136,101,237,202,148,185,67,146,220,86,185,198,38,149,216,83,114,108,194,37,83,56,37,180,12,95,148,137,100,202,
149,145,41,198,214,19,191,3,204,223,46,222,119,220,200,127,5,137,49,87,48,235,99,253,91,253,62,105,242,130,83,152,39,79,204,27,91,44,211,193,27,131,134,195,225,240,4,22,35,68,4,35,74,191,135,228,150,21,
60,91,150,175,162,136,179,57,169,41,50,52,198,1,210,72,230,128,40,90,156,164,192,130,156,216,8,106,155,123,216,187,44,159,227,58,105,27,238,139,94,62,215,197,21,184,193,30,186,243,35,186,134,215,51,117,
174,71,50,33,13,107,181,185,160,97,225,225,244,112,156,60,32,25,170,10,83,230,176,236,203,212,47,218,85,163,232,53,135,10,235,41,49,141,74,70,50,196,221,47,212,85,231,135,44,197,129,197,149,67,179,205,
254,153,166,88,223,237,222,227,249,27,190,107,143,69,215,87,59,33,150,62,209,169,129,248,249,222,171,135,123,188,222,56,90,32,138,15,192,134,207,198,110,245,145,182,220,230,94,165,213,169,204,118,25,79,
90,195,128,254,136,122,168,58,28,180,4,132,220,134,143,214,250,252,197,81,173,85,142,230,133,100,134,54,167,18,166,195,167,117,207,139,77,39,158,60,14,49,246,125,139,28,32,84,72,134,239,90,16,203,132,
161,10,19,223,254,131,38,125,135,75,113,219,108,183,50,62,228,235,193,157,22,106,170,189,142,88,160,134,213,106,117,99,227,233,73,104,24,80,127,174,133,79,215,13,94,209,180,241,238,81,41,232,193,165,131,
16,132,27,254,154,131,230,133,100,24,154,33,184,49,91,143,215,219,242,84,212,214,67,21,7,190,50,166,181,121,175,81,191,121,111,149,66,202,108,185,227,28,84,119,127,86,68,101,65,228,56,142,55,150,72,72,
139,101,134,92,46,111,110,110,241,251,3,147,219,6,217,144,155,127,68,237,92,236,119,173,235,54,60,93,37,242,95,112,163,161,31,244,246,221,232,83,58,37,234,195,122,180,42,36,243,12,198,71,71,67,170,252,
219,117,103,86,111,175,125,234,96,197,203,127,41,190,125,174,171,48,55,210,239,147,254,241,148,161,205,169,0,13,195,183,220,115,17,190,48,153,13,187,45,25,87,195,240,9,126,120,98,125,90,105,12,73,11,94,
45,240,212,117,116,215,15,73,93,157,185,175,148,136,156,35,98,102,57,29,94,225,104,251,135,62,70,202,154,222,210,197,70,107,34,200,69,195,255,79,73,33,204,40,10,108,186,165,139,43,155,117,225,247,55,157,
122,230,253,210,189,199,242,159,255,56,241,20,224,138,121,253,143,222,106,203,85,14,15,246,122,120,73,247,209,182,156,6,155,38,123,101,12,26,230,70,122,204,155,55,123,212,6,54,91,151,144,71,192,98,14,
249,175,134,138,223,132,190,217,212,115,110,181,59,191,38,100,60,104,144,158,200,37,6,100,44,92,209,114,104,166,198,55,116,235,64,231,157,3,16,78,155,255,164,213,236,41,25,247,204,71,34,17,141,70,131,
79,71,32,99,3,70,2,166,34,164,101,169,62,188,123,109,115,74,134,39,101,158,88,222,177,185,222,214,210,171,244,4,37,57,10,122,70,97,64,41,75,127,184,125,199,154,150,149,47,213,89,29,202,44,149,241,4,70,
77,143,11,43,82,190,86,82,67,17,182,181,14,231,162,0,76,57,29,50,101,183,148,12,137,3,165,17,95,105,132,86,176,146,160,184,228,29,173,246,133,82,214,59,126,199,155,203,53,80,85,85,117,234,212,41,180,84,
100,12,170,171,171,193,84,132,180,212,169,168,100,137,66,44,173,150,211,171,22,57,228,18,102,142,57,165,79,231,119,71,11,6,252,146,141,75,236,195,18,34,89,163,38,58,181,50,38,230,204,185,42,147,219,99,
231,12,121,86,56,221,215,248,124,230,104,226,122,49,72,234,26,84,250,119,244,146,143,141,66,30,54,22,197,223,254,81,87,87,179,125,251,246,139,138,246,145,111,53,224,135,214,175,95,223,212,212,210,223,
47,104,136,254,252,50,223,174,181,205,129,136,248,145,55,167,125,214,26,75,235,138,243,34,191,188,171,109,254,249,247,123,52,118,171,55,239,173,178,15,198,220,219,194,114,239,182,251,172,90,37,181,225,
213,233,159,91,167,56,7,204,180,140,47,33,179,102,89,84,42,197,187,239,190,107,183,219,241,223,35,35,105,41,113,73,73,73,125,125,189,223,31,106,106,106,22,190,224,188,82,159,195,43,229,132,202,177,230,
186,94,62,97,134,36,249,165,79,18,121,178,49,39,90,166,15,159,232,200,250,7,21,179,153,198,198,230,242,242,210,123,238,89,169,209,168,133,63,83,138,92,9,192,101,221,231,243,183,182,182,119,118,118,77,
104,193,145,157,85,252,112,46,160,195,149,242,124,94,191,87,10,83,54,28,239,229,253,130,219,142,14,27,76,104,181,200,223,142,179,125,42,255,249,187,74,220,83,19,217,24,125,92,190,65,53,130,32,28,248,207,
95,16,4,101,140,32,8,202,24,65,16,148,49,130,160,140,17,4,65,25,35,8,130,50,70,16,4,101,140,32,40,99,4,65,80,198,8,130,160,140,17,4,65,25,35,8,202,24,65,16,148,49,130,32,40,99,4,65,80,198,8,114,229,50,
245,111,255,136,191,126,135,32,248,63,252,223,68,33,86,142,215,83,170,2,17,139,83,106,35,230,64,85,60,162,177,248,2,229,145,141,47,216,50,173,113,90,179,209,246,109,92,248,243,50,178,42,74,45,36,62,185,
183,148,241,159,137,191,137,66,172,28,175,167,84,5,194,48,41,181,17,115,160,202,140,104,156,220,44,249,251,68,101,212,150,105,43,103,210,182,157,212,108,180,125,27,23,254,188,140,172,138,82,11,137,42,
122,99,4,65,190,45,222,152,119,11,248,99,32,8,122,99,4,65,25,35,8,130,50,70,16,4,101,140,32,8,202,24,65,80,198,8,130,160,140,17,4,65,25,35,8,130,50,70,16,148,49,130,32,40,99,4,65,80,198,8,130,76,20,9,
158,2,4,25,131,18,93,120,207,143,155,185,242,131,59,44,93,3,114,148,241,37,166,172,172,164,186,186,82,163,209,136,197,4,26,28,194,195,48,140,215,235,179,90,207,217,108,221,23,185,170,233,133,65,163,38,
202,149,107,139,3,40,227,84,244,145,158,255,180,122,107,66,211,254,165,66,124,68,55,137,21,204,156,105,209,104,148,251,247,239,235,238,238,134,159,13,109,23,225,33,73,210,100,50,45,91,182,76,163,81,159,
57,115,118,2,70,101,242,187,3,210,158,65,25,63,199,172,11,243,229,114,67,40,185,177,49,39,90,172,141,124,221,165,190,66,115,99,66,198,138,180,84,208,28,9,233,105,186,40,34,18,79,248,97,99,163,209,96,48,
228,237,217,179,199,102,179,161,134,145,52,104,154,6,195,216,181,107,87,97,33,24,138,80,39,1,206,246,245,245,103,222,218,216,184,184,106,136,155,147,167,162,110,168,241,240,13,174,175,241,192,28,174,60,
183,212,183,127,99,211,107,15,157,153,87,230,155,250,203,86,97,161,105,236,22,38,83,81,73,137,9,98,87,179,217,4,147,78,151,39,145,144,16,177,76,114,131,166,96,112,101,95,100,129,71,106,85,121,111,244,
132,12,84,225,65,3,107,10,249,86,247,200,6,73,194,33,52,98,153,53,171,246,243,207,63,3,63,140,38,139,140,33,230,104,52,90,91,91,107,183,247,142,219,216,82,28,248,253,79,78,67,65,74,178,183,207,117,49,
12,1,162,253,213,15,218,42,140,9,15,12,190,119,213,34,135,90,78,91,138,2,191,186,167,77,33,141,249,143,239,207,239,255,162,45,183,215,35,203,210,160,90,173,86,85,86,86,192,103,218,76,152,244,122,125,115,
115,11,69,209,19,59,173,215,185,123,54,246,184,103,5,141,39,84,170,15,13,98,74,68,128,27,166,69,209,234,224,185,85,110,213,77,67,230,61,249,138,55,76,34,106,252,68,87,175,215,89,173,86,180,84,100,108,
90,91,91,151,46,189,89,72,203,161,32,25,136,136,85,178,225,200,238,225,155,18,30,162,201,174,30,12,72,180,74,170,206,228,7,233,174,189,62,229,162,16,165,9,79,96,138,251,152,198,218,124,65,65,62,40,214,
227,25,114,187,7,28,14,39,239,156,139,139,139,97,62,124,218,108,93,19,208,240,245,238,182,45,157,193,124,74,233,144,24,254,164,19,5,73,90,198,178,16,212,147,34,249,177,92,221,233,129,129,186,208,217,71,
123,170,53,180,122,71,169,40,58,142,146,229,114,153,207,231,67,51,69,198,198,235,245,130,169,8,105,105,31,148,175,217,105,121,115,195,105,126,14,203,138,158,251,208,252,202,167,69,201,205,238,95,236,216,
116,139,77,38,73,164,129,15,237,158,209,222,175,200,222,220,184,189,189,227,155,111,172,205,205,103,121,13,199,142,214,222,219,211,211,3,5,173,54,87,248,102,216,25,222,246,39,108,160,225,130,47,212,211,
254,169,74,190,183,24,242,97,86,26,59,23,140,154,34,78,231,148,254,172,166,226,117,189,136,16,181,175,115,70,150,247,161,253,33,151,4,150,101,185,151,132,10,161,165,87,5,186,229,202,253,94,233,178,231,
102,131,134,33,25,126,224,218,190,199,111,235,4,39,108,204,137,190,126,164,224,214,109,115,249,254,234,23,255,108,106,232,212,76,249,97,142,19,12,128,31,30,57,51,20,10,79,108,35,114,122,224,129,222,64,
113,84,223,168,44,122,170,82,212,171,24,229,2,226,148,107,183,85,150,147,162,142,123,221,93,15,245,85,157,200,21,117,168,208,10,145,12,163,148,13,231,137,171,95,174,133,116,23,212,11,238,151,255,246,231,
55,119,237,59,158,255,244,219,229,171,183,215,126,244,200,73,9,201,146,226,172,120,21,228,100,122,170,13,6,61,124,66,176,45,176,61,51,203,103,191,109,72,62,64,154,158,51,13,107,120,212,11,103,132,208,
190,100,54,52,40,125,230,104,112,137,27,77,10,201,60,235,111,140,69,154,219,14,155,65,195,143,213,219,146,53,204,113,247,66,231,214,21,231,32,85,254,197,59,229,80,93,23,111,127,153,201,88,175,215,89,44,
211,225,211,239,15,112,161,181,16,130,215,14,50,36,107,252,66,35,254,42,111,156,166,46,153,241,61,157,136,21,185,150,122,208,164,144,204,80,105,12,45,177,12,174,255,78,207,142,53,45,49,175,195,16,187,
226,177,244,234,107,134,147,187,183,79,26,182,30,170,56,212,96,224,170,119,206,239,55,229,133,15,124,101,12,71,99,242,217,249,163,22,88,246,38,203,96,85,126,40,75,131,106,78,186,53,53,213,124,21,156,176,
205,214,37,164,7,63,17,153,255,157,23,148,169,254,90,149,210,113,69,178,148,34,254,138,106,89,74,88,34,107,200,81,246,75,60,150,144,25,237,11,201,8,127,248,105,19,132,199,124,245,116,79,44,155,91,121,
213,112,127,208,193,6,227,147,7,42,160,176,255,132,145,97,9,208,48,148,87,45,114,60,251,65,41,180,156,95,230,91,88,238,133,9,102,210,12,177,224,233,133,151,71,80,173,213,230,22,23,23,155,76,69,194,23,
9,22,69,165,1,177,172,93,153,50,119,72,146,219,42,215,216,164,18,123,202,189,98,194,37,83,56,37,180,12,223,62,143,100,202,149,145,41,198,214,19,191,3,204,223,46,222,119,220,200,127,5,137,49,87,48,235,
99,221,67,253,62,105,242,130,83,152,39,143,239,141,221,238,129,35,71,142,13,183,150,144,160,225,130,130,252,210,82,179,92,46,111,111,239,16,180,17,66,68,48,162,244,123,72,110,89,193,179,101,249,42,138,
56,155,147,154,34,67,99,28,32,141,100,14,136,162,197,73,10,44,200,137,141,160,182,185,135,189,203,242,57,174,147,182,225,190,232,229,115,93,92,129,27,236,161,59,63,162,107,120,61,83,231,122,38,118,219,
154,162,104,136,168,29,14,231,172,89,117,32,102,8,173,195,225,241,123,173,101,3,146,161,170,48,101,14,203,190,76,253,162,93,53,138,94,115,168,176,158,18,211,168,100,36,67,220,253,66,93,117,126,200,82,
28,88,92,57,52,219,236,159,105,242,195,204,189,199,243,55,124,215,30,139,174,175,118,66,44,125,162,83,3,241,243,189,87,15,247,120,189,113,180,64,20,31,128,13,159,141,221,234,35,109,185,205,189,74,171,
83,121,121,200,152,35,28,71,34,137,13,231,18,34,99,253,17,245,80,117,56,104,9,8,185,13,31,173,245,249,139,163,90,171,28,205,11,201,12,109,78,37,76,135,79,235,158,23,155,78,60,121,28,98,236,251,22,57,64,
168,144,12,223,181,32,150,9,67,21,38,190,253,7,77,250,14,151,226,182,217,110,101,124,200,215,131,59,45,212,84,123,157,73,62,26,1,209,181,240,198,234,207,181,240,233,186,193,43,154,230,31,167,169,130,30,
92,58,8,65,184,225,175,57,104,94,72,134,161,25,130,27,179,245,120,189,45,79,69,109,61,84,113,224,43,99,90,155,247,26,245,155,247,86,41,164,204,150,59,206,65,117,247,103,69,84,22,68,142,147,241,198,90,
109,46,36,198,80,240,251,3,66,218,147,13,185,249,71,212,206,197,126,215,186,110,195,211,85,34,255,5,55,26,250,65,111,223,141,62,165,83,162,62,172,71,171,66,50,207,96,124,116,52,164,202,191,93,119,102,
245,246,218,167,14,86,188,252,151,226,219,231,186,10,115,35,253,62,233,31,79,25,218,156,10,208,48,124,203,61,23,225,11,147,217,176,219,99,201,120,225,194,249,144,6,67,216,156,60,24,179,180,212,12,89,177,
40,222,245,37,36,162,142,49,36,45,120,181,192,83,215,209,93,63,36,117,117,230,190,82,34,114,142,136,153,229,116,120,133,163,237,31,250,24,41,107,122,75,71,52,229,162,73,33,23,15,255,143,218,133,48,163,
40,176,233,150,225,199,4,204,186,240,251,155,78,61,243,126,233,222,99,249,207,127,156,120,10,112,197,188,254,71,111,181,229,42,135,7,123,61,188,164,251,104,91,78,131,77,147,189,50,22,197,31,132,128,207,
202,202,242,180,249,30,207,80,123,251,57,225,155,33,255,106,168,248,77,232,155,77,61,231,86,187,243,107,66,198,131,6,233,137,92,98,64,198,194,21,45,135,102,106,124,67,183,14,116,222,57,0,225,180,249,79,
90,205,158,146,113,207,124,36,18,209,104,52,248,116,4,50,54,96,36,96,42,66,90,150,234,195,187,215,54,167,100,120,82,230,137,229,29,155,235,109,45,189,74,79,80,146,163,160,103,20,6,148,178,244,135,219,
119,172,105,89,249,82,157,213,161,204,82,25,55,54,158,6,199,107,48,232,184,16,154,3,156,176,223,239,159,208,240,143,24,172,72,249,90,73,13,69,216,214,58,156,139,2,48,229,116,200,148,221,82,50,36,14,148,
70,124,165,17,90,193,74,130,226,146,119,180,218,23,74,89,239,248,161,190,203,53,80,85,85,117,234,212,41,180,84,100,12,170,171,171,193,84,132,180,212,169,168,100,137,66,44,173,150,211,171,22,57,228,18,
102,142,57,165,79,231,119,71,11,6,252,146,141,75,236,195,18,34,89,163,38,58,181,50,38,230,204,185,42,147,219,99,231,12,121,86,56,221,215,248,124,230,104,34,160,30,36,117,13,42,253,59,122,201,199,70,33,
15,27,139,226,111,255,168,171,171,217,190,125,187,208,192,30,185,242,0,247,179,126,253,250,166,166,150,254,126,65,67,244,231,151,249,118,173,109,14,68,196,143,188,57,237,179,214,88,90,87,156,23,249,229,
93,109,243,207,191,223,163,177,91,189,121,111,149,125,48,230,213,22,150,123,183,221,103,213,42,169,13,175,78,255,220,58,197,57,96,166,101,124,9,153,53,203,162,82,41,222,125,247,93,187,221,46,60,255,65,
174,144,148,184,164,164,164,190,190,222,239,15,53,53,53,11,95,112,94,169,207,225,149,114,66,229,88,115,93,47,159,48,67,146,252,210,39,137,60,217,152,19,45,211,135,79,116,100,253,131,138,217,76,99,99,115,
121,121,233,61,247,172,212,104,212,194,159,41,69,174,4,224,178,238,243,249,91,91,219,59,59,187,38,180,224,200,206,42,126,56,23,208,225,74,121,62,175,223,43,133,41,27,142,247,242,126,193,109,71,135,13,
38,180,90,228,111,199,217,62,149,255,252,93,37,238,169,137,108,140,62,46,223,160,26,65,16,14,252,231,47,8,130,50,70,16,4,101,140,32,8,202,24,65,80,198,8,130,160,140,17,4,65,25,35,8,130,50,70,16,148,49,
130,32,40,99,4,65,80,198,8,130,160,140,17,4,101,140,32,8,202,24,65,16,148,49,130,32,40,99,4,185,114,153,250,183,127,196,95,191,67,16,252,31,254,111,162,16,43,199,235,41,85,129,136,197,41,181,17,115,160,
42,30,209,88,124,129,242,200,198,23,108,153,214,56,173,217,104,251,54,46,252,121,25,89,21,165,22,18,159,220,91,202,248,207,196,223,68,33,86,142,215,83,170,2,97,152,148,218,136,57,80,101,70,52,78,110,150,
252,125,162,50,106,203,180,149,51,105,219,78,106,54,218,190,141,11,127,94,70,86,69,169,133,68,21,189,49,130,32,223,22,111,204,187,5,252,49,16,4,189,49,130,160,140,17,4,65,25,35,8,130,50,70,16,4,101,140,
32,40,99,4,65,80,198,8,130,160,140,17,4,65,25,35,8,202,24,65,16,148,49,130,32,40,99,4,65,38,138,4,79,1,130,92,136,18,93,120,207,143,155,185,242,131,59,44,93,3,114,148,241,37,166,172,172,164,186,186,82,
163,209,136,197,4,26,28,194,195,48,140,215,235,179,90,207,217,108,221,23,185,170,233,133,65,163,38,202,149,107,139,3,40,227,84,244,145,158,255,180,122,107,66,211,254,165,66,124,68,55,137,21,204,156,105,
209,104,148,251,247,239,235,238,238,134,159,13,109,23,225,33,73,210,100,50,45,91,182,76,163,81,159,57,115,118,2,70,101,242,187,3,210,158,65,25,63,199,172,11,243,229,114,67,40,185,177,49,39,90,172,141,
124,221,165,190,66,115,99,66,198,138,180,84,208,28,9,233,105,186,40,34,18,79,248,73,99,163,209,96,48,228,237,217,179,199,102,179,161,134,145,52,104,154,6,195,216,181,107,87,97,33,24,138,80,39,1,206,246,
245,245,103,222,218,216,184,184,106,136,155,147,167,162,110,168,241,240,13,174,175,241,192,28,174,60,183,212,183,127,99,211,107,15,157,153,87,230,203,138,43,87,97,161,73,120,107,139,101,58,196,177,58,
93,158,195,225,156,204,214,76,193,224,202,190,200,2,143,212,170,242,222,232,9,25,168,194,131,6,214,20,242,173,238,145,13,146,132,67,104,196,50,107,86,237,231,159,127,6,126,24,77,22,25,67,204,209,104,180,
182,182,214,110,239,29,223,176,139,3,191,255,201,105,40,72,73,246,246,185,46,134,33,64,180,191,250,65,91,133,49,225,129,193,247,174,90,228,80,203,105,75,81,224,87,247,180,41,164,49,255,241,253,249,253,
95,180,229,246,122,100,151,77,80,109,50,21,105,181,185,147,63,173,215,185,123,54,246,184,103,5,141,39,84,170,15,13,98,74,68,128,27,166,69,209,234,224,185,85,110,213,77,67,230,61,249,138,55,76,34,106,252,
68,87,175,215,89,173,86,180,84,100,108,90,91,91,151,46,189,89,72,203,161,32,25,136,136,85,178,225,200,238,225,155,18,30,162,201,174,30,12,72,180,74,170,206,228,7,233,174,189,62,229,162,16,165,9,79,96,
234,59,152,132,238,1,8,184,180,212,236,241,12,77,78,201,244,245,238,182,45,157,193,124,74,233,144,24,254,164,19,5,73,90,198,178,16,209,147,34,249,177,92,221,233,129,129,186,208,217,71,123,170,53,180,122,
71,169,40,58,142,146,229,114,153,207,231,67,51,69,198,198,235,245,130,169,8,105,105,31,148,175,217,105,121,115,195,105,126,14,203,138,158,251,208,252,202,167,69,201,205,238,95,236,216,116,139,77,38,73,
164,129,15,237,158,209,222,175,184,108,114,227,202,202,242,112,56,220,211,211,59,137,109,176,51,188,237,79,216,64,195,5,95,168,167,253,83,149,124,111,49,228,195,172,52,118,46,24,53,69,156,206,41,253,89,
77,197,235,122,17,33,106,95,231,140,44,239,67,251,67,46,9,44,203,114,111,8,21,66,75,175,10,116,203,149,251,189,210,101,207,205,6,13,67,50,252,192,181,125,143,223,214,9,78,216,152,19,125,253,72,193,173,
219,230,242,253,213,47,254,217,212,208,169,201,134,35,149,8,212,176,92,46,111,110,62,75,81,212,132,183,32,167,7,30,232,13,20,71,245,141,202,162,167,42,69,189,138,81,174,30,78,185,118,91,101,57,41,234,
184,215,221,245,80,95,213,137,92,81,135,10,173,16,201,48,74,25,205,21,86,191,92,11,233,46,168,23,220,47,255,237,207,111,238,218,119,60,255,233,183,203,87,111,175,253,232,145,147,18,146,37,197,217,242,
30,200,241,189,113,65,65,62,76,14,135,19,34,234,73,108,128,153,229,179,223,54,36,31,32,77,207,153,134,53,60,234,133,51,66,104,95,50,27,26,148,62,115,52,184,196,141,38,133,100,158,245,55,246,192,231,182,
195,102,208,240,99,245,182,100,13,115,220,189,208,185,117,197,57,72,149,127,241,78,57,84,215,197,219,95,6,50,6,39,12,41,177,223,31,104,111,239,152,220,6,130,215,14,50,36,107,252,66,35,254,42,111,156,166,
46,153,241,61,157,136,21,185,150,122,208,164,144,204,80,105,12,45,177,12,174,255,78,207,142,53,45,49,175,195,16,187,226,177,244,234,107,134,147,187,183,79,26,182,30,170,56,212,96,224,170,119,206,239,55,
229,133,15,124,101,12,71,99,218,217,249,163,22,88,246,38,203,96,85,126,40,123,131,234,154,154,106,248,252,230,155,201,119,11,187,255,206,11,202,84,127,173,74,233,184,34,89,74,17,127,63,181,44,37,44,145,
53,228,40,251,37,30,75,200,140,246,133,100,132,63,252,180,9,194,99,190,122,186,39,150,205,173,188,106,248,126,234,193,6,227,147,7,42,160,176,255,132,145,97,9,208,48,148,87,45,114,60,251,65,41,180,156,
95,230,91,88,238,133,9,102,210,12,177,224,233,133,217,232,141,77,166,34,181,90,101,179,117,133,195,225,73,111,32,88,20,149,6,196,178,118,101,202,220,33,73,110,171,92,99,147,74,236,41,247,138,9,151,76,
225,148,208,50,124,245,60,146,41,63,70,166,24,91,79,252,14,48,127,187,120,223,113,35,255,21,36,198,92,193,172,143,201,161,223,39,77,94,112,106,243,228,11,122,99,238,14,19,164,196,147,28,233,145,144,166,
136,96,68,233,247,144,220,178,130,103,203,242,85,20,113,54,39,53,69,134,198,56,64,26,201,28,16,69,139,147,20,88,144,19,27,65,109,115,15,123,151,229,115,92,39,109,195,125,209,203,231,186,184,2,55,216,67,
167,74,233,238,101,166,212,245,140,46,99,137,132,172,172,44,191,152,148,56,17,39,15,72,134,170,194,148,57,44,251,50,245,139,118,213,40,122,205,161,194,122,74,76,163,146,145,12,113,247,11,117,213,249,33,
75,113,96,113,229,208,108,179,127,166,201,15,51,247,30,207,223,240,93,123,44,186,190,218,9,177,244,137,78,13,196,207,247,94,61,220,227,245,198,209,2,81,124,0,54,124,54,118,171,143,180,229,54,247,42,173,
78,101,214,201,184,184,184,88,30,67,180,120,241,85,35,191,133,72,155,155,15,57,179,219,61,48,246,6,244,71,212,67,213,225,160,37,32,228,54,124,180,214,231,47,142,106,173,114,52,47,36,51,180,57,149,48,29,
62,173,123,94,108,58,241,228,113,136,177,239,91,228,0,161,66,50,124,215,130,88,38,12,85,152,248,246,31,52,233,59,92,138,219,102,187,149,241,33,95,15,238,180,80,89,224,117,254,230,143,70,168,63,215,194,
167,235,6,175,104,154,127,156,166,10,122,112,233,32,4,225,134,191,230,160,121,33,25,134,102,8,110,204,214,227,245,182,60,21,181,245,80,197,129,175,140,105,109,222,107,212,111,222,91,165,144,50,91,238,
56,7,213,221,159,21,81,217,17,57,142,238,141,109,182,46,152,70,245,195,179,102,213,65,176,221,216,120,90,224,6,200,134,220,252,35,106,231,98,191,107,93,183,225,233,42,145,255,130,217,120,232,7,189,125,
55,250,148,78,137,250,176,30,173,10,201,60,131,241,209,209,144,42,255,118,221,153,213,219,107,159,58,88,241,242,95,138,111,159,235,42,204,141,244,251,164,127,60,101,104,115,42,64,195,240,45,247,92,132,
47,76,102,201,158,255,237,71,117,15,73,11,94,45,240,212,117,116,215,15,73,93,157,185,175,148,136,156,35,98,102,57,29,94,225,104,251,135,62,70,202,154,222,210,17,77,185,104,82,200,197,195,255,151,118,33,
204,40,10,108,186,101,216,117,153,117,225,247,55,157,122,230,253,210,189,199,242,159,255,56,241,8,224,138,121,253,143,222,106,203,85,14,15,246,122,120,73,247,209,182,156,6,155,230,10,144,49,56,228,191,
26,42,126,19,250,102,83,207,185,213,238,252,154,144,241,160,65,122,34,151,24,144,177,112,69,203,161,153,26,223,208,173,3,157,119,14,64,56,109,254,147,86,179,167,100,220,51,31,137,68,52,26,13,62,29,129,
140,13,24,9,152,138,144,150,165,250,240,238,181,205,41,25,158,148,121,98,121,199,230,122,91,75,175,210,19,148,228,40,232,25,133,1,165,44,253,225,246,29,107,90,86,190,84,103,117,40,191,253,50,22,177,34,
229,107,37,53,20,97,91,235,112,46,10,192,148,211,33,83,118,75,201,144,56,80,26,241,149,70,104,5,43,9,138,75,222,209,106,95,40,101,189,227,239,146,203,53,80,85,85,117,234,212,41,180,84,100,12,170,171,171,
193,84,132,180,212,169,168,100,137,66,44,173,150,211,171,22,57,228,18,102,142,57,165,79,231,119,71,11,6,252,146,141,75,236,195,250,33,89,163,38,58,229,50,38,230,204,185,42,99,27,99,231,12,121,86,56,221,
215,248,124,230,104,34,160,30,36,117,13,42,253,59,122,201,199,70,33,15,27,139,226,111,255,168,171,171,217,190,125,251,197,140,75,65,190,221,200,229,242,245,235,215,55,53,181,244,247,11,26,162,63,191,204,
183,107,109,115,32,34,126,228,205,105,159,181,198,210,186,226,188,200,47,239,106,155,127,254,253,30,141,221,234,205,123,171,236,131,177,148,112,97,185,119,219,125,86,173,146,218,240,234,244,207,173,83,
159,3,102,84,198,151,144,89,179,44,42,149,226,221,119,223,181,219,237,194,243,31,228,10,73,137,75,74,74,234,235,235,253,254,80,83,83,179,240,5,231,149,250,28,94,41,39,84,142,53,215,245,242,9,51,36,201,
47,125,146,200,147,141,57,209,50,125,248,68,199,229,243,160,98,22,210,216,216,92,94,94,122,207,61,43,53,26,181,240,103,74,145,43,1,184,172,251,124,254,214,214,246,206,206,174,9,45,56,178,179,138,31,206,
5,116,184,82,158,207,235,247,74,97,202,146,67,190,140,95,112,219,209,97,131,9,173,22,249,219,113,182,79,229,63,127,87,137,123,106,34,75,3,144,203,52,168,70,16,132,7,255,249,11,130,160,140,17,4,65,25,35,
8,130,50,70,16,148,49,130,32,40,99,4,65,80,198,8,130,160,140,17,4,101,140,32,8,202,24,65,16,148,49,130,32,40,99,4,65,25,35,8,130,50,70,16,4,101,140,32,8,202,24,65,174,92,166,248,237,31,241,215,239,16,
4,255,135,255,155,40,196,202,241,122,74,85,32,98,113,74,109,196,28,168,138,71,52,22,95,160,60,178,241,5,91,166,53,78,107,54,218,190,141,11,127,94,70,86,69,169,133,196,39,247,150,50,254,51,241,55,81,136,
149,227,245,148,170,64,24,38,165,54,98,14,84,153,17,141,147,155,37,127,159,168,140,218,50,109,229,76,218,182,147,154,141,182,111,227,194,159,151,145,85,81,106,33,81,69,111,140,32,200,183,197,27,243,110,
1,127,9,4,65,111,140,32,40,99,4,65,80,198,8,130,160,140,17,4,65,25,35,8,202,24,65,16,148,49,130,32,40,99,4,65,80,198,8,130,50,70,16,4,101,140,32,8,202,24,65,144,73,32,193,83,128,32,23,162,68,23,222,243,
227,102,174,252,224,14,75,215,128,28,101,124,137,41,43,43,169,174,174,212,104,52,98,49,129,6,135,240,48,12,227,245,250,172,214,115,54,91,247,69,174,106,122,97,208,168,137,114,229,218,226,0,202,56,5,41,
203,86,133,130,74,134,105,83,40,134,200,201,236,195,204,153,22,141,70,185,127,255,190,238,238,110,248,217,208,118,17,30,146,36,77,38,211,178,101,203,52,26,245,153,51,103,39,96,84,38,191,59,32,237,25,148,
241,115,204,186,48,95,46,55,132,146,27,27,115,162,197,218,200,215,93,234,43,52,55,134,77,74,88,86,206,178,177,79,134,157,132,39,53,26,13,6,67,222,158,61,123,108,54,27,106,24,73,131,166,105,48,140,93,187,
118,21,22,130,161,232,4,46,5,206,246,245,245,103,222,218,216,184,184,106,136,155,147,167,162,110,168,241,240,13,174,175,241,192,28,174,60,183,212,183,127,99,211,107,15,157,153,87,230,203,134,67,38,230,
204,185,234,66,223,153,76,69,165,165,230,81,191,106,108,60,237,247,7,38,186,49,57,195,24,40,56,17,236,128,68,202,121,99,171,66,9,42,204,163,41,151,68,234,35,73,129,235,89,180,104,193,151,95,30,57,121,
242,36,154,44,50,6,11,22,44,152,55,111,193,177,99,13,227,182,180,20,7,126,255,147,211,124,245,215,255,93,162,148,209,247,47,118,40,164,41,78,34,20,21,191,126,164,96,48,32,249,231,239,117,241,51,31,220,
105,105,232,212,100,111,80,77,146,151,50,228,214,82,84,73,52,162,162,105,144,43,200,152,243,194,172,72,164,100,153,252,104,20,148,220,39,149,193,36,228,61,32,122,189,206,106,181,162,153,34,99,211,218,
218,186,116,233,205,66,90,14,5,201,64,68,172,146,13,139,246,225,155,18,73,117,147,93,13,186,213,42,169,58,147,31,84,189,246,250,222,228,5,163,52,225,9,76,125,7,211,88,123,160,80,196,18,250,111,190,177,
186,221,3,23,185,153,60,138,42,15,135,32,37,142,138,9,183,68,2,103,139,136,235,21,180,236,21,147,1,82,172,162,25,115,56,76,178,172,93,38,31,87,201,114,185,204,231,243,161,153,34,99,227,245,122,193,84,
132,180,180,15,202,215,236,180,188,185,33,225,144,89,86,244,220,135,230,87,62,45,74,110,6,254,121,211,45,54,153,36,97,161,15,237,158,209,222,175,184,12,114,227,112,56,124,145,219,80,49,116,89,36,166,97,
47,73,182,202,149,14,169,140,223,48,41,98,253,48,83,161,116,74,165,80,45,138,70,140,209,40,218,31,114,73,96,89,150,123,73,168,16,90,122,85,160,91,174,220,239,149,46,123,110,54,104,24,146,225,7,174,237,
123,252,182,78,112,194,198,156,40,68,212,183,110,155,203,247,87,191,248,103,211,148,135,211,227,123,99,185,60,182,187,20,69,95,212,117,130,101,139,34,17,25,195,6,72,242,156,92,17,22,139,57,39,156,76,132,
16,219,228,177,75,26,68,215,197,209,8,168,61,36,198,113,41,72,166,129,124,152,43,172,126,185,182,215,35,3,245,130,251,229,191,253,249,205,93,251,142,231,63,253,118,249,234,237,181,31,61,114,82,66,178,
164,56,91,94,5,57,150,90,36,146,88,159,19,77,83,23,179,1,53,195,232,105,138,34,136,46,153,44,124,97,113,66,152,13,225,52,120,102,25,195,232,40,10,77,10,201,60,235,111,236,129,207,109,135,205,160,225,199,
234,109,201,26,230,184,123,161,115,235,138,115,144,42,255,226,157,114,168,174,139,183,207,118,111,76,146,18,112,197,23,233,141,181,112,21,96,69,94,9,233,29,175,195,44,74,196,210,102,53,77,231,209,84,143,
72,134,86,133,100,128,74,99,168,194,24,170,41,12,46,174,140,221,103,98,24,98,87,60,150,94,125,77,31,215,224,237,147,134,19,29,57,243,203,188,119,204,115,65,245,206,249,253,47,125,82,124,224,43,227,191,
45,235,148,75,153,157,63,106,249,162,45,183,181,79,121,206,165,104,115,42,178,78,198,224,138,57,111,188,120,241,85,201,121,178,203,53,96,179,117,9,223,64,110,220,153,251,72,50,57,254,136,253,143,131,88,
47,245,112,71,23,143,79,76,130,152,33,151,70,243,66,50,195,31,126,218,36,73,178,205,211,61,42,248,92,121,149,147,171,30,108,48,62,121,160,2,10,251,79,24,25,150,0,13,67,121,213,34,199,179,31,148,66,203,
249,101,190,133,229,94,152,98,65,43,67,44,120,122,97,214,5,213,163,250,97,200,150,77,166,162,121,243,102,115,105,179,16,32,43,102,8,34,45,215,165,98,115,72,136,177,195,169,227,40,163,98,2,38,2,95,62,143,
100,204,143,165,248,23,81,143,39,22,6,130,127,230,170,251,142,27,249,175,32,49,230,10,102,125,172,211,183,223,39,77,9,93,167,52,79,30,43,208,61,121,242,84,110,110,110,242,221,38,208,112,65,65,62,104,184,
166,166,186,177,241,180,192,109,176,241,41,45,126,182,201,228,98,54,214,239,53,162,57,14,144,70,50,7,68,209,226,36,5,22,228,196,110,148,216,220,195,94,106,249,28,215,73,219,112,95,244,242,185,46,174,208,
27,151,186,78,149,210,131,195,76,169,239,25,75,198,224,141,211,238,24,219,237,189,16,84,207,154,85,167,86,171,180,218,92,143,103,104,220,13,128,227,85,48,140,28,142,50,85,176,193,209,186,187,224,202,40,
97,25,20,50,146,49,238,126,161,174,58,63,100,41,14,64,110,60,219,236,159,105,242,195,204,189,199,243,55,124,215,30,139,174,175,118,66,44,125,162,83,3,241,243,189,87,15,247,120,189,113,180,64,20,31,128,
13,159,141,221,234,35,109,185,205,189,74,171,83,153,165,50,30,21,72,143,253,126,63,104,88,96,92,237,37,73,144,113,60,221,149,142,219,88,205,208,16,132,227,221,38,36,99,180,57,149,48,29,62,173,123,94,108,
58,241,228,113,136,177,239,91,228,0,161,66,50,124,215,130,88,38,12,85,152,248,246,31,52,233,59,92,138,219,102,187,149,241,33,95,15,238,180,80,244,212,187,157,201,11,134,18,118,91,200,19,239,160,214,210,
180,106,188,103,24,32,198,206,139,175,211,35,193,167,160,145,76,67,51,4,55,102,235,241,122,91,158,138,218,122,168,226,192,87,198,180,54,239,53,234,55,239,173,82,72,153,45,119,156,131,234,238,207,138,178,
65,195,147,241,198,92,56,13,5,129,143,70,248,72,18,28,114,14,77,23,71,194,231,228,10,250,194,163,106,10,168,168,150,166,32,109,30,32,81,198,200,20,48,24,31,29,13,169,242,111,215,157,89,189,189,246,169,
131,21,47,255,165,248,246,185,174,194,220,72,191,79,250,199,83,134,54,167,2,52,12,223,114,143,76,248,194,100,150,236,249,5,5,83,90,106,86,40,228,16,63,67,62,156,60,179,160,32,214,95,231,112,56,5,14,210,
132,220,184,79,42,83,49,33,29,5,18,13,247,202,100,17,66,60,34,36,96,141,209,168,41,18,38,88,145,75,54,129,71,157,16,100,12,248,127,212,46,132,25,69,129,77,183,12,223,73,53,235,194,239,111,58,245,204,251,
165,123,143,229,63,255,177,137,111,179,98,94,255,163,183,218,114,149,195,119,112,30,94,210,125,180,45,167,193,166,201,94,25,139,226,15,18,193,52,242,89,69,143,103,168,189,189,99,2,23,57,137,164,135,149,
153,195,225,130,104,84,201,48,46,169,212,43,38,169,248,125,37,50,62,226,90,79,81,134,248,80,234,1,137,164,87,58,254,192,143,72,36,162,209,104,240,233,8,100,108,192,72,192,84,132,180,44,213,135,119,175,
109,78,158,3,254,246,137,229,29,155,235,109,45,189,74,79,80,146,163,160,103,20,6,148,178,244,196,112,199,154,150,149,47,213,89,29,202,44,149,177,205,214,69,211,84,110,110,46,23,66,115,184,221,3,160,97,
112,197,19,221,12,247,4,98,81,36,2,209,53,76,177,59,198,4,193,112,157,216,44,3,130,102,8,145,91,34,237,150,201,41,1,99,217,93,174,129,170,170,170,83,167,78,161,165,34,99,80,93,93,13,166,34,164,165,78,
69,37,75,20,98,105,181,156,94,181,200,33,151,48,115,204,254,228,150,191,59,90,48,224,151,108,92,98,31,214,15,201,26,53,209,41,151,241,88,175,13,184,244,87,71,154,54,82,209,92,154,150,37,117,119,65,182,
12,81,180,75,34,137,61,132,44,108,61,70,163,161,174,174,102,251,246,237,23,255,244,21,242,109,69,46,151,175,95,191,190,169,169,165,191,223,45,164,253,252,50,223,174,181,205,129,136,248,145,55,167,125,
214,26,115,93,197,121,145,95,222,213,54,255,252,251,61,26,187,213,155,247,86,217,7,99,55,104,22,150,123,183,221,103,213,42,169,13,175,78,255,220,154,59,245,233,67,38,101,124,9,153,53,203,162,82,41,222,
125,247,93,187,221,46,60,255,65,174,144,148,184,164,164,164,190,190,222,239,15,53,53,53,11,95,112,94,169,207,225,149,114,66,229,88,115,93,47,159,48,67,146,252,210,39,137,60,217,152,19,45,211,135,79,116,
100,253,131,138,217,76,99,99,115,121,121,233,61,247,172,212,104,212,194,159,41,69,174,4,224,178,238,243,249,91,91,219,59,59,187,38,180,224,200,206,42,126,56,23,208,225,74,121,242,161,223,43,133,41,75,
14,249,50,190,181,211,209,97,131,9,173,22,249,219,113,182,79,229,63,127,87,137,123,106,34,75,3,144,203,52,168,70,16,132,7,135,61,34,8,202,24,65,16,148,49,130,32,40,99,4,65,25,35,8,130,50,70,16,4,101,140,
32,8,202,24,65,80,198,8,130,160,140,17,4,65,25,35,8,130,50,70,16,148,49,130,32,40,99,4,65,80,198,8,130,160,140,17,228,202,101,138,223,254,17,127,253,14,65,240,127,248,191,137,66,172,28,175,167,84,5,34,
22,167,212,70,204,129,170,120,68,99,241,5,202,35,27,95,176,101,90,227,180,102,163,237,219,184,240,231,101,100,85,148,90,72,124,114,111,41,227,63,19,127,19,133,88,57,94,79,169,10,132,97,82,106,35,230,64,
149,25,209,56,185,89,242,247,137,202,168,45,211,86,206,164,109,59,169,217,104,251,54,46,252,121,25,89,21,165,22,18,85,244,198,8,130,124,91,188,49,239,22,240,151,64,16,244,198,8,130,50,70,16,4,101,140,
32,8,202,24,65,16,148,49,130,160,140,17,4,65,25,35,8,130,50,70,16,4,101,140,32,40,99,4,65,80,198,8,130,160,140,17,4,65,25,35,8,202,24,65,144,203,16,9,158,2,4,185,16,37,186,240,158,31,55,115,229,7,119,
88,186,6,228,40,227,75,76,89,89,73,117,117,165,70,163,17,139,9,52,56,132,135,97,24,175,215,103,181,158,179,217,186,47,114,85,211,11,131,70,77,148,43,215,22,7,80,198,41,72,89,182,42,20,84,50,76,155,66,
49,68,78,102,31,102,206,180,104,52,202,253,251,247,117,119,119,195,207,134,182,139,240,144,36,105,50,153,150,45,91,166,209,168,207,156,57,59,1,163,50,249,221,1,105,207,160,140,159,99,214,133,249,114,185,
33,148,220,216,152,19,45,214,70,190,238,82,95,161,185,49,108,82,194,178,114,150,141,125,50,236,36,60,169,209,104,48,24,242,246,236,217,99,179,217,80,195,72,26,52,77,131,97,236,218,181,171,176,16,12,69,
39,112,41,112,182,175,175,63,243,214,198,198,197,85,67,220,156,60,21,117,67,141,135,111,112,125,141,7,230,112,229,185,165,190,253,27,155,94,123,232,204,188,50,95,54,28,50,49,103,206,85,227,54,42,40,200,
87,171,85,240,201,207,105,110,62,235,241,12,77,116,99,114,134,49,80,112,34,216,1,137,148,243,198,86,133,18,84,152,71,83,46,137,212,71,146,2,215,179,104,209,130,47,191,60,114,242,228,73,52,89,100,12,22,
44,88,48,111,222,130,99,199,26,198,109,105,41,14,252,254,39,167,249,234,175,255,187,68,41,163,239,95,236,80,72,83,156,68,40,42,126,253,72,193,96,64,242,207,223,235,226,103,62,184,211,210,208,169,201,246,
160,218,98,153,174,213,230,142,140,91,38,186,37,45,69,149,68,35,42,154,6,185,130,140,57,47,204,138,68,74,150,201,143,70,65,201,125,82,25,76,66,222,202,165,215,235,172,86,43,154,41,50,54,173,173,173,75,
151,222,44,164,229,80,144,12,68,196,42,217,176,104,31,190,41,145,84,55,217,213,160,91,173,146,170,51,249,65,213,107,175,239,77,94,48,74,19,158,192,212,119,48,73,132,104,152,162,104,135,195,217,211,211,
3,133,97,191,42,159,88,174,159,71,81,229,225,16,164,196,81,49,225,150,72,224,108,17,113,189,130,150,189,98,50,64,138,85,52,99,14,135,73,150,181,203,228,227,42,89,46,151,249,124,62,52,83,100,108,188,94,
47,152,138,144,150,246,65,249,154,157,150,55,55,36,28,50,203,138,158,251,208,252,202,167,69,201,205,192,63,111,186,197,38,147,36,44,244,161,221,51,218,251,21,89,45,99,147,169,8,52,236,247,7,154,155,91,
120,1,115,132,195,97,225,219,80,49,116,89,36,166,97,47,73,118,201,228,126,146,132,232,154,75,202,73,17,235,39,37,173,10,101,113,36,2,62,185,40,26,137,16,98,167,84,138,38,136,92,60,44,203,114,175,236,22,
66,75,175,10,116,251,243,155,99,209,114,191,87,250,195,29,22,208,54,36,195,119,204,115,21,107,195,78,175,236,208,73,3,68,212,239,53,234,95,125,232,12,215,245,245,226,159,77,83,30,78,143,47,99,46,25,182,
217,186,210,52,60,33,196,44,91,20,137,200,24,54,64,146,231,228,138,176,88,204,57,225,100,64,186,54,121,236,146,6,74,46,142,70,64,237,33,49,142,75,65,50,13,228,195,92,97,245,203,181,189,30,217,227,183,
117,130,251,229,191,5,133,239,59,158,255,244,219,229,171,183,215,126,244,200,73,9,201,146,226,108,121,49,243,5,213,2,126,24,34,103,112,197,147,232,202,74,70,205,48,122,154,162,8,162,75,38,11,95,88,156,
16,102,219,227,142,90,198,48,58,138,66,147,66,50,207,250,27,123,224,115,219,97,51,104,248,177,122,91,178,134,57,238,94,232,220,186,226,28,164,202,191,120,167,28,170,235,226,237,179,218,27,171,213,42,248,
4,13,131,152,203,202,204,122,253,112,199,61,204,1,255,12,242,22,184,1,45,77,137,88,145,87,66,122,199,187,63,28,37,98,105,179,154,166,243,104,170,71,36,67,171,66,50,64,165,49,84,97,12,213,20,6,23,87,198,
220,21,195,16,187,62,45,130,88,122,245,53,125,92,131,183,79,26,78,116,228,204,47,243,66,116,13,213,59,231,247,191,244,73,241,129,175,140,255,182,172,83,46,101,118,254,168,229,139,182,220,214,62,229,57,
151,162,205,169,200,58,25,147,113,213,73,36,228,172,89,117,240,153,236,165,181,218,186,111,190,177,186,221,3,66,54,144,75,199,92,171,143,36,147,227,143,216,127,28,138,245,82,15,119,116,241,248,196,36,
136,25,114,105,52,47,36,51,252,225,167,77,146,36,219,60,221,19,243,94,43,175,114,114,213,131,13,198,39,15,84,64,97,255,9,35,195,18,160,97,40,175,90,228,120,246,131,82,104,57,191,204,183,176,220,11,19,
204,164,25,98,193,211,11,179,78,198,10,133,156,75,143,193,241,218,108,78,135,35,118,96,224,153,43,43,203,65,201,149,149,21,67,67,67,66,114,102,200,138,25,130,72,203,117,169,216,28,56,121,76,56,117,28,
101,84,76,192,36,165,241,127,193,32,153,18,64,138,127,17,245,120,98,97,32,248,103,174,186,239,184,145,255,10,18,99,78,198,102,125,172,127,171,223,151,210,17,59,181,121,242,56,61,73,160,225,198,198,211,
156,134,69,241,14,234,230,230,179,48,19,252,179,94,175,23,184,13,54,62,165,197,207,54,153,188,77,174,24,45,210,198,1,210,72,230,128,40,58,185,90,144,19,27,65,109,115,15,223,79,93,62,199,197,127,181,124,
238,112,185,55,46,117,157,42,165,7,135,153,82,215,51,78,190,234,118,187,71,157,9,153,179,192,91,199,224,120,21,12,35,135,163,76,29,48,18,28,173,187,11,174,140,18,150,65,33,35,25,227,238,23,234,170,243,
67,150,226,0,228,198,179,205,254,153,38,63,204,220,123,60,127,195,119,237,177,232,250,106,39,196,210,39,58,53,16,63,223,123,245,112,143,215,27,71,11,68,241,1,216,240,217,216,173,62,210,150,219,220,171,
180,58,149,217,40,227,80,40,124,73,54,224,37,73,144,113,60,221,29,255,110,176,154,161,33,8,199,187,77,72,198,104,115,42,97,58,124,90,247,188,216,116,226,201,227,16,99,223,183,200,1,66,133,100,248,174,
5,177,16,26,170,48,241,237,63,104,210,119,184,20,183,205,118,43,227,67,190,30,220,105,161,232,169,119,59,23,20,12,55,192,67,173,30,229,1,14,206,15,211,180,160,219,66,158,120,216,172,165,105,213,120,207,
48,136,89,54,47,126,171,201,35,193,167,160,145,76,67,51,4,55,102,235,241,122,91,158,138,218,122,168,226,192,87,198,180,54,239,53,234,55,239,173,82,72,153,45,119,156,131,234,238,207,138,178,65,195,99,121,
99,136,156,75,75,99,247,153,180,218,220,180,91,199,220,16,107,129,247,156,124,36,9,14,57,135,166,139,35,225,115,114,5,125,225,81,53,5,84,84,75,83,144,54,15,144,40,99,100,10,24,140,143,142,22,139,217,223,
174,59,179,122,123,237,83,7,43,94,254,75,241,237,115,93,133,185,145,126,159,244,143,167,12,109,78,5,104,24,190,229,30,153,240,133,201,44,217,243,11,10,134,27,71,109,50,21,77,155,86,221,211,211,99,183,
247,198,157,179,10,180,61,161,97,33,144,27,247,73,101,42,38,164,163,64,162,225,94,153,44,66,136,71,132,4,172,49,26,53,69,194,4,43,114,201,38,240,168,19,130,140,1,65,16,44,43,180,235,105,70,81,96,211,45,
195,207,45,153,117,225,247,55,157,122,230,253,210,189,199,242,159,255,216,196,183,89,49,175,255,209,91,109,185,202,225,27,52,15,47,233,62,218,150,211,96,211,100,175,140,69,241,97,152,10,133,28,28,50,72,
23,166,228,120,251,155,111,38,240,128,209,160,68,210,195,202,204,225,112,65,52,170,100,24,151,84,234,21,147,32,111,54,54,166,58,54,226,90,79,81,134,104,172,135,112,64,34,233,149,142,63,240,35,18,137,104,
52,26,124,58,2,25,27,48,18,48,21,33,45,75,245,225,221,107,155,147,231,128,191,125,98,121,199,230,122,91,75,175,210,19,148,228,40,232,25,133,1,165,44,61,49,220,177,166,101,229,75,117,86,135,50,123,101,
12,128,92,193,33,235,245,122,110,80,23,0,110,57,249,81,39,129,112,79,32,22,69,34,16,93,195,20,22,139,195,4,193,112,157,216,44,3,130,102,8,145,91,34,237,150,201,41,1,99,217,93,174,129,170,170,170,83,167,
78,161,165,34,99,80,93,93,13,166,34,164,165,78,69,37,75,20,98,105,181,156,94,181,200,33,151,48,115,204,254,228,150,191,59,90,48,224,151,108,92,98,31,214,15,201,26,53,209,41,151,177,160,215,6,92,178,171,
35,77,27,169,104,46,77,203,146,186,187,32,91,134,40,218,37,145,196,30,66,22,182,158,252,124,67,109,109,205,246,237,219,39,244,160,21,114,69,1,169,223,250,245,235,27,27,91,92,46,183,144,246,243,203,124,
187,214,54,7,34,226,71,222,156,246,89,107,172,247,167,56,47,242,203,187,218,230,159,127,191,71,99,183,122,243,222,42,251,96,172,127,119,97,185,119,219,125,86,173,146,218,240,234,244,207,173,185,83,159,
62,100,82,198,151,144,89,179,106,85,42,249,187,239,190,107,183,219,133,231,63,200,21,146,18,151,148,148,212,215,215,251,253,161,166,166,102,225,11,206,43,245,57,188,82,78,168,28,107,174,235,229,19,102,
72,146,95,250,36,145,39,27,115,162,101,250,240,137,142,172,127,80,49,155,105,108,60,83,94,94,122,207,61,43,53,26,181,240,103,74,145,43,1,184,172,251,124,254,214,214,246,206,206,174,9,45,56,178,179,138,
31,206,5,116,184,82,158,124,232,247,74,97,202,146,67,190,140,111,237,116,116,216,96,66,171,69,254,118,156,237,83,249,207,223,85,226,158,154,200,210,0,228,50,13,170,17,4,225,193,97,143,8,130,50,70,16,4,
101,140,32,8,202,24,65,80,198,8,130,160,140,17,4,65,25,35,8,130,50,70,16,148,49,130,32,40,99,4,65,80,198,8,130,160,140,17,4,101,140,32,8,202,24,65,16,148,49,130,32,40,99,4,185,114,153,226,183,127,196,
95,191,67,16,252,31,254,111,162,16,43,199,235,41,85,129,136,197,41,181,17,115,160,42,30,209,88,124,129,242,200,198,23,108,153,214,56,173,217,104,251,54,46,252,121,25,89,21,165,22,18,159,220,91,202,248,
207,196,223,68,33,86,142,215,83,170,2,97,152,148,218,136,57,80,101,70,52,78,110,150,252,125,162,50,106,203,180,149,51,105,219,78,106,54,218,190,141,11,127,94,70,86,69,169,133,68,21,189,49,130,32,223,22,
111,204,187,5,252,37,16,4,189,49,130,160,140,17,4,65,25,35,8,130,50,70,16,4,101,140,32,40,99,4,65,80,198,8,130,76,13,18,60,5,8,114,33,74,116,225,61,63,30,254,159,140,15,238,176,116,13,200,81,198,151,152,
178,178,146,234,234,74,141,70,35,22,227,127,84,68,18,48,12,227,245,250,172,214,115,54,91,247,69,174,106,122,97,208,168,137,114,229,218,226,0,202,56,5,202,16,237,252,85,91,168,58,88,250,175,85,57,159,79,
230,191,60,207,156,105,209,104,148,251,247,239,235,238,238,102,146,254,233,57,130,144,36,105,50,153,150,45,91,166,209,168,207,156,57,59,1,163,50,249,221,1,105,207,160,140,159,99,214,133,249,114,185,33,
148,220,216,152,19,45,214,70,190,238,82,95,161,185,49,43,99,41,45,21,49,69,40,29,21,45,142,176,226,9,143,196,52,26,13,6,67,222,158,61,123,108,54,27,106,24,73,131,166,105,48,140,93,187,118,21,22,130,161,
232,4,46,5,206,246,245,245,103,222,218,216,184,184,106,136,155,147,167,162,110,168,241,240,13,174,175,241,192,28,174,60,183,212,183,127,99,211,107,15,157,153,87,230,203,134,67,190,224,63,70,93,184,112,
190,68,66,142,177,164,221,222,107,179,77,236,223,64,71,204,225,193,101,110,150,100,243,222,215,119,252,103,91,104,122,160,252,145,106,34,34,246,222,56,168,123,199,160,58,41,244,31,183,47,90,180,224,203,
47,143,156,60,121,18,77,22,25,131,5,11,22,204,155,183,224,216,177,134,113,91,90,138,3,191,255,201,105,190,250,235,255,46,81,202,232,251,23,59,20,210,20,39,17,138,138,95,63,82,48,24,144,252,243,247,18,
150,255,224,78,75,67,167,102,106,143,116,242,65,53,77,83,19,106,63,116,131,167,239,167,246,224,76,191,170,65,163,61,172,35,104,240,203,34,130,38,194,211,130,174,149,206,161,239,122,140,175,22,26,95,47,
32,168,241,19,93,189,94,103,181,90,209,76,145,177,105,109,109,93,186,244,102,65,198,25,36,3,17,177,74,54,44,218,135,111,74,36,213,77,118,53,232,86,171,164,234,76,126,80,245,218,235,123,147,23,140,210,
132,39,48,245,29,76,23,220,131,227,199,191,186,208,87,179,102,213,169,213,42,151,107,96,2,26,254,206,96,215,147,29,148,49,42,117,74,117,239,234,197,65,49,132,214,16,209,131,103,86,127,153,163,108,86,5,
45,129,158,127,182,209,57,84,225,111,76,68,116,28,37,203,229,50,159,207,135,102,138,140,141,215,235,5,83,17,210,210,62,40,95,179,211,242,230,134,132,67,102,89,209,115,31,154,95,249,180,40,185,25,248,231,
77,183,216,100,146,68,26,248,208,238,25,237,253,138,203,47,55,6,79,8,26,118,187,7,194,225,176,192,69,130,181,129,238,127,235,4,13,107,142,230,148,111,154,102,120,163,32,38,96,105,236,92,48,106,70,213,
168,174,248,199,105,134,223,23,136,8,145,115,109,239,192,138,126,180,63,228,210,244,194,176,44,247,6,5,33,180,244,170,64,183,92,185,223,43,93,246,220,108,208,48,36,195,15,92,219,247,248,109,157,224,132,
141,57,81,136,168,111,221,54,151,239,175,126,241,207,166,41,15,167,39,25,84,155,76,197,241,196,184,71,96,123,70,193,56,31,236,141,22,69,148,77,106,243,83,21,50,123,236,20,176,68,74,183,150,212,33,51,61,
83,42,34,89,215,15,156,142,181,189,234,227,57,242,118,5,90,33,146,97,32,31,230,10,171,95,174,237,245,200,64,189,224,126,249,111,127,126,115,215,190,227,249,79,191,93,190,122,123,237,71,143,156,148,144,
44,41,206,150,231,228,39,230,141,57,87,236,241,12,249,253,1,129,139,4,102,251,61,223,27,144,12,74,138,255,171,132,211,240,168,16,17,162,240,5,147,234,148,58,82,18,246,220,52,128,38,133,100,158,245,55,
198,156,211,182,195,102,208,240,99,245,182,100,13,115,220,189,208,185,117,197,57,72,149,127,241,78,57,84,215,221,216,115,89,202,152,115,197,14,135,115,2,249,201,181,30,72,128,53,71,115,193,199,142,19,
24,244,75,243,222,215,139,88,209,208,77,131,104,82,72,102,168,52,134,150,88,6,215,127,167,103,199,154,150,88,240,200,16,187,226,177,244,234,107,250,184,6,111,159,52,108,61,84,113,168,193,192,85,239,156,
223,111,202,11,31,248,202,24,142,198,180,179,243,71,45,176,236,77,150,193,170,252,208,229,17,84,131,31,134,9,252,48,36,198,194,151,242,253,221,16,40,83,121,74,157,210,113,37,17,49,242,88,175,32,43,75,
233,208,87,125,165,145,184,164,193,233,1,52,47,36,51,252,225,167,77,16,30,243,213,211,61,42,248,92,121,213,176,163,58,216,96,124,242,64,5,20,246,159,48,50,44,1,26,134,242,170,69,142,103,63,40,133,150,
243,203,124,11,203,189,48,193,76,154,33,22,60,189,240,50,240,198,156,43,118,187,221,19,218,64,180,48,34,14,144,138,212,92,151,244,144,10,171,82,214,37,151,118,167,132,217,210,126,41,76,177,78,108,4,201,
140,31,35,83,140,173,199,19,235,217,174,48,14,187,214,125,199,141,252,87,144,24,115,5,179,62,214,185,219,239,147,166,152,244,148,230,201,66,189,49,248,97,72,140,195,225,176,221,222,59,177,45,16,34,130,
21,165,221,67,2,151,91,252,140,153,81,51,202,102,85,74,99,56,21,52,14,144,70,50,7,68,209,226,36,5,22,228,196,70,80,219,220,195,222,101,249,28,215,73,219,112,95,244,242,185,46,174,208,27,151,186,78,149,
50,110,130,153,82,215,35,84,198,147,200,138,135,175,82,3,146,112,101,40,82,26,22,29,73,153,175,104,83,142,108,76,231,210,148,62,74,160,146,145,76,113,247,11,117,213,249,33,75,113,96,113,229,208,108,179,
127,166,201,15,51,247,30,207,223,240,93,123,44,186,190,218,9,177,244,137,78,13,196,207,247,94,61,220,227,245,198,209,2,81,124,0,54,124,54,118,171,143,180,229,54,247,42,173,78,101,182,203,88,46,151,131,
43,166,40,122,18,50,214,124,153,27,174,10,5,45,130,210,221,96,93,32,90,20,81,180,43,209,188,144,204,208,230,84,194,116,248,180,238,121,177,233,196,147,199,33,198,190,111,145,3,132,10,201,240,93,11,98,
153,48,84,97,226,219,127,208,164,239,112,41,110,155,237,86,198,187,117,30,220,105,161,178,192,235,8,202,141,11,10,242,57,87,12,74,158,232,6,184,7,152,188,215,13,133,166,7,199,9,111,148,76,236,86,19,33,
202,249,52,23,205,11,201,48,52,67,112,99,182,30,175,183,229,169,168,173,135,42,14,124,101,76,107,243,94,163,126,243,222,42,133,148,217,114,199,57,168,238,254,172,136,202,142,200,113,124,111,44,145,144,
188,140,39,177,1,245,9,141,230,88,142,239,42,111,223,58,187,121,107,5,233,187,224,227,22,174,149,14,239,245,30,73,191,84,251,129,30,173,10,201,60,131,241,209,209,144,42,255,118,221,153,213,219,107,159,
58,88,241,242,95,138,111,159,235,42,204,141,244,251,164,127,60,101,104,115,42,64,195,240,45,247,200,132,47,76,102,201,158,143,47,227,226,226,98,80,242,132,70,95,166,228,198,30,137,241,213,66,8,170,99,
131,64,220,210,130,29,69,82,71,250,48,87,86,206,184,239,234,239,219,104,103,165,172,254,160,81,245,181,26,77,10,185,120,248,255,98,37,132,25,69,129,77,183,12,63,183,100,214,133,223,223,116,234,153,247,
75,247,30,203,127,254,99,19,223,102,197,188,254,71,111,181,229,42,135,99,210,135,151,116,31,109,203,105,176,105,178,93,198,188,43,22,62,250,114,36,185,159,228,21,188,92,220,243,179,46,215,125,142,208,
180,160,254,144,65,125,60,7,36,45,98,68,180,134,14,205,8,12,222,58,48,112,71,63,132,211,121,239,235,243,119,21,137,198,59,243,145,72,68,163,209,224,211,17,200,56,253,50,26,13,152,138,144,150,165,250,240,
238,181,205,201,115,192,223,62,177,188,99,115,189,173,165,87,233,9,74,114,20,244,140,194,128,82,150,254,112,251,142,53,45,43,95,170,179,58,148,89,45,99,208,48,40,217,239,15,8,31,125,57,10,172,40,127,119,
17,65,17,142,53,189,254,171,188,48,201,58,229,50,187,92,28,18,71,74,195,17,115,152,145,51,80,206,251,147,190,232,215,37,228,208,248,129,138,203,53,80,85,85,117,234,212,41,180,84,100,12,170,171,171,5,62,
135,167,83,81,201,18,133,88,90,45,167,87,45,114,200,37,204,28,179,63,185,229,239,142,22,12,248,37,27,151,216,135,245,67,178,70,77,116,202,101,124,193,215,6,252,45,240,207,243,13,220,217,239,91,228,141,
148,132,147,163,110,245,41,117,222,219,6,237,71,58,33,15,27,139,226,111,255,168,171,171,217,190,125,251,228,226,124,228,74,64,46,151,175,95,191,190,169,169,165,191,95,208,128,165,249,101,190,93,107,155,
3,17,241,35,111,78,251,172,53,214,201,90,156,23,249,229,93,109,243,207,191,223,163,177,91,189,121,111,149,125,48,118,75,121,97,185,119,219,125,86,173,146,218,240,234,244,207,173,83,223,35,155,81,25,95,
66,102,205,178,168,84,138,119,223,125,215,110,183,227,63,100,68,210,82,226,146,146,146,250,250,122,191,63,212,212,212,44,124,193,121,165,62,135,87,202,9,149,99,205,117,189,124,194,12,73,242,75,159,36,
242,100,99,78,180,76,31,62,209,113,121,62,168,152,37,52,54,54,151,151,151,222,115,207,74,141,70,45,252,153,82,228,74,0,46,235,62,159,191,181,181,189,179,115,98,47,153,26,217,89,197,15,231,2,58,92,41,3,
138,251,189,82,152,178,228,144,47,227,23,220,118,116,216,96,66,171,69,254,118,156,237,83,249,207,223,85,226,158,154,200,210,0,228,50,13,170,17,4,225,193,127,254,130,32,40,99,4,65,80,198,8,130,92,36,151,
101,23,215,156,57,179,251,98,56,146,171,115,231,206,254,224,131,143,10,11,11,174,189,246,26,110,190,213,218,94,84,84,0,51,185,234,247,191,127,199,91,111,29,26,89,214,104,212,176,136,90,173,134,246,167,
78,125,253,189,239,45,133,50,191,134,234,234,74,126,187,126,191,159,255,138,3,86,2,237,97,19,176,15,80,133,197,185,249,220,76,174,204,239,210,169,83,141,86,107,27,20,160,10,51,97,255,63,251,236,11,129,
135,60,114,17,110,63,185,125,30,185,149,180,253,73,62,94,190,37,172,10,86,120,201,143,23,190,130,149,192,178,39,79,126,205,253,70,147,56,222,145,59,57,242,124,114,59,204,31,126,97,97,97,242,241,114,223,
182,181,181,249,124,254,111,189,140,201,194,66,211,101,183,211,240,43,46,95,126,219,159,255,252,23,174,250,191,255,247,47,193,118,55,108,88,7,159,87,93,181,224,123,223,139,189,97,92,175,143,253,215,143,
229,203,151,13,12,12,216,108,93,176,200,79,127,186,14,10,92,249,135,63,188,159,51,107,208,48,44,14,141,53,26,13,44,248,201,39,255,239,95,255,245,177,104,52,10,115,184,53,84,87,87,213,214,206,168,173,181,
112,6,42,147,201,96,254,119,191,123,35,215,6,44,236,103,63,123,24,86,5,43,132,197,255,248,199,119,185,93,122,234,169,39,96,103,96,211,48,31,118,140,107,12,251,12,235,255,183,127,123,140,91,15,172,4,118,
134,191,24,93,8,216,195,255,248,143,173,176,15,220,34,209,104,4,236,242,153,103,126,89,90,106,134,57,176,81,88,51,119,245,225,14,252,222,123,127,0,87,52,88,243,143,127,188,134,219,31,176,105,56,228,195,
135,63,226,14,97,203,150,39,96,127,202,202,204,112,80,32,18,216,213,75,120,188,91,182,252,59,52,62,191,158,216,250,97,206,132,142,151,219,97,216,10,183,147,176,84,91,91,59,183,81,254,146,145,252,19,55,
55,199,222,161,5,63,46,191,63,176,105,238,156,195,28,152,142,29,59,14,215,20,244,198,89,7,24,199,247,191,191,130,187,192,131,129,194,143,196,95,134,227,215,224,182,103,158,249,191,231,175,220,133,240,
163,66,251,184,199,118,112,101,238,147,191,34,128,195,217,178,229,63,210,124,14,231,54,121,171,130,69,248,117,66,25,214,198,85,161,204,55,131,245,128,245,188,248,226,246,228,5,97,253,27,55,254,140,119,
8,176,207,85,85,85,91,183,254,71,242,250,199,6,214,9,123,206,111,29,120,244,209,127,2,71,199,111,232,133,23,254,139,91,27,127,224,123,246,236,232,235,251,157,207,231,227,156,48,152,242,171,175,190,206,
31,47,156,171,228,181,93,194,227,133,29,131,35,221,178,229,103,201,78,117,162,199,11,155,128,31,55,121,145,228,141,142,252,137,185,43,29,236,33,152,1,124,242,150,192,53,128,139,8,28,50,127,9,192,220,56,
139,0,179,134,96,137,139,172,224,151,27,25,170,193,15,15,19,252,186,208,108,206,156,89,48,7,28,20,52,59,191,200,44,152,207,181,4,61,112,134,11,141,147,141,143,91,195,132,246,234,173,183,14,194,250,185,
104,147,35,30,231,127,152,28,212,193,158,131,181,221,114,203,82,216,132,240,12,130,143,39,249,57,156,107,229,109,58,121,163,169,1,240,205,112,104,208,128,63,69,112,224,112,92,124,80,122,105,143,119,228,
174,78,234,120,99,191,206,184,178,231,127,98,40,195,250,65,189,252,239,139,93,92,151,147,67,230,126,51,248,228,164,152,108,76,79,61,245,239,48,193,69,29,190,2,135,12,115,192,117,128,217,193,39,148,97,
14,191,8,231,232,96,37,207,63,255,95,92,66,197,57,64,110,13,194,141,143,183,236,31,254,112,21,95,5,71,196,199,129,224,33,97,130,194,150,45,255,131,139,228,193,119,9,113,77,208,56,57,38,228,109,55,89,198,
220,28,248,10,214,9,206,25,78,14,39,221,184,67,94,145,236,139,64,102,112,101,129,144,24,154,241,70,127,169,142,151,223,85,88,63,119,188,176,194,9,29,47,119,20,227,102,179,201,63,49,103,3,112,188,48,65,
129,63,57,220,14,192,170,190,245,174,88,116,249,142,226,2,27,253,251,191,191,31,132,151,22,81,115,253,46,201,17,23,52,184,235,174,59,96,38,252,162,240,9,101,152,147,156,161,193,204,205,155,191,6,235,1,
179,128,4,15,230,76,40,8,76,115,128,96,73,252,229,128,223,49,16,143,213,218,14,235,135,235,8,119,225,0,107,139,91,225,29,99,27,25,236,6,236,118,114,63,211,200,57,188,221,131,104,225,91,216,22,191,93,46,
251,72,59,22,216,34,215,83,5,234,229,188,244,165,58,94,126,199,64,222,176,66,208,173,70,163,225,2,96,129,199,203,29,32,68,49,99,183,73,254,137,185,235,50,167,231,243,146,110,231,14,10,54,39,36,21,71,111,
60,101,128,197,64,232,5,65,35,248,150,177,91,130,227,141,63,213,248,53,247,243,67,57,205,123,243,214,195,229,123,23,185,99,47,190,248,50,111,82,176,78,216,67,206,197,241,58,225,220,5,236,191,192,126,23,
238,210,147,54,7,68,200,199,195,124,90,1,38,11,34,73,187,168,141,236,48,227,10,189,189,151,198,190,147,143,151,223,85,56,58,94,63,19,63,222,70,248,141,132,135,199,92,239,221,3,15,252,24,38,184,124,64,
128,205,159,124,56,27,80,157,104,178,128,222,120,10,28,242,200,196,24,204,26,162,41,40,192,175,251,234,171,175,131,109,241,129,55,124,254,253,223,139,248,196,152,11,119,97,37,188,21,114,26,0,191,193,205,
217,188,249,95,39,122,57,143,91,15,132,154,247,115,206,10,220,17,196,147,201,161,1,68,239,124,249,240,225,255,59,238,10,193,237,108,217,242,239,220,17,113,187,148,54,7,54,7,187,157,124,163,104,12,224,
96,121,133,192,130,231,251,153,47,205,241,166,237,24,72,23,2,132,137,30,47,172,240,197,23,183,67,164,0,19,247,35,114,63,49,183,218,190,190,62,174,195,146,255,137,225,112,192,241,114,203,66,149,191,166,
112,171,130,57,16,246,167,117,97,126,251,184,188,199,84,115,157,213,105,101,254,234,11,63,57,23,109,142,218,44,57,40,77,118,200,208,0,180,151,60,135,115,41,201,9,219,200,21,166,53,128,117,242,203,242,
43,4,155,134,150,124,117,66,113,108,218,78,242,115,248,99,28,185,147,99,31,47,183,51,127,139,227,77,59,255,147,59,94,88,63,132,202,252,74,248,117,114,187,157,188,9,46,79,73,219,213,177,127,113,148,49,
130,32,152,27,35,8,130,50,70,16,4,101,140,32,40,99,4,65,80,198,8,130,160,140,17,4,73,97,138,135,127,196,223,105,73,16,252,31,254,111,162,16,43,199,235,41,85,129,136,197,41,181,17,115,160,42,30,209,88,
124,129,242,200,198,23,108,153,214,56,173,217,104,251,54,46,252,121,25,89,21,165,22,18,159,220,171,127,249,207,196,223,68,33,86,142,215,83,170,2,97,152,148,218,136,57,80,101,70,52,78,110,150,252,125,162,
50,106,203,180,149,51,105,219,78,106,54,218,190,141,11,127,94,70,86,69,169,133,68,21,189,49,130,32,223,22,111,204,187,5,252,37,16,4,189,49,130,160,140,17,4,65,25,35,8,130,50,70,16,4,101,140,32,40,99,4,
65,80,198,8,130,160,140,17,4,65,25,35,8,202,24,65,144,203,18,9,158,2,4,185,16,37,186,240,158,31,55,115,229,7,119,88,186,6,228,40,227,75,76,89,89,73,117,117,165,70,163,17,139,9,52,56,132,135,97,24,175,
215,103,181,158,179,217,186,47,114,85,211,11,131,70,77,148,43,215,22,7,80,198,41,72,89,182,42,20,84,50,76,155,66,49,68,78,102,31,102,206,180,104,52,202,253,251,247,117,119,119,195,207,134,182,139,240,
144,36,105,50,153,150,45,91,166,209,168,207,156,57,59,1,163,50,249,221,1,105,207,160,140,159,99,214,133,249,114,185,33,148,220,216,152,19,45,214,70,190,238,82,103,195,33,139,167,100,147,18,150,149,179,
108,236,147,97,39,225,73,141,70,131,193,144,183,103,207,30,155,205,134,26,70,210,160,105,26,12,99,215,174,93,133,133,96,40,58,129,75,129,179,125,125,253,153,183,54,54,46,174,26,226,230,228,169,168,27,
106,60,124,131,235,107,60,48,135,43,207,45,245,237,223,216,244,218,67,103,230,149,249,178,225,144,199,121,79,181,90,173,42,40,200,135,137,171,82,20,237,112,56,123,122,122,160,48,137,141,201,25,198,64,
193,137,96,7,36,82,206,27,91,21,74,80,97,30,77,185,36,82,31,73,10,92,207,162,69,11,190,252,242,200,201,147,39,209,100,145,49,88,176,96,193,188,121,11,142,29,107,24,183,165,165,56,240,251,159,156,230,171,
191,254,239,18,165,140,190,127,177,67,33,77,113,18,161,168,248,245,35,5,131,1,201,63,127,175,139,159,249,224,78,75,67,167,38,123,131,106,80,111,101,101,121,74,107,9,132,43,69,112,133,131,88,37,28,14,79,
104,75,90,138,42,137,70,84,52,13,114,5,25,115,94,152,21,137,148,44,147,31,141,130,146,251,164,50,152,132,60,121,172,215,235,172,86,43,154,41,50,54,173,173,173,75,151,222,44,164,229,80,144,12,68,196,42,
217,176,104,31,190,41,145,84,55,217,213,160,91,173,146,170,51,249,65,213,107,175,239,77,94,48,74,19,158,192,212,119,48,141,181,7,165,165,102,248,116,187,7,218,219,207,113,238,23,244,99,50,21,131,139,6,
121,55,55,79,32,235,200,163,168,242,112,8,82,226,168,152,112,75,36,112,182,136,184,94,65,203,94,49,25,32,197,42,154,49,135,195,36,203,218,101,242,113,149,44,151,203,124,62,31,154,41,50,54,94,175,23,76,
69,72,75,251,160,124,205,78,203,155,27,18,14,153,101,69,207,125,104,126,229,211,162,228,102,224,159,55,221,98,147,73,18,22,250,208,238,25,237,253,138,236,205,141,181,218,92,240,189,224,114,191,249,198,
202,135,208,156,164,69,19,252,207,131,42,134,46,139,196,52,236,37,201,86,185,210,33,149,241,27,38,69,172,31,102,42,148,78,169,20,170,69,209,136,49,26,69,251,67,46,9,44,203,114,175,37,19,66,75,175,10,116,
203,149,251,189,210,101,207,205,6,13,67,50,252,192,181,125,143,223,214,9,78,216,152,19,133,136,250,214,109,115,249,254,234,23,255,108,154,242,112,122,124,111,28,75,6,66,233,145,243,68,179,98,49,203,22,
69,34,50,134,13,144,228,57,185,34,44,22,115,78,56,153,8,33,182,201,99,151,52,136,174,139,163,17,80,123,72,140,227,82,144,76,3,249,48,87,88,253,114,109,175,71,6,234,5,247,203,127,251,243,155,187,246,29,
207,127,250,237,242,213,219,107,63,122,228,164,132,100,73,113,182,188,124,234,130,106,241,120,134,192,21,131,79,134,41,45,97,134,79,135,195,41,112,3,106,134,209,211,20,69,16,93,50,89,248,194,226,132,48,
27,194,105,240,204,50,134,209,81,20,154,20,146,121,214,223,216,3,159,219,14,155,65,195,143,213,219,146,53,204,113,247,66,231,214,21,231,32,85,254,197,59,177,62,163,117,241,246,89,45,99,160,179,51,214,
29,103,177,76,135,76,88,46,151,67,74,12,101,147,169,8,20,110,179,117,9,220,128,150,166,68,172,8,28,172,119,188,251,195,81,34,150,54,139,226,29,215,104,82,72,102,168,52,134,150,88,6,215,127,167,103,199,
154,150,152,59,97,136,93,241,88,122,245,53,125,92,131,183,79,26,182,30,170,56,212,96,224,170,119,206,239,55,229,133,15,124,101,12,71,99,218,217,249,163,22,88,246,38,203,96,85,126,40,75,131,106,200,132,
33,49,46,43,51,39,223,115,2,1,219,237,189,194,55,144,27,215,164,143,36,147,227,143,216,91,149,99,189,212,195,29,93,60,62,49,9,98,134,92,26,205,11,201,12,127,248,105,147,36,201,54,79,247,168,224,115,229,
85,195,193,230,193,6,227,147,7,42,160,176,255,132,145,97,9,208,48,148,87,45,114,60,251,65,41,180,156,95,230,91,88,238,133,9,102,210,12,177,224,233,133,217,232,141,71,77,134,115,115,115,193,51,11,223,0,
100,197,12,65,164,229,186,84,108,14,9,49,118,56,117,28,101,84,76,192,68,224,235,110,145,140,249,177,20,255,34,234,241,196,250,95,43,140,195,174,117,223,113,35,255,21,36,198,92,193,172,143,117,24,245,251,
164,201,11,78,109,158,60,150,140,75,75,205,53,53,213,32,90,240,192,71,142,28,131,79,191,63,0,169,242,172,89,117,16,96,11,223,6,27,159,210,226,103,155,76,222,38,87,140,22,105,227,0,105,36,115,64,20,157,
92,45,200,137,221,40,177,185,135,29,213,242,57,46,254,171,229,115,135,203,189,113,169,235,84,41,169,31,51,165,190,231,130,65,117,252,22,113,17,232,182,185,185,133,115,200,16,75,195,4,51,255,127,246,174,
4,190,141,226,220,239,41,105,117,89,146,101,201,247,153,251,4,18,142,38,64,57,67,8,144,52,161,64,30,5,74,185,94,82,90,174,38,60,110,12,77,160,148,148,171,20,210,6,10,45,45,208,114,38,156,37,80,238,16,
194,17,226,220,135,29,59,190,101,73,150,117,239,174,118,247,125,171,181,215,178,100,203,50,56,182,99,207,255,183,113,118,103,103,102,103,52,243,159,239,251,230,4,122,79,154,52,113,219,182,170,76,122,173,
65,240,234,68,81,11,185,236,57,71,43,210,91,119,23,180,140,148,36,34,34,35,12,25,206,127,114,74,69,78,116,82,94,248,248,50,255,244,194,208,212,252,16,56,190,244,77,206,178,83,154,100,237,250,216,54,208,
165,191,61,100,4,253,249,162,99,59,123,188,94,220,226,192,226,19,176,225,239,142,70,195,151,53,230,61,45,76,117,27,51,18,105,172,246,72,39,113,21,152,108,48,24,128,228,54,155,45,147,254,234,0,73,2,141,
227,230,46,221,175,103,131,40,128,18,142,70,155,16,134,12,53,109,12,92,27,119,89,159,32,242,191,189,235,27,208,177,151,30,231,2,162,130,49,188,228,24,217,18,134,71,184,84,255,239,237,180,213,121,116,103,
79,247,50,241,41,95,63,255,235,164,152,48,252,98,167,79,194,80,241,78,227,80,40,148,250,74,25,76,206,208,66,238,136,171,205,89,130,160,239,111,13,3,33,73,150,248,80,83,7,133,86,65,35,12,53,4,17,87,230,
108,253,223,252,122,139,62,118,207,134,210,215,183,218,147,252,188,187,195,182,242,165,114,29,45,86,46,172,133,199,191,109,202,29,9,28,78,39,141,99,113,70,129,37,12,122,117,210,43,101,36,57,195,57,213,
65,121,168,137,52,9,66,30,199,214,106,117,66,223,179,106,28,49,62,75,136,129,217,220,78,34,26,35,12,3,124,241,217,209,4,33,253,243,234,221,63,91,55,249,238,245,165,79,125,154,119,222,76,143,211,204,185,
131,244,91,85,217,53,109,58,224,48,188,85,150,76,4,89,114,132,164,188,79,194,248,253,126,160,43,152,193,36,73,169,163,196,6,131,30,92,224,47,104,218,94,175,55,147,15,128,109,220,74,107,244,98,212,26,3,
138,178,45,26,13,135,19,41,42,129,100,231,249,124,142,197,37,204,163,25,192,82,39,4,132,52,80,143,134,205,4,19,115,195,55,158,217,89,207,11,173,236,127,110,172,90,243,159,162,151,190,206,121,226,195,124,
213,207,162,163,220,43,206,170,55,51,157,102,230,181,167,54,110,169,49,125,87,111,28,185,52,86,109,224,252,252,92,184,146,222,170,139,37,50,106,228,40,170,89,210,20,178,172,131,231,25,81,244,208,116,128,
32,99,241,113,37,50,62,227,218,22,139,101,199,167,82,183,83,84,11,221,255,92,118,142,227,140,70,35,90,29,129,144,30,80,73,160,170,100,226,179,200,198,254,237,138,61,137,46,32,111,239,56,183,110,229,252,
250,189,45,76,71,132,50,233,132,137,206,48,163,73,54,12,159,190,124,239,133,127,158,82,237,98,70,40,141,1,251,247,87,59,28,57,192,228,196,249,152,64,111,151,171,109,160,171,20,149,21,136,185,28,7,218,
53,92,242,136,49,142,139,74,39,182,36,2,161,69,28,243,82,116,163,70,27,203,96,46,187,199,211,94,94,94,94,85,85,133,106,42,66,26,84,84,84,64,85,201,196,167,85,31,75,164,40,232,210,6,173,240,63,199,185,
180,148,56,163,176,71,247,208,11,91,28,237,33,234,151,167,54,117,242,135,148,236,70,126,216,105,220,207,182,1,131,220,58,10,130,61,198,155,5,65,147,208,221,5,214,50,104,209,30,138,146,23,33,103,22,143,
221,158,61,101,202,248,117,235,214,13,180,53,65,24,59,208,106,181,215,92,115,205,206,157,123,221,238,140,172,191,163,139,131,207,94,177,39,204,17,191,249,247,184,77,7,100,185,149,103,225,238,95,82,115,
116,215,254,30,59,26,13,43,95,42,111,242,201,61,187,179,74,2,15,47,173,206,98,98,203,158,155,240,69,181,121,248,205,135,161,164,241,32,98,218,180,73,122,189,238,157,119,222,105,106,106,66,167,156,35,36,
153,196,5,5,5,243,231,207,15,133,162,59,119,238,201,60,224,81,69,65,87,128,86,136,170,224,242,185,45,170,193,12,70,242,159,63,238,182,147,237,38,190,216,198,126,91,119,36,44,84,28,177,216,177,99,79,73,
73,209,5,23,92,104,52,26,50,95,83,138,48,22,0,205,122,48,24,58,112,224,160,178,182,39,115,164,118,86,169,211,185,0,117,158,30,219,3,184,3,52,92,35,36,203,71,240,208,78,93,93,61,92,168,214,34,28,62,236,
107,213,135,186,70,149,148,85,19,35,84,1,57,66,149,106,4,4,4,21,104,218,35,2,2,162,49,2,2,2,162,49,2,2,194,15,196,17,217,197,53,99,198,244,86,25,174,196,199,153,51,167,191,247,222,7,78,167,99,206,156,
19,20,247,234,234,131,185,185,14,112,84,30,23,47,94,248,218,107,27,82,239,141,70,3,4,49,24,12,224,191,170,106,251,188,121,167,171,251,126,130,75,69,69,153,250,221,80,40,148,180,37,40,68,2,254,225,19,144,
6,120,132,224,138,187,226,168,220,171,73,170,170,218,81,93,93,3,55,240,8,142,144,254,77,155,54,103,152,229,212,32,74,58,149,52,167,126,37,41,61,137,249,85,125,66,84,16,225,160,231,23,94,65,36,16,118,219,
182,237,74,25,125,143,252,166,38,50,245,247,84,18,172,102,223,233,116,38,230,87,121,91,83,83,19,12,134,70,61,141,73,167,51,255,136,75,52,148,226,185,231,158,253,209,71,159,42,143,15,62,120,63,212,221,
101,203,174,134,191,179,103,31,51,111,158,188,195,184,205,38,159,250,113,238,185,11,218,219,219,235,235,27,32,200,242,229,87,195,141,114,127,233,165,23,43,213,26,56,12,193,193,179,209,104,132,128,31,127,
252,201,173,183,222,204,243,124,124,37,166,28,67,69,69,249,228,201,19,39,79,158,164,84,80,141,70,3,238,167,156,114,178,226,7,106,216,117,215,93,11,81,65,132,16,252,173,183,222,81,146,116,247,221,119,64,
98,224,211,224,14,9,83,60,67,154,33,254,219,110,187,89,137,7,34,129,196,168,141,81,95,128,20,174,94,125,15,164,65,9,194,243,28,212,203,53,107,238,47,42,42,4,23,248,40,196,172,180,62,74,198,47,186,232,
167,208,162,65,204,87,94,121,185,146,30,168,211,144,229,141,27,63,80,178,80,89,121,7,164,167,184,184,16,50,5,36,129,164,14,98,126,43,43,111,7,207,93,241,200,241,131,203,128,242,171,36,24,190,162,36,18,
66,213,212,28,84,62,170,54,25,137,69,188,103,143,188,135,22,20,174,154,30,248,180,242,155,131,11,92,95,127,253,77,175,11,245,144,52,30,102,64,229,88,188,120,145,210,192,67,5,133,66,82,155,225,120,27,92,
179,102,205,35,93,45,183,19,10,21,252,199,37,182,75,185,87,254,170,45,2,8,156,202,202,213,73,50,71,17,155,106,173,130,32,106,156,112,15,177,41,143,112,175,122,131,120,160,246,172,93,187,46,49,32,196,255,
203,95,94,167,10,4,72,115,121,121,249,61,247,172,78,140,63,61,32,78,72,185,250,117,192,138,21,55,128,160,83,63,244,228,147,143,41,177,169,25,255,251,223,159,110,109,125,33,24,12,42,66,24,170,242,115,207,
61,175,230,23,126,171,196,216,6,49,191,144,48,200,105,101,229,117,137,66,117,160,249,133,79,64,225,38,6,73,252,104,106,17,43,45,29,164,16,170,1,252,85,107,130,226,1,26,17,200,178,218,4,32,219,120,4,1,
170,53,40,75,138,102,5,37,151,170,170,65,193,195,5,165,11,222,102,204,152,6,46,32,160,192,91,87,144,105,224,174,248,4,62,40,21,23,60,39,86,62,37,134,1,165,234,181,215,214,67,252,138,182,169,32,174,231,
191,159,168,212,65,202,161,182,157,121,230,233,240,137,204,45,8,85,159,84,93,20,209,170,214,233,196,143,246,84,128,207,128,172,129,7,245,39,130,140,67,190,84,165,116,112,243,155,154,212,239,149,95,185,
116,250,165,189,90,196,112,15,241,3,123,213,242,69,93,92,71,146,64,86,202,12,254,42,84,76,172,76,119,223,125,59,92,208,168,195,43,16,200,224,2,162,3,170,29,252,133,123,112,81,131,40,130,14,34,121,226,
137,199,20,131,74,17,128,74,12,153,87,62,181,102,95,122,233,255,168,143,32,136,84,61,16,36,36,92,112,83,89,185,74,209,228,65,118,101,34,154,192,115,162,78,168,214,221,68,26,43,46,240,10,226,4,225,12,63,
142,66,221,184,64,94,148,40,139,128,102,208,178,128,74,12,222,212,74,63,88,249,85,147,10,241,43,249,133,8,7,148,95,37,23,253,90,179,137,69,172,212,1,200,47,92,112,163,254,56,74,2,32,170,81,47,138,177,
35,119,22,23,212,209,75,46,185,24,136,151,164,81,43,253,46,137,26,23,120,88,178,100,33,56,66,137,194,95,184,7,151,68,11,13,28,87,174,220,14,181,7,170,5,24,120,224,50,32,37,48,73,0,66,77,82,155,3,53,97,
64,158,234,234,131,16,63,180,35,74,195,1,181,45,94,11,23,166,175,100,144,12,72,118,98,63,83,170,139,90,239,129,180,240,22,190,165,126,87,177,62,146,242,2,95,84,122,170,128,189,138,148,30,172,252,170,9,
3,122,67,132,192,91,163,209,168,40,192,25,230,87,201,32,104,49,233,253,36,22,177,210,46,43,124,238,162,244,65,37,83,240,185,76,76,113,36,141,135,13,80,99,64,245,2,165,17,100,75,122,159,32,120,227,171,
26,183,43,197,15,247,73,210,91,173,61,216,0,207,166,234,21,107,215,62,165,86,41,136,19,82,168,136,56,149,39,138,184,128,244,103,216,239,162,52,61,73,46,64,66,85,31,86,205,10,168,178,64,146,164,70,45,181,
195,76,185,105,105,25,156,250,157,152,95,53,169,144,59,149,63,3,207,239,14,40,163,204,213,99,165,247,238,178,203,174,132,11,154,15,80,176,213,31,31,126,13,120,28,168,177,128,164,241,48,8,228,84,195,24,
170,53,104,83,112,3,165,251,220,115,207,67,221,82,21,111,248,123,201,37,152,106,24,43,234,46,68,162,214,66,133,3,32,55,20,151,149,43,111,29,104,115,30,175,61,160,106,94,172,8,43,16,71,160,79,38,170,6,
160,189,171,247,27,55,62,210,111,132,32,118,42,43,111,87,114,164,36,41,201,5,62,7,201,78,28,40,74,3,200,172,202,16,8,216,213,207,60,56,249,77,74,24,80,23,20,132,129,230,23,34,92,187,118,29,104,10,112,
41,133,168,20,177,18,109,107,107,171,210,97,169,22,49,100,7,4,175,18,22,30,213,54,69,137,10,92,64,237,79,234,194,28,125,56,178,231,84,43,157,213,73,247,106,235,11,69,174,104,155,189,122,75,84,74,19,5,
50,120,0,238,37,186,40,34,37,209,96,75,141,48,201,3,196,169,134,85,35,132,58,13,62,213,199,1,233,177,73,137,84,93,212,60,166,38,50,125,126,149,196,28,142,252,38,253,254,223,47,191,16,63,168,202,106,36,
106,156,74,178,19,63,161,216,41,73,73,77,95,226,136,198,8,8,8,200,54,70,64,64,64,52,70,64,64,64,52,70,64,64,52,70,64,64,64,52,70,64,64,24,92,12,243,184,113,124,51,60,28,87,255,83,255,239,190,145,239,227,
207,61,30,51,4,65,244,120,74,113,129,71,34,197,51,209,199,125,170,231,62,125,38,121,78,242,214,91,218,250,133,250,187,164,62,98,61,111,186,255,42,123,134,170,127,187,255,239,190,145,239,227,207,61,30,
51,132,40,246,120,74,113,129,71,49,197,115,162,183,196,247,221,15,189,250,76,138,92,76,250,118,130,183,222,210,214,47,212,223,37,245,17,235,121,211,253,136,164,49,2,2,194,104,145,198,170,88,64,37,129,
128,128,164,49,2,2,162,49,2,2,2,162,49,2,2,2,162,49,2,2,2,162,49,2,2,162,49,2,2,2,162,49,2,2,2,162,49,2,2,2,162,49,2,2,162,49,2,2,2,162,49,2,2,2,162,49,2,2,2,162,49,2,2,162,49,2,2,194,17,8,10,253,4,8,
195,2,141,134,158,51,231,248,172,44,211,168,207,105,71,71,96,211,166,47,57,142,71,52,70,24,109,168,168,40,59,112,96,223,219,111,191,61,234,115,186,96,193,2,200,236,238,221,251,144,82,141,48,218,144,155,
235,216,186,117,235,88,200,41,100,19,50,139,108,99,132,81,8,134,97,218,218,218,198,66,78,93,46,87,210,89,182,72,169,30,13,120,245,213,23,43,43,87,39,29,125,184,120,241,66,229,64,51,44,126,40,220,147,79,
174,83,79,30,234,235,21,196,163,6,127,239,189,15,214,174,93,167,62,206,152,49,189,178,242,246,37,75,150,38,185,168,143,16,195,242,229,215,65,12,16,161,122,82,89,82,40,248,238,226,197,139,148,42,8,254,
225,187,75,150,44,76,58,18,29,220,223,123,239,253,153,51,167,39,30,119,6,209,66,98,146,142,44,79,2,77,83,177,88,108,44,20,183,32,8,4,65,32,26,143,126,0,75,231,204,57,65,225,54,208,102,197,138,27,42,43,
239,88,185,242,214,96,48,148,230,21,4,84,220,129,90,224,222,218,218,218,239,233,193,137,196,86,169,59,111,222,233,169,148,131,8,43,42,202,215,172,121,68,105,110,226,103,5,183,42,92,117,58,29,79,62,249,
152,218,18,169,231,27,35,12,23,144,82,61,252,0,114,2,19,64,214,41,172,0,126,2,67,12,6,195,153,103,158,158,230,85,98,12,240,118,227,198,15,250,61,221,187,87,0,129,47,185,228,226,36,173,15,184,29,111,59,
86,169,42,3,52,16,99,228,200,111,68,227,193,199,252,121,167,92,249,139,165,87,92,190,244,39,139,230,143,214,50,0,206,0,63,147,116,236,77,155,54,59,157,206,52,175,82,227,73,61,21,53,19,64,108,32,102,19,
143,5,6,64,139,0,31,253,225,188,5,161,173,154,3,8,99,87,169,214,235,25,154,146,19,105,52,232,71,177,52,14,133,122,97,96,110,174,163,166,166,207,87,73,13,1,200,231,127,252,227,249,76,204,242,84,91,122,
237,218,167,30,124,240,190,196,3,223,65,224,183,180,36,91,230,137,86,116,106,75,148,104,168,35,32,26,247,0,203,113,202,30,214,81,150,29,173,101,0,82,20,104,147,234,14,68,74,243,74,185,81,122,173,192,219,
107,175,173,79,223,165,212,151,109,140,197,15,16,7,157,121,217,178,171,158,123,238,5,197,5,218,142,138,138,50,85,157,134,11,200,156,70,105,79,98,184,74,233,229,203,175,67,28,67,74,117,124,67,250,206,107,
212,150,129,210,119,149,212,3,12,166,41,232,186,105,94,117,209,120,53,48,243,178,203,174,236,183,115,43,61,160,21,48,26,141,42,81,129,216,240,81,167,211,129,24,130,104,60,24,44,238,186,70,49,226,178,116,
195,242,229,87,43,116,5,222,130,140,5,121,184,113,227,7,105,94,13,122,26,158,123,238,121,181,207,25,20,108,96,242,138,21,55,36,181,32,200,54,70,74,245,247,228,113,226,121,98,163,6,137,67,184,160,121,2,
133,130,193,160,234,24,215,81,87,41,93,86,105,94,101,110,9,43,163,190,73,46,73,26,47,80,23,46,16,245,202,227,61,247,172,190,228,146,139,19,211,9,41,65,132,25,153,192,103,204,152,61,146,211,183,224,172,
83,11,10,114,225,198,235,245,189,242,250,59,168,192,70,13,22,44,56,115,205,154,7,199,194,12,16,146,36,111,190,249,230,183,222,218,136,148,106,76,196,208,113,109,163,10,145,72,36,39,39,103,44,228,212,225,
112,132,195,145,49,109,27,199,98,124,103,23,151,136,104,60,170,208,210,226,58,234,168,163,198,66,78,33,155,173,173,135,119,246,248,136,86,170,29,57,217,39,206,57,214,106,205,194,226,19,83,253,254,32,134,
99,66,76,96,57,46,24,12,183,251,58,220,30,175,203,229,65,231,170,30,137,208,104,232,185,115,143,55,155,71,255,122,99,191,63,176,105,211,22,150,229,198,22,141,157,14,123,89,89,113,113,97,94,38,235,66,130,
161,240,161,67,141,7,170,107,221,158,118,196,13,132,177,137,145,69,227,226,162,252,169,83,38,124,191,197,153,181,181,245,223,109,219,5,34,26,21,42,2,162,241,240,32,219,102,153,125,204,244,252,60,103,95,
30,56,158,175,111,104,230,88,78,148,36,146,36,180,90,173,65,207,152,77,70,157,78,155,232,109,235,182,157,223,85,237,70,229,138,48,166,48,34,198,141,167,79,155,116,204,209,211,48,185,59,186,7,66,161,176,
212,53,155,218,215,17,248,228,179,45,73,1,73,146,180,90,204,249,249,185,69,69,249,246,108,43,38,207,233,159,234,112,230,252,247,195,77,99,100,45,43,2,130,76,4,167,51,127,56,63,79,18,167,157,50,103,226,
132,242,36,247,88,76,248,174,106,231,199,159,124,9,82,218,106,145,187,184,34,81,118,223,254,131,73,222,36,73,10,71,162,173,46,247,254,253,7,155,91,92,26,154,178,100,153,76,70,67,121,105,17,232,216,16,
9,42,96,4,36,141,15,47,24,70,55,239,140,147,204,102,163,40,245,16,195,13,13,205,95,126,181,77,25,106,211,234,52,202,91,41,89,84,39,195,229,114,195,165,211,106,143,61,118,70,105,73,225,57,11,78,91,255,
198,251,60,207,163,50,70,24,245,32,134,145,195,231,156,125,42,24,183,221,51,60,226,215,119,219,118,125,248,241,102,117,184,92,18,165,1,205,171,54,103,25,57,150,23,5,145,209,233,230,159,121,50,42,96,4,
36,141,15,219,87,41,242,236,121,63,6,201,153,52,228,251,197,151,223,86,215,28,234,169,54,171,115,170,251,137,51,59,219,58,231,132,99,178,186,198,33,33,84,86,150,105,206,9,179,54,109,254,6,21,51,2,146,
198,131,143,51,79,155,203,48,192,97,49,241,2,190,37,113,184,83,28,199,47,76,18,211,115,120,254,153,39,153,77,134,164,56,203,74,11,148,41,217,8,8,136,198,131,137,227,142,157,105,181,90,186,215,17,199,175,
237,59,247,213,28,172,79,245,44,37,172,56,238,83,182,147,228,105,167,252,40,41,66,245,154,251,163,89,224,1,149,52,2,162,241,160,161,32,223,89,81,86,148,36,51,93,109,238,170,237,123,122,245,47,201,232,
18,200,125,96,252,248,82,138,36,146,226,84,47,146,192,193,3,42,105,4,68,227,65,250,24,65,204,57,225,104,41,5,159,124,246,85,95,65,186,61,245,29,109,126,174,67,74,139,130,190,103,149,32,32,140,2,12,105,
23,215,49,71,77,1,38,39,81,242,187,109,187,211,158,82,37,245,187,109,0,73,145,233,87,71,104,52,52,42,105,4,68,227,65,128,94,207,148,151,22,73,61,215,27,70,163,236,222,148,73,29,61,72,44,98,74,16,169,239,
133,138,193,64,200,146,118,161,76,36,18,69,37,141,128,148,234,65,192,140,233,19,69,133,149,9,87,213,206,189,233,67,73,93,62,211,236,169,87,93,91,159,26,115,226,85,87,223,132,74,26,1,209,248,135,130,97,
116,5,249,206,36,147,149,101,185,218,186,198,126,104,44,245,111,29,183,182,186,93,109,158,190,12,227,96,48,220,107,31,56,2,2,162,241,192,80,81,94,156,218,139,156,9,187,100,41,172,248,79,59,253,99,211,
23,223,134,66,145,212,79,68,35,236,199,159,110,65,197,140,128,104,60,8,40,41,202,79,149,147,181,117,13,25,208,56,147,190,106,121,41,197,7,31,126,209,212,236,74,244,223,216,212,250,254,127,55,33,195,24,
97,212,99,40,186,184,114,236,54,154,38,147,6,126,3,129,16,200,207,12,66,119,141,24,75,253,44,141,224,121,126,243,150,239,172,22,51,92,192,97,111,187,191,195,31,64,5,60,148,128,34,96,217,168,16,227,9,2,
39,225,31,142,15,86,204,162,132,17,146,48,69,146,52,146,56,100,11,80,113,249,194,57,12,15,17,120,7,65,4,40,138,39,40,29,73,211,4,49,22,105,156,159,151,147,42,75,65,114,102,18,86,26,224,62,213,237,62,63,
92,136,81,67,137,80,40,200,179,209,210,210,226,89,179,142,153,50,117,74,69,121,69,182,221,206,232,153,228,67,125,165,56,51,176,174,85,46,169,28,151,122,115,140,67,192,176,199,31,120,224,199,207,60,59,
55,203,209,65,102,214,58,164,198,214,119,252,125,198,16,255,195,226,88,8,195,61,4,86,67,224,85,36,254,149,86,211,65,235,44,180,118,172,73,99,107,42,9,219,50,219,58,75,85,167,209,174,121,35,16,94,111,91,
126,174,243,210,159,93,49,239,172,121,51,102,206,60,188,181,40,199,209,20,227,189,56,150,105,35,141,15,132,225,189,190,194,59,159,8,9,211,97,210,184,152,116,20,134,157,143,225,117,92,244,11,138,93,175,
161,107,117,140,141,214,141,9,26,235,25,29,64,236,57,234,11,204,244,101,38,51,229,169,152,241,176,34,218,224,118,36,161,163,163,221,97,183,174,121,240,119,23,45,93,58,52,95,140,68,34,182,184,88,254,254,
123,65,224,25,48,188,183,87,2,142,241,144,0,28,247,196,31,77,162,120,73,20,91,200,139,111,112,252,159,25,22,211,26,24,114,152,119,209,57,236,90,190,197,98,138,239,49,221,227,242,7,2,25,110,205,209,181,
69,181,136,245,183,109,0,194,208,0,26,214,214,230,134,229,203,174,218,242,245,87,67,198,225,17,130,184,181,140,5,113,124,63,137,251,37,236,82,86,248,103,32,58,61,232,243,240,195,220,141,122,216,91,17,
163,209,144,58,1,203,239,207,244,64,109,101,220,8,75,59,139,107,136,193,232,180,180,134,150,55,205,30,123,224,56,150,196,133,183,223,121,243,152,89,179,198,114,91,70,196,13,230,61,56,158,43,136,143,135,
196,135,197,192,223,245,162,83,171,31,181,52,214,199,215,21,39,57,14,228,44,12,73,234,220,196,103,68,208,152,162,200,185,63,58,170,161,177,117,12,210,56,26,13,231,59,237,111,189,251,142,94,63,28,245,21,
31,113,63,8,137,97,45,4,30,148,176,255,11,199,44,82,232,49,76,114,106,13,163,147,198,241,205,180,146,25,24,137,102,122,230,184,50,143,67,185,25,9,37,231,200,177,145,20,233,15,132,198,26,135,57,142,43,
200,115,252,247,163,15,145,89,145,196,228,16,142,85,19,248,178,104,44,130,133,255,74,144,246,225,232,244,58,236,182,49,77,81,169,19,63,88,46,227,131,48,212,185,31,35,228,132,23,28,27,155,103,205,224,18,
247,222,251,27,135,51,5,35,245,87,87,20,236,26,28,255,117,52,118,106,40,24,22,98,163,144,198,20,73,164,110,201,49,128,173,103,19,3,142,0,196,183,248,27,115,52,110,108,168,221,240,198,27,20,69,97,8,125,
176,40,130,99,110,12,187,37,26,211,133,3,163,144,198,178,62,156,10,33,211,110,103,89,169,86,48,50,200,3,233,16,227,255,198,78,29,13,6,253,119,221,113,251,184,241,227,16,93,211,19,201,77,224,118,65,250,
53,203,183,177,225,209,102,27,99,189,77,192,202,156,147,221,211,63,250,11,18,63,17,70,67,18,4,208,44,202,114,130,48,48,166,233,180,26,154,166,128,161,96,183,139,125,179,52,22,139,65,74,120,97,96,131,151,
20,69,234,116,218,248,92,197,222,55,72,32,8,156,97,116,144,120,62,22,139,68,216,17,85,65,45,102,253,117,55,222,128,136,154,137,157,92,75,224,243,121,241,173,72,184,70,195,16,56,62,122,104,12,148,128,58,
154,108,104,101,158,193,12,38,99,230,57,179,243,242,114,44,89,198,68,71,95,71,176,185,197,13,87,170,255,233,83,199,1,163,246,236,171,83,30,139,11,157,197,69,185,137,59,132,184,218,218,15,213,183,40,253,
88,51,166,141,55,25,153,132,198,66,222,105,100,202,196,50,97,92,15,38,127,183,125,127,40,20,49,155,13,21,165,5,13,77,109,109,238,206,57,106,26,154,154,52,161,212,110,183,168,49,215,212,54,134,195,221,
195,140,206,28,91,81,161,19,2,38,182,92,135,234,91,15,214,54,142,4,5,164,163,163,253,15,15,254,110,100,88,231,114,173,97,221,141,28,166,209,229,23,136,49,94,118,33,136,112,115,29,173,51,139,81,249,39,
165,173,214,104,123,107,10,187,40,109,126,145,36,196,112,146,140,52,213,146,184,86,155,151,15,193,113,138,22,252,29,108,208,171,179,58,9,157,78,130,166,89,142,144,140,52,215,18,24,197,228,21,133,154,15,
202,55,249,69,161,38,184,233,250,40,36,132,162,132,64,128,13,120,116,182,92,82,199,112,109,46,150,15,65,218,116,166,108,201,100,34,56,126,17,47,86,242,81,171,134,25,61,52,142,9,2,200,201,20,131,153,28,
8,139,165,78,35,57,5,38,147,30,24,165,215,203,125,131,145,72,52,16,140,8,242,231,72,32,94,150,217,0,23,80,116,215,222,131,129,64,15,37,199,158,45,159,38,3,52,6,241,59,251,232,201,58,157,6,162,246,120,
58,56,158,7,177,105,201,50,229,216,45,112,237,219,127,168,177,185,45,110,1,136,137,149,137,148,8,33,201,177,171,149,1,145,110,177,152,160,5,81,104,12,247,71,207,152,0,55,110,143,47,22,19,178,109,89,157,
49,31,56,212,220,226,177,90,76,147,39,150,66,26,64,113,104,106,110,11,4,195,160,11,232,25,173,35,199,86,92,228,4,111,95,111,221,61,236,231,215,100,25,245,75,126,122,254,160,71,27,221,86,21,124,253,13,
251,221,183,139,161,80,235,77,55,231,84,222,73,229,245,179,15,49,240,16,126,241,156,159,95,133,239,220,21,220,191,151,210,233,161,114,240,237,237,185,75,46,226,221,114,99,13,148,142,28,172,45,56,239,156,
174,254,48,73,17,23,92,75,171,255,203,205,132,150,225,219,61,185,23,94,204,54,53,7,170,190,163,116,6,33,228,215,150,148,100,31,189,208,179,225,77,49,18,197,53,52,142,17,172,171,197,177,240,124,41,22,243,
124,254,153,115,241,133,66,48,232,221,242,101,238,249,75,35,53,7,131,123,119,105,178,108,192,118,33,20,212,228,229,217,23,158,215,241,197,230,208,161,90,125,126,65,241,47,126,14,196,110,254,235,179,82,
56,212,76,107,143,21,196,98,54,18,24,77,52,230,57,158,166,146,73,11,117,119,64,118,53,214,219,100,76,96,197,180,41,242,225,79,192,129,67,13,173,73,186,168,158,209,129,148,203,117,218,142,153,57,113,251,
206,106,111,187,63,49,78,96,26,180,188,115,142,159,14,143,59,119,215,128,144,76,12,235,200,177,2,193,198,85,20,114,124,108,199,174,234,196,87,54,171,121,250,212,138,61,123,107,61,222,94,78,96,133,34,134,
200,149,83,224,128,165,51,166,141,107,117,121,246,238,63,164,106,248,37,69,185,165,37,121,101,37,249,173,46,47,36,30,88,90,181,227,64,82,84,213,7,27,21,111,83,39,149,109,219,113,96,24,57,204,243,220,226,
69,231,224,135,65,57,20,3,1,254,128,156,53,144,144,218,137,19,112,173,38,19,251,10,4,110,201,95,254,100,219,190,227,243,217,179,76,58,70,232,8,16,58,237,180,87,94,220,115,217,149,246,11,207,151,120,190,
225,177,39,38,255,237,233,164,112,192,237,207,202,203,116,122,171,16,9,79,253,215,63,61,239,252,231,171,5,243,77,140,145,237,240,88,79,63,99,202,115,207,236,190,252,170,67,127,123,218,148,87,202,121,219,
8,134,153,190,254,101,239,127,54,214,188,189,254,164,103,215,133,170,118,28,60,105,238,137,127,249,147,196,241,31,229,229,82,26,61,176,157,235,112,219,206,60,125,242,63,158,217,92,49,89,138,241,199,124,
254,145,182,176,80,110,181,127,124,210,214,69,11,177,236,188,2,156,56,158,23,222,20,99,58,98,136,58,5,15,123,23,23,203,241,169,3,78,90,237,0,246,184,83,71,156,18,29,13,6,102,234,228,50,112,222,185,251,
32,240,36,213,158,12,71,162,123,247,215,237,218,83,11,126,128,48,12,163,77,36,27,88,161,199,30,51,153,231,99,159,111,174,74,226,176,162,250,110,221,182,15,2,78,158,88,146,84,137,21,165,58,85,191,232,74,
170,156,218,96,40,66,16,4,176,29,116,99,72,64,162,149,94,87,223,178,119,95,221,142,221,53,208,42,213,212,54,193,215,123,109,14,192,27,228,40,171,167,153,48,12,157,91,1,255,41,167,157,118,88,20,100,141,
134,176,200,134,6,174,211,217,110,186,158,180,217,250,15,2,58,48,36,233,47,79,27,143,62,74,71,49,98,40,202,179,29,214,51,207,128,87,45,47,188,64,208,52,105,52,6,119,109,63,120,103,229,222,27,111,236,248,
226,75,96,117,245,202,91,106,110,187,19,92,52,70,11,31,246,27,39,203,173,182,126,194,120,26,195,165,40,7,229,26,243,249,192,165,236,222,187,73,185,101,241,71,216,80,233,109,183,128,75,104,199,46,40,96,
190,205,13,30,224,38,240,205,86,77,174,51,247,236,69,33,95,43,180,59,32,180,69,142,135,250,24,173,173,45,95,121,51,112,120,199,133,75,235,31,122,212,48,117,170,86,159,133,9,34,212,197,169,130,196,199,
134,238,252,176,195,78,99,165,199,40,9,140,46,211,69,94,137,161,18,221,129,195,224,2,28,6,125,53,77,112,80,110,119,239,173,5,159,224,63,129,225,172,94,175,213,104,168,205,95,237,232,75,107,5,195,24,236,
106,8,232,116,88,147,168,42,166,237,166,134,183,64,245,233,83,203,65,222,30,172,235,101,15,176,22,151,215,231,11,128,183,250,134,214,116,41,247,180,139,195,221,31,14,54,194,204,62,214,45,73,63,236,220,
89,186,184,120,192,227,118,146,4,162,173,245,165,87,65,121,54,31,127,2,31,244,66,10,114,22,47,226,189,237,193,88,4,236,40,141,61,59,236,106,62,176,234,158,93,143,60,210,254,254,127,99,129,192,222,53,15,
236,187,127,85,203,63,255,14,202,112,12,19,44,167,156,4,209,48,21,229,166,137,51,120,191,87,177,114,229,108,22,23,21,254,226,154,246,160,215,156,83,80,114,235,205,241,79,197,39,14,10,130,50,36,17,107,
151,235,216,248,199,31,6,182,128,154,173,36,70,228,56,176,178,115,150,94,224,222,240,230,190,151,254,181,239,55,55,236,92,122,137,38,199,73,80,100,16,199,10,69,73,55,132,3,200,135,93,232,71,194,209,212,
222,41,131,94,151,121,225,165,218,198,185,14,27,40,234,32,51,123,21,101,41,76,246,129,250,157,109,51,131,181,9,247,113,203,92,222,100,247,219,109,251,210,175,154,106,108,106,3,237,26,194,182,180,122,211,
119,188,39,41,14,19,199,23,65,43,0,58,194,15,234,83,224,133,97,159,103,226,112,228,56,28,142,30,25,228,249,208,187,239,69,183,110,147,120,86,244,7,12,103,156,102,60,239,92,89,193,113,187,67,31,124,100,
190,96,9,150,176,198,216,255,239,151,245,39,157,216,105,244,10,66,219,111,87,199,26,26,65,159,161,28,78,73,140,225,140,108,58,74,28,23,120,125,131,113,254,89,132,178,183,169,36,181,253,246,190,88,125,
189,28,143,40,25,231,207,51,157,191,184,75,28,99,160,121,251,191,248,2,126,22,251,79,206,107,251,252,67,16,161,214,51,78,243,125,244,113,44,46,171,129,87,224,194,216,243,49,119,19,157,109,3,177,105,208,
24,65,73,38,180,90,145,151,167,27,57,46,94,26,218,185,139,178,89,237,231,47,242,221,183,13,60,83,102,83,180,182,78,228,249,137,235,158,216,251,204,95,202,126,123,143,220,202,31,56,160,45,200,87,251,102,
228,70,39,219,26,222,179,87,63,105,98,249,138,91,247,175,185,95,171,10,191,56,153,53,185,185,80,155,181,22,103,104,91,21,5,42,6,73,70,69,201,38,97,54,65,24,178,17,228,195,46,141,131,225,72,170,82,173,
211,105,52,153,153,199,82,194,60,46,21,133,133,242,254,242,7,107,51,221,239,178,166,182,17,252,23,21,116,214,72,138,34,163,81,174,223,113,29,16,218,16,202,104,96,82,185,138,245,199,228,93,123,234,126,
224,239,38,97,195,63,93,44,55,55,121,155,126,193,229,138,238,216,201,204,57,193,250,203,101,230,139,151,122,31,121,60,244,222,251,114,163,211,230,246,63,255,47,172,167,250,224,127,225,95,177,70,185,140,
98,174,182,67,243,206,17,60,222,172,203,47,179,93,255,107,230,132,227,216,61,123,133,120,191,148,196,178,224,77,232,144,155,99,209,215,113,104,193,34,161,165,37,235,178,75,193,155,225,140,83,189,143,253,
201,125,239,125,234,47,2,149,53,202,135,252,155,54,219,23,158,3,74,148,177,100,188,198,145,227,94,255,6,129,245,115,84,159,224,15,48,102,187,229,196,57,181,149,171,252,95,124,153,123,217,207,84,27,137,
48,232,247,45,187,22,56,63,107,205,35,249,255,123,229,222,95,92,19,220,186,141,182,89,213,182,3,160,45,46,110,126,246,239,205,127,126,186,226,193,251,116,26,3,47,47,182,147,59,201,65,111,110,125,230,31,
230,227,102,151,44,185,40,224,107,165,44,86,185,245,145,36,72,155,65,146,44,194,208,117,79,30,126,26,7,35,189,158,201,146,56,196,146,86,24,119,5,233,90,168,8,118,53,77,17,161,80,132,207,184,23,151,227,
98,145,72,84,171,165,148,253,40,226,75,152,51,10,203,178,108,242,14,22,202,97,52,233,148,7,17,44,91,225,7,23,161,40,10,146,52,204,74,181,201,148,188,251,55,149,159,111,191,245,102,16,194,84,94,30,115,
252,113,89,63,191,52,252,217,231,138,173,75,129,4,235,217,143,0,158,113,70,86,187,220,183,223,165,155,117,116,238,31,31,209,159,56,87,59,101,178,241,156,179,115,31,125,152,80,214,87,16,132,236,141,150,
251,74,92,183,220,174,25,87,145,251,196,31,245,39,201,222,204,23,93,88,242,241,251,193,183,223,137,108,124,191,219,66,134,216,214,111,208,79,152,0,66,192,60,119,14,184,180,191,187,177,223,254,49,62,218,
97,57,89,62,37,183,237,149,87,219,63,248,80,63,113,2,99,178,11,241,226,210,228,228,120,255,187,241,208,253,15,22,254,230,122,206,213,86,243,236,58,208,186,165,158,147,14,128,178,180,197,178,107,249,50,
184,159,240,200,195,97,185,103,78,174,22,186,146,162,186,191,252,137,111,109,155,250,202,139,121,103,45,8,181,53,224,113,222,75,184,60,134,204,12,97,35,124,216,105,12,198,103,32,16,78,37,178,53,179,254,
155,238,157,49,187,184,99,96,116,112,223,238,27,152,194,226,109,15,64,40,131,94,139,41,19,42,51,35,8,15,154,109,10,103,211,204,199,84,82,203,115,223,199,40,98,24,109,174,211,54,174,188,96,250,228,178,
163,103,140,43,204,179,15,251,104,83,47,61,212,93,68,141,108,222,226,127,233,149,224,219,111,211,165,165,233,170,151,217,44,248,58,64,216,58,126,127,127,143,90,209,220,140,37,12,58,18,102,163,232,247,
131,163,243,15,15,36,197,96,253,213,242,192,203,175,169,159,166,113,173,231,141,119,224,198,92,60,30,108,93,182,185,37,228,170,239,103,244,18,199,101,43,250,130,197,156,219,237,147,216,150,191,253,67,
30,113,152,63,79,237,128,210,218,243,106,239,151,199,198,155,214,174,99,227,131,207,73,229,11,205,190,174,172,212,39,197,218,94,93,159,191,252,106,19,70,178,13,141,32,141,65,252,10,152,244,213,9,63,2,
218,31,245,238,91,214,217,199,71,92,13,184,218,240,227,163,136,198,114,123,217,17,76,21,199,89,89,134,76,70,50,212,131,216,84,13,147,162,73,81,94,92,49,176,110,64,150,229,32,148,50,208,165,156,179,154,
153,102,43,37,205,193,144,250,219,108,23,222,166,78,119,73,87,0,4,81,144,103,159,117,212,132,233,83,202,138,11,29,86,139,137,160,8,158,143,113,177,225,183,141,3,193,94,22,99,130,22,221,124,245,178,208,
7,31,128,146,12,197,160,200,165,206,122,159,82,160,132,158,137,213,214,2,153,123,237,211,239,246,198,232,185,234,26,50,59,27,164,122,146,71,144,207,138,172,198,226,191,42,109,182,4,246,84,1,33,11,111,
190,201,52,123,150,247,157,255,136,253,241,69,18,4,89,54,78,24,79,153,179,230,190,251,238,180,87,94,148,21,141,99,103,197,186,18,172,45,42,98,3,222,253,55,172,112,129,49,31,247,223,195,182,233,170,9,160,
87,236,190,226,106,184,159,252,216,31,163,135,234,165,120,63,31,67,26,2,181,213,91,142,158,13,238,211,94,120,94,158,166,203,202,125,224,144,170,232,16,210,120,40,198,181,188,94,127,126,110,118,74,19,137,
91,45,70,16,146,25,244,112,245,56,166,28,2,246,187,223,109,175,236,2,40,13,71,230,193,213,13,253,50,236,226,74,232,145,203,8,118,155,185,172,52,79,230,70,56,234,106,243,117,116,4,85,75,193,233,176,2,171,
135,151,198,45,45,201,125,233,161,141,31,120,214,60,148,115,247,157,204,220,31,201,166,165,193,192,187,218,226,214,167,40,211,172,167,5,66,24,141,98,48,72,21,21,130,164,237,231,119,142,178,52,120,11,244,
82,25,98,77,205,18,207,171,45,5,174,161,99,152,212,246,210,171,133,215,46,19,163,209,131,183,87,246,59,145,8,116,1,198,94,160,159,48,158,208,208,57,103,157,165,56,102,205,57,129,234,234,111,135,18,163,
9,93,253,163,15,145,58,51,213,151,66,34,74,208,192,132,58,218,26,30,121,188,240,134,95,5,246,236,142,212,214,130,224,141,9,33,163,189,192,179,125,107,205,237,119,149,175,190,55,107,210,204,240,190,189,
218,236,236,16,65,248,136,161,59,142,119,40,164,113,36,202,133,35,209,84,243,216,145,99,201,172,167,186,135,109,28,147,197,148,72,14,112,147,81,50,126,114,170,162,166,166,63,102,53,89,129,78,242,41,165,
147,199,113,218,139,25,14,165,20,230,219,75,75,156,81,150,221,181,167,14,46,183,167,35,209,218,87,18,60,188,52,118,181,186,220,110,119,207,94,171,127,219,174,251,149,194,225,120,215,145,159,136,119,56,
83,121,206,88,67,67,34,15,99,46,87,248,147,79,113,90,35,203,88,90,227,94,213,67,169,166,11,11,18,69,55,196,67,218,237,56,195,120,126,255,80,82,26,124,79,61,163,63,253,52,133,72,202,79,12,228,240,108,120,
83,118,224,56,223,71,31,107,180,166,254,44,163,144,109,193,89,180,205,182,117,238,169,155,10,203,63,113,56,15,220,184,50,107,238,28,163,198,16,107,239,80,27,8,109,78,62,169,79,103,207,74,242,156,34,243,
254,21,43,133,112,120,252,31,30,148,226,19,34,52,102,59,223,238,213,99,120,243,211,207,138,124,140,25,87,38,138,156,78,194,188,56,230,37,137,81,69,99,64,171,171,61,181,191,26,44,85,157,78,211,175,90,155,
180,221,124,148,229,224,94,175,215,12,40,1,240,45,8,21,141,114,253,118,53,247,170,11,164,116,32,167,237,169,206,32,102,75,150,193,233,176,4,130,145,237,59,107,67,225,232,15,150,235,135,167,253,101,185,
170,109,219,18,93,180,83,38,5,94,93,15,194,83,140,68,194,159,125,238,251,235,51,124,93,45,187,125,7,168,205,204,9,199,215,255,228,2,238,64,181,24,10,7,223,126,215,125,231,61,98,32,40,197,71,122,114,238,
255,109,240,245,13,174,91,239,224,235,14,65,25,176,187,247,184,110,187,139,219,127,64,233,202,139,181,180,74,241,245,231,57,171,239,13,190,245,182,123,245,239,100,9,28,141,70,190,250,186,97,241,133,154,
241,227,140,23,246,152,13,74,107,140,129,175,190,145,123,79,171,182,179,17,31,97,52,165,55,140,161,105,204,249,233,249,124,123,123,235,166,143,162,141,117,108,155,171,233,207,79,201,170,208,185,231,114,
46,87,15,179,63,213,202,235,89,2,180,197,202,10,209,3,215,175,32,116,90,253,184,242,200,129,3,229,15,220,151,119,213,21,94,76,178,156,114,50,65,83,236,33,176,153,53,6,12,107,192,241,8,57,116,231,120,14,
209,100,49,143,55,80,144,111,79,93,243,145,159,107,171,169,109,73,219,97,219,185,51,166,218,213,20,14,179,224,98,50,14,108,31,25,163,129,129,80,138,69,157,249,66,67,177,107,95,206,30,182,113,223,198,177,
108,75,139,25,209,15,20,102,240,185,239,64,99,26,125,126,216,55,3,53,24,205,31,125,248,209,105,167,159,222,221,225,116,221,181,158,223,173,113,221,114,43,105,179,105,38,79,182,94,247,43,217,72,142,15,
23,101,223,178,18,84,8,207,234,223,97,140,150,208,233,45,203,175,49,46,90,168,252,208,116,113,81,209,198,183,219,238,190,215,125,239,106,92,207,128,224,213,148,151,209,167,254,88,230,14,77,27,230,157,
1,234,183,236,173,168,176,240,229,23,221,247,63,224,94,117,31,70,83,82,36,106,56,229,100,235,245,191,74,210,111,73,179,57,236,110,98,27,26,66,85,59,100,195,152,192,37,121,104,55,187,75,94,203,212,35,205,
38,42,43,75,158,139,19,142,104,40,173,253,188,5,96,247,202,205,144,179,0,28,67,109,141,108,83,115,254,181,203,170,87,200,115,182,112,146,84,107,151,28,85,78,14,229,114,137,242,141,157,106,105,237,188,
201,202,146,226,102,179,193,148,93,255,212,147,101,171,42,53,78,7,23,106,167,45,150,137,107,31,183,44,89,232,156,55,47,180,115,183,175,234,43,141,77,30,70,222,69,226,212,232,163,177,188,157,98,107,123,
174,51,105,70,20,102,54,233,181,90,186,175,229,123,170,56,78,180,72,227,39,66,4,192,174,134,171,221,151,209,134,88,54,171,220,96,187,61,254,190,100,236,128,109,227,52,60,206,32,102,141,134,34,8,220,215,
17,76,55,147,4,27,126,105,172,209,104,222,216,240,198,189,171,126,219,45,177,52,26,251,93,183,197,154,154,112,173,150,148,153,131,89,126,126,169,250,54,123,229,77,32,87,5,143,135,202,147,13,126,236,168,
238,25,96,164,213,154,251,216,195,192,76,193,235,161,10,10,186,35,212,233,172,255,123,85,183,183,28,187,243,161,7,197,80,72,240,249,232,4,111,137,130,17,151,167,194,226,135,126,255,16,219,216,168,33,53,
240,59,17,36,21,218,181,75,185,145,53,76,146,98,235,234,67,59,118,98,20,37,114,17,227,228,105,92,115,75,235,115,207,211,240,22,126,82,248,233,9,162,241,79,107,179,207,61,155,178,103,71,14,214,130,114,
78,116,205,98,128,176,193,109,85,209,154,131,20,73,6,183,109,143,86,215,200,55,85,219,35,53,53,74,228,36,24,252,1,207,254,235,111,42,191,127,21,227,40,216,123,211,77,218,226,34,224,48,239,245,238,184,
112,41,78,209,12,77,123,37,233,75,154,28,202,93,111,241,25,51,102,15,209,151,112,124,218,228,226,212,94,220,80,152,61,80,211,220,87,168,242,82,167,178,78,16,12,236,125,7,58,231,123,104,104,106,242,196,
66,104,106,119,236,174,239,183,174,171,223,221,181,167,94,49,62,103,78,43,229,184,216,238,125,253,159,32,53,113,124,129,78,75,111,219,81,219,45,142,44,198,226,66,123,125,163,219,219,222,75,11,98,54,49,
101,37,206,198,102,175,218,100,244,10,189,94,59,190,60,175,213,229,107,113,245,57,147,212,158,109,46,200,179,37,126,122,88,224,243,121,31,123,244,15,139,126,242,19,108,184,113,219,111,126,83,240,208,67,
39,219,11,252,132,188,13,188,24,141,200,19,220,53,90,101,178,125,92,236,227,184,90,187,148,30,77,185,3,69,34,180,58,49,26,21,34,17,74,175,87,235,138,16,12,81,89,102,160,52,188,194,123,174,183,147,163,
194,101,192,13,30,215,180,213,155,46,181,0,231,125,62,224,51,105,52,68,27,27,48,65,50,206,156,206,181,180,178,173,77,154,188,162,18,142,255,64,67,222,149,101,26,202,133,138,67,103,133,203,103,163,53,247,
114,124,169,158,209,100,153,245,233,173,211,36,249,201,241,49,32,0,252,178,21,101,206,126,191,91,81,234,132,223,31,180,122,181,3,41,117,161,197,64,58,158,165,52,75,35,176,254,44,231,174,78,151,88,220,
188,79,55,177,28,90,132,145,176,233,151,197,98,187,127,213,125,216,72,64,226,143,65,18,56,69,201,243,168,112,165,165,38,192,150,150,162,17,184,81,30,65,192,138,225,112,220,220,37,129,192,66,48,72,104,
181,146,202,67,8,169,213,196,252,126,176,240,65,235,150,69,180,106,238,65,216,72,4,98,195,227,55,98,148,237,188,97,89,37,114,76,153,221,97,50,66,59,2,238,218,28,7,101,201,2,1,30,235,232,208,230,22,80,
66,12,124,109,160,9,243,208,110,172,55,164,135,74,129,4,139,196,103,56,38,161,168,32,187,175,177,86,41,161,143,171,103,159,153,207,215,17,98,116,154,241,21,121,76,31,253,100,224,62,97,92,62,195,104,98,
49,33,81,238,13,68,169,78,246,201,114,50,3,129,99,233,148,240,254,226,230,121,33,202,114,6,189,86,207,244,194,100,208,53,38,142,203,135,183,130,32,140,4,250,180,122,124,107,159,120,18,27,81,0,241,72,211,
242,194,134,78,131,75,36,244,122,184,58,151,52,192,35,232,252,96,111,199,167,227,0,103,73,147,73,22,185,221,118,153,28,156,52,24,32,6,32,164,204,97,181,148,37,17,220,9,134,145,58,111,116,157,55,58,93,
247,192,1,200,121,80,4,140,70,69,80,19,96,123,56,28,148,217,44,136,98,137,32,189,71,147,155,25,61,137,227,163,150,198,128,218,250,182,84,26,99,242,66,220,156,244,242,56,213,28,61,212,224,118,123,2,90,
13,5,50,185,164,200,110,181,24,128,177,96,105,195,95,107,150,1,92,192,93,67,147,242,144,172,187,35,113,70,148,172,110,101,106,9,36,219,186,225,48,203,114,60,52,16,249,185,86,32,33,124,206,104,208,229,
58,45,19,199,201,214,160,32,136,25,54,16,135,234,221,224,179,188,212,97,179,26,21,217,14,202,5,40,38,133,249,217,19,198,229,129,186,1,89,195,241,17,177,53,179,217,156,117,231,93,119,215,213,213,97,8,105,
26,22,12,203,22,165,118,18,127,92,75,229,12,249,190,243,67,189,215,33,8,162,134,38,15,88,125,201,230,34,163,113,58,178,90,93,29,125,201,195,94,217,209,220,218,30,8,69,28,118,51,112,9,174,164,183,193,160,
76,96,224,137,63,16,73,209,123,51,100,113,47,158,107,235,218,74,138,229,86,3,174,238,124,197,155,9,92,161,125,6,236,139,178,124,93,125,27,168,33,121,78,11,92,137,175,92,109,29,46,183,31,164,177,205,106,
24,33,117,52,47,191,120,225,185,231,109,219,94,133,232,218,151,190,15,54,58,24,120,55,107,41,191,222,52,244,197,54,12,91,150,250,58,194,90,13,157,90,71,109,22,3,200,76,143,55,216,179,191,161,115,125,175,
216,199,92,8,224,42,92,32,21,161,33,208,104,40,48,154,64,34,114,92,44,24,138,66,147,1,50,57,18,225,184,158,147,156,107,106,93,25,50,185,182,222,157,58,72,6,162,114,127,117,139,197,172,215,233,104,16,152,
64,96,248,68,40,204,42,228,132,200,193,244,205,36,242,64,48,186,103,127,19,232,231,144,114,66,222,76,79,0,81,15,142,157,98,63,194,85,31,108,29,33,213,20,178,201,114,210,130,249,103,191,253,238,59,136,
180,169,114,152,150,176,113,162,244,4,67,189,107,48,228,12,225,56,211,112,210,88,54,183,218,58,40,138,48,27,147,229,167,35,219,4,45,155,167,71,39,112,151,58,157,150,120,44,219,203,166,147,21,37,57,80,
1,65,178,37,185,71,162,153,110,118,159,102,36,204,231,15,167,30,209,9,74,117,68,224,6,80,3,68,9,26,53,184,122,181,37,162,44,63,114,42,171,86,171,219,95,93,55,127,222,252,55,223,122,147,162,209,134,213,
221,28,102,36,172,76,146,158,213,81,127,212,235,115,135,176,119,122,56,109,99,21,141,205,237,254,96,68,74,217,138,62,199,110,116,230,152,19,213,21,245,85,230,145,235,180,244,132,10,39,69,19,213,181,46,
84,213,6,11,122,189,161,246,80,227,113,179,143,221,181,115,231,112,168,4,35,238,7,145,231,135,137,82,145,36,61,162,163,126,111,212,231,234,134,205,8,34,134,241,87,104,108,246,181,251,194,202,60,173,196,
43,203,204,20,21,216,64,67,198,226,51,168,21,199,12,231,23,19,4,110,183,25,139,11,109,32,205,246,215,32,14,15,190,76,230,69,226,204,51,230,61,246,232,163,99,92,8,107,36,108,162,32,69,9,226,70,61,253,180,
201,56,92,135,176,13,63,141,227,218,181,191,205,29,72,61,29,134,209,82,165,133,182,108,171,129,36,240,174,65,167,126,120,172,161,41,32,112,121,177,221,102,209,243,92,172,186,182,13,157,108,126,88,106,
12,65,216,29,249,127,120,232,177,19,231,156,184,254,245,215,135,180,31,105,184,161,76,9,208,75,18,88,194,54,12,123,73,71,94,108,212,110,49,89,114,104,102,120,19,70,58,157,249,195,155,2,176,0,67,97,78,
171,163,82,231,84,48,12,77,211,157,51,108,64,40,119,248,163,73,253,46,240,150,209,209,102,147,206,110,53,216,179,13,140,220,231,132,5,130,108,67,179,79,66,20,62,156,208,233,24,150,139,189,252,242,43,175,
191,250,74,56,28,202,178,88,236,118,251,97,253,226,166,79,62,213,126,250,105,185,222,204,197,55,158,199,227,83,54,112,108,40,46,34,222,17,109,196,36,135,132,101,75,152,143,196,55,210,228,131,122,122,189,
193,104,100,140,26,130,24,246,226,24,186,201,152,253,194,154,197,88,178,244,100,223,107,238,99,49,121,147,119,101,202,13,148,36,208,62,201,179,32,136,238,246,16,208,24,209,108,40,17,8,248,37,129,159,48,
126,220,236,99,103,77,157,54,173,172,172,204,150,157,205,232,24,34,190,104,65,150,95,120,90,1,135,119,73,90,60,197,17,87,173,80,252,145,213,171,79,126,106,221,73,150,92,31,49,164,86,50,164,130,199,177,
16,134,121,8,188,150,192,183,147,248,102,154,246,104,117,89,180,22,31,49,246,250,8,162,177,98,217,102,153,116,38,147,54,117,135,250,126,58,27,4,177,35,16,5,113,141,20,233,97,4,199,177,44,27,149,132,24,
69,82,114,19,171,204,142,194,211,234,195,137,116,149,82,28,187,92,4,28,39,132,216,76,65,208,73,18,63,132,220,1,162,130,240,15,226,184,143,36,58,8,146,165,40,45,73,107,134,112,63,128,35,146,198,42,244,
140,198,192,208,58,29,149,158,207,242,0,15,27,11,203,195,182,188,132,212,104,132,177,138,17,58,0,8,204,132,11,147,143,89,51,233,180,84,220,54,150,66,161,206,69,255,112,47,196,68,46,38,200,91,222,33,242,
34,32,26,143,240,244,137,93,179,148,129,177,158,246,48,42,48,4,132,35,143,198,113,147,41,190,151,26,134,196,46,2,194,145,73,99,169,123,43,53,84,88,8,8,71,170,52,22,177,206,61,49,17,143,17,16,142,80,105,
156,209,202,8,4,4,68,227,17,174,85,35,30,35,32,28,233,182,113,39,139,81,89,33,32,28,161,52,150,39,2,197,41,140,227,168,176,16,16,142,76,26,11,130,40,146,202,13,146,199,8,8,71,38,141,189,62,180,206,1,1,
161,31,16,232,39,64,64,64,52,70,64,64,64,52,70,64,64,64,52,70,64,64,52,70,64,64,64,52,70,64,64,64,52,70,64,64,64,52,70,64,64,52,70,64,64,64,52,70,64,64,64,52,70,64,64,64,52,70,64,64,52,70,64,64,64,52,
70,64,64,64,52,70,64,64,64,52,70,64,64,52,70,64,64,64,52,70,64,64,64,52,70,64,64,64,52,70,64,64,52,70,64,64,64,52,70,64,64,64,52,70,64,64,64,52,70,64,24,147,248,127,1,6,0,101,92,192,146,45,64,125,184,
0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* MainViewComponent::background1_png = (const char*) resource_MainViewComponent_background1_png;
const int MainViewComponent::background1_pngSize = 33712;

// JUCER_RESOURCE: background2_png, 16984, "../../graphic assets/plugin assets/background2.png"
static const unsigned char resource_MainViewComponent_background2_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,1,66,0,0,2,71,8,2,0,0,0,106,234,200,229,0,0,0,25,116,69,88,116,83,111,102,
116,119,97,114,101,0,65,100,111,98,101,32,73,109,97,103,101,82,101,97,100,121,113,201,101,60,0,0,3,34,105,84,88,116,88,77,76,58,99,111,109,46,97,100,111,98,101,46,120,109,112,0,0,0,0,0,60,63,120,112,97,
99,107,101,116,32,98,101,103,105,110,61,34,239,187,191,34,32,105,100,61,34,87,53,77,48,77,112,67,101,104,105,72,122,114,101,83,122,78,84,99,122,107,99,57,100,34,63,62,32,60,120,58,120,109,112,109,101,
116,97,32,120,109,108,110,115,58,120,61,34,97,100,111,98,101,58,110,115,58,109,101,116,97,47,34,32,120,58,120,109,112,116,107,61,34,65,100,111,98,101,32,88,77,80,32,67,111,114,101,32,53,46,48,45,99,48,
54,48,32,54,49,46,49,51,52,55,55,55,44,32,50,48,49,48,47,48,50,47,49,50,45,49,55,58,51,50,58,48,48,32,32,32,32,32,32,32,32,34,62,32,60,114,100,102,58,82,68,70,32,120,109,108,110,115,58,114,100,102,61,
34,104,116,116,112,58,47,47,119,119,119,46,119,51,46,111,114,103,47,49,57,57,57,47,48,50,47,50,50,45,114,100,102,45,115,121,110,116,97,120,45,110,115,35,34,62,32,60,114,100,102,58,68,101,115,99,114,105,
112,116,105,111,110,32,114,100,102,58,97,98,111,117,116,61,34,34,32,120,109,108,110,115,58,120,109,112,61,34,104,116,116,112,58,47,47,110,115,46,97,100,111,98,101,46,99,111,109,47,120,97,112,47,49,46,
48,47,34,32,120,109,108,110,115,58,120,109,112,77,77,61,34,104,116,116,112,58,47,47,110,115,46,97,100,111,98,101,46,99,111,109,47,120,97,112,47,49,46,48,47,109,109,47,34,32,120,109,108,110,115,58,115,
116,82,101,102,61,34,104,116,116,112,58,47,47,110,115,46,97,100,111,98,101,46,99,111,109,47,120,97,112,47,49,46,48,47,115,84,121,112,101,47,82,101,115,111,117,114,99,101,82,101,102,35,34,32,120,109,112,
58,67,114,101,97,116,111,114,84,111,111,108,61,34,65,100,111,98,101,32,80,104,111,116,111,115,104,111,112,32,67,83,53,32,77,97,99,105,110,116,111,115,104,34,32,120,109,112,77,77,58,73,110,115,116,97,110,
99,101,73,68,61,34,120,109,112,46,105,105,100,58,52,68,68,57,54,52,56,70,52,52,69,53,49,49,69,53,66,67,48,49,65,50,55,65,66,68,69,56,48,50,56,49,34,32,120,109,112,77,77,58,68,111,99,117,109,101,110,116,
73,68,61,34,120,109,112,46,100,105,100,58,52,68,68,57,54,52,57,48,52,52,69,53,49,49,69,53,66,67,48,49,65,50,55,65,66,68,69,56,48,50,56,49,34,62,32,60,120,109,112,77,77,58,68,101,114,105,118,101,100,70,
114,111,109,32,115,116,82,101,102,58,105,110,115,116,97,110,99,101,73,68,61,34,120,109,112,46,105,105,100,58,52,68,68,57,54,52,56,68,52,52,69,53,49,49,69,53,66,67,48,49,65,50,55,65,66,68,69,56,48,50,56,
49,34,32,115,116,82,101,102,58,100,111,99,117,109,101,110,116,73,68,61,34,120,109,112,46,100,105,100,58,52,68,68,57,54,52,56,69,52,52,69,53,49,49,69,53,66,67,48,49,65,50,55,65,66,68,69,56,48,50,56,49,
34,47,62,32,60,47,114,100,102,58,68,101,115,99,114,105,112,116,105,111,110,62,32,60,47,114,100,102,58,82,68,70,62,32,60,47,120,58,120,109,112,109,101,116,97,62,32,60,63,120,112,97,99,107,101,116,32,101,
110,100,61,34,114,34,63,62,199,38,38,207,0,0,62,204,73,68,65,84,120,218,236,189,9,120,35,87,153,239,93,139,164,210,82,150,101,201,182,108,121,107,91,189,119,167,211,73,27,18,18,186,7,2,9,193,64,66,210,
119,152,60,92,96,54,102,110,242,13,195,54,192,199,50,64,128,132,192,36,132,144,97,27,150,161,167,97,128,185,144,134,36,16,50,132,64,160,155,172,48,161,59,189,185,219,187,188,202,182,108,89,251,86,117,
223,82,117,151,54,91,86,67,218,146,172,255,239,145,229,115,170,142,74,71,85,231,95,239,251,158,58,117,138,221,181,171,151,1,0,84,51,28,118,1,0,144,49,0,0,50,6,0,64,198,0,64,198,0,0,200,24,0,0,25,3,0,32,
99,0,32,99,0,0,100,12,0,128,140,1,0,144,49,0,144,49,0,0,50,6,0,64,198,0,0,200,24,0,200,24,0,80,173,232,170,186,246,157,157,109,110,119,183,40,138,28,199,226,88,2,13,73,146,2,129,224,224,224,136,199,51,
1,25,87,52,59,118,108,21,69,211,161,67,15,76,76,76,208,97,67,219,5,26,60,207,187,92,174,190,190,62,81,180,156,58,117,6,78,117,133,210,216,232,112,56,108,7,15,30,244,120,60,208,48,200,35,149,74,81,195,
56,112,224,128,211,73,13,165,97,253,159,182,156,78,87,41,229,4,65,216,182,109,75,119,119,151,44,43,238,74,217,235,189,115,231,182,167,158,122,146,236,48,154,44,40,34,230,68,34,177,109,219,182,201,201,
105,88,99,198,110,111,216,185,115,187,197,98,174,156,122,83,149,6,7,7,209,82,65,113,6,6,6,28,14,59,156,106,198,229,106,217,180,201,77,9,159,111,161,114,234,45,8,134,96,48,136,102,10,138,19,8,4,168,169,
212,186,140,201,139,238,232,104,143,197,98,167,79,247,71,163,49,52,11,80,93,200,178,204,178,235,255,42,198,42,61,213,100,129,41,42,30,24,24,76,38,83,118,187,29,205,2,128,234,147,177,223,191,68,47,236,
38,0,170,59,54,6,0,64,198,0,0,200,24,0,0,25,3,0,25,3,0,32,99,0,0,100,12,0,128,140,1,128,140,1,168,78,88,150,149,101,25,50,174,80,226,241,184,40,138,104,166,160,56,212,72,168,169,64,198,21,202,252,252,
66,79,79,15,154,41,40,142,219,237,166,166,178,238,127,230,5,76,226,227,241,140,211,171,66,234,61,52,52,186,111,223,190,254,254,254,88,12,247,93,129,229,17,4,97,239,222,189,39,78,244,175,251,95,90,234,
236,31,149,70,56,28,169,171,19,123,123,247,204,204,204,224,198,99,80,24,18,183,183,183,239,223,191,223,239,15,142,142,122,214,255,239,221,181,171,183,122,107,223,213,213,225,118,111,16,69,75,45,220,83,
10,74,71,150,229,96,48,52,48,48,60,54,54,94,11,191,183,186,39,184,165,19,109,45,156,107,1,40,14,46,56,1,0,25,3,0,32,99,0,0,100,12,0,100,12,0,128,140,1,0,144,49,0,0,50,6,0,50,6,0,64,198,0,0,200,24,0,0,
25,3,0,25,3,0,32,99,0,0,100,12,0,128,140,1,128,140,1,0,85,75,249,103,255,72,79,191,195,178,218,63,237,127,38,161,164,211,249,156,108,137,112,92,78,174,96,9,101,185,130,194,220,10,233,194,194,43,150,204,
43,156,87,108,185,186,173,138,182,95,10,179,76,110,34,243,174,206,210,172,189,103,254,103,18,74,58,157,207,201,150,136,36,229,228,10,150,80,86,42,40,156,93,44,123,125,38,179,108,201,188,141,75,121,223,
157,85,108,185,186,173,138,182,95,10,179,76,110,34,147,133,53,6,0,172,23,107,172,153,5,28,12,0,96,141,1,128,140,1,0,144,49,0,0,50,6,0,64,198,0,64,198,0,0,200,24,0,0,25,3,0,32,99,0,32,99,0,64,245,81,221,
15,70,237,236,108,115,187,187,69,81,228,56,60,223,24,100,144,36,41,16,8,14,14,142,120,60,19,144,113,69,179,99,199,86,81,52,29,58,244,192,196,196,4,29,54,180,93,160,193,243,188,203,229,234,235,235,19,69,
203,169,83,103,224,84,87,40,141,141,14,135,195,118,240,224,65,143,199,3,13,131,60,82,169,20,53,140,3,7,14,56,157,212,80,26,96,141,25,187,189,193,225,176,211,187,154,245,251,151,136,201,201,233,242,214,
187,167,167,235,240,225,195,177,88,12,77,22,172,4,53,143,35,71,142,236,222,125,249,252,252,66,77,91,227,173,91,55,111,218,228,214,52,76,212,215,91,59,58,218,105,97,121,235,77,85,26,28,28,68,75,5,197,25,
24,24,32,35,84,211,214,216,229,106,33,209,210,41,205,235,157,213,204,111,119,119,87,115,115,19,169,136,222,105,121,185,234,45,8,134,96,48,136,102,10,138,19,8,4,168,169,212,180,140,85,233,230,249,207,195,
195,163,58,157,142,100,76,10,47,163,140,1,40,5,89,150,213,249,140,106,218,169,94,54,6,166,240,56,109,15,5,180,18,0,170,64,198,69,8,133,66,216,125,0,84,171,140,45,22,179,102,147,1,0,213,39,99,210,112,115,
115,83,40,20,246,249,22,176,251,0,168,74,25,119,119,111,72,38,83,103,207,226,98,15,0,213,41,227,173,91,55,147,53,30,30,30,193,184,11,0,170,82,198,164,225,250,122,43,217,97,184,211,0,84,165,140,161,97,
0,42,22,93,137,26,182,88,44,199,143,159,12,133,194,216,101,0,84,153,140,117,58,126,235,214,45,130,32,156,62,221,15,13,3,80,125,50,86,53,76,239,100,135,209,167,5,170,17,237,153,146,181,43,99,210,176,58,
210,99,247,238,75,150,45,224,241,140,151,235,142,197,120,60,46,138,34,238,142,0,197,161,70,66,77,101,221,255,204,98,93,92,149,60,106,122,126,126,161,167,167,7,205,20,20,199,237,118,175,251,155,141,87,
177,198,191,255,253,243,21,91,239,161,161,209,125,251,246,245,247,247,195,219,7,69,236,208,222,189,123,79,156,232,95,247,191,148,119,58,93,213,88,239,112,56,82,87,39,246,246,238,153,153,153,129,107,13,
10,67,226,246,246,246,253,251,247,251,253,193,209,81,207,250,255,189,187,118,245,86,111,237,187,186,58,220,238,13,162,104,169,133,123,74,65,233,200,178,28,12,134,6,6,134,199,198,198,107,225,247,86,247,
4,183,116,162,173,133,115,45,0,197,193,116,243,0,64,198,0,0,200,24,0,0,25,3,0,25,3,0,32,99,0,0,100,12,0,128,140,1,128,140,1,0,144,49,0,0,50,6,0,64,198,0,64,198,0,0,200,24,0,0,25,3,0,32,99,0,32,99,0,64,
213,82,254,217,63,210,211,239,176,172,246,79,251,159,73,40,233,116,62,39,91,34,28,151,147,43,88,66,89,174,160,48,183,66,186,176,240,138,37,243,10,231,21,91,174,110,171,162,237,151,194,44,147,155,200,188,
171,179,52,107,239,153,255,153,132,146,78,231,115,178,37,34,73,57,185,130,37,148,149,10,10,103,23,203,94,159,201,44,91,50,111,227,82,222,119,103,21,91,174,110,171,162,237,151,194,44,147,155,200,100,97,
141,1,0,235,197,26,107,102,1,7,3,0,88,99,0,32,99,0,0,100,12,0,128,140,1,0,144,49,0,144,49,0,0,50,6,0,64,198,0,0,200,24,0,200,24,0,0,25,3,0,32,99,0,0,100,12,64,205,161,171,234,218,119,118,182,185,221,221,
162,40,114,28,139,99,9,52,36,73,10,4,130,131,131,35,30,207,4,100,92,209,236,216,177,85,20,77,135,14,61,48,49,49,65,135,13,109,23,104,240,60,239,114,185,250,250,250,68,209,114,234,212,25,56,213,21,74,99,
163,195,225,176,29,60,120,208,227,241,64,195,32,143,84,42,69,13,227,192,129,3,78,39,53,148,6,88,99,198,229,106,177,90,173,245,245,86,53,27,10,133,125,62,223,228,228,116,121,235,221,211,211,117,248,240,
225,88,44,134,38,11,86,130,154,199,145,35,71,118,239,190,124,126,126,161,118,173,177,197,98,222,185,115,123,71,71,187,166,97,117,33,45,161,229,58,29,95,198,122,219,237,13,131,131,131,104,169,160,56,3,
3,3,14,135,189,166,173,113,115,115,19,137,214,239,95,242,249,22,188,222,89,205,56,183,182,182,210,114,122,247,120,198,203,85,111,65,48,4,131,65,52,83,80,156,64,32,64,77,165,166,101,60,60,60,170,106,56,
123,161,234,78,171,38,218,227,65,59,1,21,141,44,203,234,36,161,181,235,84,19,121,26,86,137,70,17,145,2,80,61,50,94,22,53,216,32,67,141,221,7,64,165,59,213,133,216,237,13,20,48,147,59,29,10,133,167,166,
166,176,251,0,168,14,25,147,116,55,109,114,107,89,50,194,30,207,120,217,47,56,1,0,254,72,107,76,144,41,182,88,44,204,249,190,46,0,64,21,200,216,231,91,120,230,153,223,157,43,173,227,91,91,91,201,175,238,
232,104,23,4,97,120,120,20,123,16,128,178,115,97,93,92,201,100,138,60,234,227,199,79,82,130,196,76,74,198,30,4,160,202,100,172,18,75,195,164,71,116,97,15,2,80,149,50,86,189,107,236,59,0,170,88,198,245,
245,86,213,157,14,133,194,216,131,0,148,157,98,93,92,123,246,92,230,245,206,146,255,172,13,168,102,210,195,48,41,42,102,210,93,95,184,193,8,84,56,218,131,218,107,87,198,76,250,70,8,122,239,238,238,202,
91,238,247,47,13,15,143,148,177,222,241,120,92,20,69,220,29,1,138,67,141,132,154,202,186,255,153,188,211,233,90,105,29,217,91,73,146,13,6,189,78,167,203,94,56,55,55,63,60,60,74,171,202,88,111,187,189,
33,28,14,205,204,204,160,165,130,34,108,223,190,221,102,179,175,251,49,14,197,172,49,249,204,30,207,120,25,239,70,44,194,208,208,232,190,125,251,250,251,251,225,216,131,149,16,4,97,239,222,189,39,78,244,
215,180,53,174,100,194,225,72,93,157,216,219,187,135,12,50,92,107,80,24,18,183,183,183,239,223,191,223,239,15,142,142,174,255,251,105,217,93,187,122,171,183,246,93,93,29,110,247,6,81,180,212,194,61,165,
160,116,100,89,14,6,67,3,3,195,99,99,227,181,240,123,171,123,130,91,58,209,214,194,185,22,128,226,96,186,121,0,32,99,0,0,100,12,0,128,140,1,128,140,1,0,144,49,0,0,50,6,0,64,198,0,64,198,0,0,200,24,0,0,
25,3,0,32,99,0,32,99,0,0,100,12,0,128,140,1,0,144,49,0,144,49,0,160,106,41,255,236,31,233,233,119,88,86,251,167,253,207,36,148,116,58,159,147,45,17,142,203,201,21,44,161,44,87,80,152,91,33,93,88,120,197,
146,121,133,243,138,45,87,183,85,209,246,75,97,150,201,77,100,222,213,89,154,181,247,204,255,76,66,73,167,243,57,217,18,145,164,156,92,193,18,202,74,5,133,179,139,101,175,207,100,150,45,153,183,113,41,
239,187,179,138,45,87,183,85,209,246,75,97,150,201,77,100,178,176,198,0,128,245,98,141,53,179,128,131,1,0,172,49,0,144,49,0,0,50,6,0,64,198,0,0,200,24,0,200,24,0,0,25,3,0,32,99,0,0,100,12,0,100,12,0,128,
140,1,0,144,49,0,0,50,6,160,230,208,85,111,213,59,59,219,220,238,110,81,20,57,142,197,129,4,26,146,36,5,2,193,193,193,17,143,103,2,50,174,104,118,236,216,42,138,166,67,135,30,152,152,152,160,195,134,182,
11,52,120,158,119,185,92,125,125,125,162,104,57,117,234,12,156,234,10,165,177,209,225,112,216,14,30,60,232,241,120,160,97,144,71,42,149,162,134,113,224,192,1,167,147,26,74,3,100,156,207,214,173,155,175,
184,162,119,231,206,237,229,173,116,79,79,215,225,195,135,99,177,24,154,44,88,9,106,30,71,142,28,233,238,238,130,140,115,112,185,90,234,235,173,149,80,105,187,189,97,112,112,16,45,21,20,103,96,96,192,
225,176,67,198,25,72,192,29,29,237,126,255,82,37,84,90,16,12,193,96,16,205,20,20,39,16,8,80,83,129,140,51,144,115,66,94,202,212,212,52,26,7,168,22,100,89,86,103,8,133,140,207,105,88,16,132,225,225,209,
100,50,137,198,1,64,245,201,184,185,185,137,94,94,239,108,133,120,212,0,128,11,147,49,25,97,10,137,67,161,48,153,98,236,44,0,170,82,198,155,54,185,233,253,236,89,116,11,3,80,157,50,118,185,90,44,22,179,
199,51,142,43,180,0,84,165,140,213,43,76,20,18,211,11,187,9,128,234,147,177,78,199,119,119,119,33,36,6,160,42,88,254,214,136,214,214,86,65,129,185,226,138,222,194,181,228,105,171,203,41,102,246,249,22,
176,19,1,168,220,216,24,0,80,197,214,216,227,25,167,215,178,118,120,231,206,237,228,108,31,63,126,18,251,14,0,88,99,0,46,46,218,83,218,33,227,74,36,30,143,139,162,136,102,10,138,67,141,132,154,10,100,
92,161,204,207,47,244,244,244,160,153,130,226,184,221,110,106,42,144,113,62,20,21,63,243,204,239,202,30,24,15,13,141,238,219,183,79,233,73,7,96,5,168,121,236,221,187,183,70,174,152,242,78,167,171,234,
42,29,14,71,234,234,196,222,222,61,51,51,51,184,241,24,20,134,196,237,237,237,251,247,239,247,251,131,163,163,158,154,248,201,187,118,245,86,105,213,187,186,58,220,238,13,162,104,169,145,123,74,65,137,
200,178,28,12,134,6,6,134,199,198,198,107,228,39,87,241,4,183,116,162,173,145,115,45,0,47,102,108,12,0,128,140,1,0,144,49,0,0,50,6,0,50,6,0,64,198,0,0,200,24,0,0,25,3,0,25,3,0,32,99,0,0,100,12,0,128,140,
1,128,140,1,0,144,49,0,0,50,6,0,64,198,0,64,198,0,128,10,162,204,179,127,164,167,223,97,89,237,159,246,63,147,80,210,233,124,78,182,68,56,46,39,87,176,132,178,92,65,97,110,133,116,97,225,21,75,230,21,
206,43,182,92,221,86,69,219,47,133,89,38,55,145,121,87,103,105,214,222,51,255,51,9,37,157,206,231,100,75,68,146,114,114,5,75,40,43,21,20,206,46,150,189,62,147,89,182,100,222,198,165,188,239,206,42,182,
92,221,86,69,219,47,133,89,38,55,145,201,194,26,3,0,214,139,53,214,204,2,142,4,0,176,198,0,64,198,0,0,200,24,0,0,25,3,0,32,99,0,32,99,0,0,100,12,0,128,140,1,0,144,49,0,144,49,0,0,50,6,0,64,198,0,0,200,
24,128,90,68,87,189,85,239,236,108,115,187,187,69,81,228,56,22,7,18,104,72,146,20,8,4,7,7,71,60,158,9,200,184,162,217,177,99,171,40,154,14,29,122,96,98,98,130,14,27,218,46,208,224,121,222,229,114,245,
245,245,137,162,229,212,169,51,112,170,43,148,198,70,135,195,97,59,120,240,160,199,227,129,134,65,30,169,84,138,26,198,129,3,7,156,78,106,40,13,181,110,141,93,174,150,142,142,246,101,87,29,63,126,50,20,
10,151,171,210,61,61,93,135,15,31,142,197,98,104,178,96,37,168,121,28,57,114,100,247,238,203,231,231,23,106,218,26,243,124,133,186,220,118,123,195,224,224,32,90,42,40,206,192,192,128,195,97,175,117,107,
108,52,10,244,126,246,236,160,207,87,89,231,51,65,48,4,131,65,52,83,80,156,64,32,64,77,5,177,241,57,231,4,13,2,84,35,178,44,171,147,132,214,180,140,5,65,177,198,201,100,10,13,2,128,106,149,177,78,199,
51,74,191,95,18,187,9,128,106,149,49,207,235,200,20,195,26,3,80,225,232,138,152,98,213,26,95,113,69,111,118,156,60,63,191,224,241,140,99,199,1,80,5,214,120,89,59,76,209,178,203,213,178,123,247,37,106,
216,12,0,168,104,107,76,28,61,122,204,106,181,102,95,109,34,13,55,55,55,145,134,55,109,114,31,63,126,18,187,15,128,74,143,141,201,26,231,93,49,158,156,156,62,117,234,12,45,183,88,204,245,245,86,236,62,
0,42,93,198,203,66,225,113,40,20,98,206,95,142,2,0,84,159,140,179,108,53,46,68,1,80,157,50,214,220,233,50,222,26,1,0,200,102,197,46,174,142,142,118,163,81,32,255,153,226,225,236,133,205,205,77,148,240,
122,103,49,72,19,84,56,218,131,218,107,87,198,76,250,70,34,122,21,222,171,232,247,47,13,15,143,150,177,210,241,120,92,20,69,220,29,1,138,67,141,132,154,74,45,252,82,222,233,116,45,187,98,105,105,73,150,
149,59,242,213,251,156,84,124,190,133,233,105,239,232,168,167,188,149,166,147,75,56,28,154,153,153,65,75,5,69,216,190,125,187,205,102,207,118,39,107,209,26,211,239,175,204,93,48,52,52,186,111,223,190,
254,254,126,56,246,96,37,4,65,216,187,119,239,137,19,253,53,109,141,43,153,112,56,82,87,39,246,246,238,33,131,12,215,26,20,134,196,237,237,237,251,247,239,247,251,131,101,247,28,215,232,39,239,218,213,
91,165,85,239,234,234,112,187,55,136,162,165,70,238,41,5,37,34,203,114,48,24,26,24,24,30,27,171,149,193,255,85,60,193,45,157,104,107,228,92,11,64,113,48,221,60,0,144,49,0,0,50,6,0,64,198,0,64,198,0,0,
200,24,0,0,25,3,0,32,99,0,32,99,0,0,100,12,0,128,140,1,0,144,49,0,144,49,0,0,50,6,0,64,198,0,0,200,24,0,200,24,0,80,181,148,121,246,143,244,244,59,44,171,253,211,254,103,18,74,58,157,207,201,150,8,199,
229,228,10,150,80,150,43,40,204,173,144,46,44,188,98,201,188,194,121,197,150,171,219,170,104,251,165,48,203,228,38,50,239,234,44,205,218,123,230,127,38,161,164,211,249,156,108,137,72,82,78,174,96,9,101,
165,130,194,217,197,178,215,103,50,203,150,204,219,184,148,247,221,89,197,150,171,219,170,104,251,165,48,203,228,38,50,89,88,99,0,192,122,177,198,154,89,192,145,0,0,214,24,0,200,24,0,0,25,3,0,32,99,0,
0,100,12,0,100,12,0,128,140,1,0,144,49,0,0,50,6,0,50,6,0,64,198,0,0,200,24,0,0,25,3,0,25,3,0,32,99,0,192,218,163,171,222,170,119,118,182,185,221,221,162,40,114,28,139,3,9,52,36,73,10,4,130,131,131,35,
30,207,4,100,92,209,236,216,177,85,20,77,135,14,61,48,49,49,65,135,13,109,23,104,240,60,239,114,185,250,250,250,68,209,114,234,212,25,56,213,21,74,99,163,195,225,176,29,60,120,208,227,241,64,195,32,143,
84,42,69,13,227,192,129,3,78,39,53,148,6,88,227,115,52,55,55,89,44,102,122,215,150,156,62,125,198,239,95,42,87,165,123,122,186,14,31,62,28,139,197,208,100,193,74,80,243,56,114,228,200,238,221,151,207,
207,47,192,26,51,91,183,110,238,238,238,202,214,176,234,183,148,177,210,118,123,195,224,224,32,90,42,40,206,192,192,128,195,97,135,53,86,52,92,95,111,77,38,83,94,239,236,212,212,20,37,212,229,130,32,148,
177,210,130,96,8,6,131,104,166,160,56,129,64,128,154,74,173,203,216,229,106,33,13,135,66,225,211,167,251,53,1,107,30,11,90,9,168,112,100,89,86,167,236,174,105,167,90,117,164,61,158,241,60,13,3,0,170,67,
198,100,135,201,115,38,83,92,198,174,44,0,192,159,228,84,91,44,102,122,39,13,147,152,59,59,219,237,246,115,29,247,180,132,236,51,201,27,251,14,128,74,183,198,60,175,40,92,167,227,119,238,220,174,105,88,
181,210,121,75,0,0,21,106,141,141,70,65,13,143,201,240,122,60,179,94,239,44,147,238,160,238,238,238,34,37,119,119,111,88,90,90,66,204,12,64,69,91,99,21,210,240,241,227,39,85,13,51,233,14,234,211,167,207,
208,66,178,210,118,187,29,187,15,128,42,144,177,207,231,91,105,97,121,47,29,3,0,86,151,113,52,138,43,195,0,84,185,140,213,1,30,22,139,165,112,149,106,135,83,169,36,118,31,0,21,45,99,242,156,147,201,148,
221,222,80,95,111,205,91,165,46,193,53,39,0,42,93,198,234,56,106,74,108,220,232,118,185,90,212,133,22,139,121,235,214,205,24,22,2,170,2,150,101,101,89,174,133,95,90,108,76,181,199,51,110,52,10,100,144,
59,58,218,233,149,237,111,159,61,91,206,27,140,226,241,184,40,138,184,59,2,20,135,26,9,53,149,154,182,198,42,36,215,188,49,91,147,147,211,199,143,159,44,239,173,17,243,243,11,61,61,61,104,166,160,56,110,
183,187,22,110,54,102,74,153,54,128,116,75,175,138,170,244,240,240,232,190,125,251,250,251,251,113,163,21,88,9,10,253,246,238,221,123,252,120,127,45,252,88,222,233,116,85,93,165,195,225,72,93,93,93,111,
239,229,51,51,51,112,173,65,97,72,220,222,222,190,127,255,126,191,63,56,58,234,169,137,159,188,107,87,111,149,86,189,171,171,195,237,222,32,138,150,26,185,167,20,148,136,44,203,193,96,104,96,96,120,108,
108,188,70,126,114,21,79,112,75,39,218,26,57,215,2,80,28,76,55,15,0,100,12,0,128,140,1,0,144,49,0,144,49,0,0,50,6,0,64,198,0,0,200,24,0,200,24,0,0,25,3,0,32,99,0,0,100,12,0,100,12,0,128,140,1,0,144,49,
0,0,50,6,0,50,6,0,84,45,101,158,253,35,61,253,14,203,106,255,180,255,153,132,146,78,231,115,178,37,194,113,57,185,130,37,148,229,10,10,115,43,164,11,11,175,88,50,175,112,94,177,229,234,182,42,218,126,
41,204,50,185,137,204,187,58,75,179,246,158,249,159,73,40,233,116,62,39,91,34,146,148,147,43,88,66,89,169,160,112,118,177,236,245,153,204,178,37,243,54,46,229,125,119,86,177,229,234,182,42,218,126,41,
204,50,185,137,76,22,214,24,0,176,94,172,177,102,22,112,36,0,128,53,6,0,50,6,0,64,198,0,0,200,24,0,0,25,3,0,25,3,0,32,99,0,0,100,12,0,248,163,168,226,71,177,117,118,182,185,221,221,162,40,114,28,158,168,
8,50,72,146,20,8,4,7,7,71,60,158,9,200,184,162,217,177,99,171,40,154,14,29,122,96,98,98,130,14,27,218,46,208,224,121,222,229,114,245,245,245,137,162,229,212,169,51,112,170,43,148,198,70,135,195,97,59,
120,240,160,199,227,129,134,65,30,169,84,138,26,198,129,3,7,156,78,106,40,13,53,109,141,247,236,185,76,167,227,139,124,114,114,114,218,227,41,207,99,160,123,122,186,14,31,62,28,139,197,208,100,193,74,
80,243,56,114,228,200,238,221,151,207,207,47,192,26,23,57,231,37,203,85,105,187,189,97,112,112,16,45,21,20,103,96,96,192,225,176,215,180,53,254,253,239,159,95,105,213,206,157,219,45,22,115,25,79,114,130,
96,8,6,131,104,166,160,56,129,64,128,154,10,98,227,229,45,33,105,216,231,91,128,79,11,42,28,89,150,213,25,20,32,227,124,92,174,214,116,96,60,133,86,2,64,85,202,88,53,197,126,255,82,40,20,198,190,3,160,
42,101,172,154,98,175,119,22,59,14,128,170,148,49,217,97,122,145,29,166,192,24,59,14,128,170,148,177,106,138,125,62,31,246,26,0,85,41,99,178,195,20,24,199,98,177,201,201,105,236,53,0,170,82,198,136,138,
1,168,110,25,11,130,64,166,56,153,76,65,198,0,84,171,140,155,155,155,84,83,76,74,198,46,3,160,250,100,172,211,241,154,140,177,191,0,168,74,25,183,182,182,146,146,49,250,18,84,29,218,83,172,106,93,198,
154,41,174,168,209,151,241,120,92,20,69,52,83,80,28,106,36,212,84,32,99,37,42,38,37,135,66,225,138,26,125,57,63,191,208,211,211,131,102,10,138,227,118,187,107,225,102,99,102,213,73,124,38,39,167,43,240,
66,241,208,208,232,190,125,251,250,251,251,225,231,131,149,16,4,97,239,222,189,39,78,244,215,194,143,229,157,78,87,213,85,58,28,142,212,213,137,189,189,123,102,102,102,112,227,49,40,12,137,219,219,219,
247,239,223,239,247,7,71,71,61,53,241,147,119,237,234,173,210,170,119,117,117,184,221,27,68,209,82,35,247,148,130,18,145,101,57,24,12,13,12,12,143,141,141,215,200,79,174,226,9,110,233,68,91,35,231,90,
0,138,131,233,230,1,128,140,1,0,144,49,0,0,50,6,0,50,6,0,64,198,0,0,200,24,0,0,25,3,0,25,3,0,32,99,0,0,100,12,0,128,140,1,128,140,1,0,144,49,0,0,50,6,0,64,198,0,64,198,0,0,200,24,0,0,25,3,0,32,99,0,106,
149,50,79,169,151,158,211,146,101,181,127,218,255,76,66,73,167,243,57,217,18,225,184,156,92,193,18,202,114,5,133,185,21,210,133,133,87,44,153,87,56,175,216,114,117,91,21,109,191,20,102,153,220,68,230,
93,125,244,137,246,158,249,159,73,40,233,116,62,39,91,34,146,148,147,43,88,66,89,169,160,112,118,177,236,245,153,204,178,37,243,54,46,229,125,119,86,177,229,234,182,42,218,126,41,204,50,185,137,76,22,
214,24,0,176,94,172,177,102,22,112,36,0,128,53,6,0,50,6,0,64,198,0,0,200,24,0,0,25,3,0,25,3,0,32,99,0,0,100,12,0,128,140,1,128,140,1,0,144,49,0,160,28,232,170,183,234,157,157,109,110,119,183,40,138,28,
199,226,64,2,13,73,146,2,129,224,224,224,136,199,51,1,25,87,52,59,118,108,21,69,211,161,67,15,76,76,76,208,97,67,219,5,26,60,207,187,92,174,190,190,62,81,180,156,58,117,6,78,117,133,210,216,232,112,56,
108,7,15,30,244,120,60,208,48,200,35,149,74,81,195,56,112,224,128,211,73,13,165,1,214,152,177,88,204,205,205,77,244,82,179,201,100,202,235,157,157,154,154,162,68,25,43,221,211,211,117,248,240,225,88,44,
134,38,11,86,130,154,199,145,35,71,118,239,190,124,126,126,161,166,173,49,169,119,231,206,237,154,134,21,209,235,200,93,105,161,133,130,32,148,177,210,118,123,195,224,224,32,90,42,40,206,192,192,128,195,
97,175,117,107,220,209,209,78,239,62,223,194,240,240,136,106,126,73,63,46,87,43,153,232,238,238,174,211,167,203,22,117,8,130,33,24,12,162,153,130,226,4,2,1,106,42,53,29,27,215,215,91,201,246,146,103,114,
246,236,160,230,66,171,146,78,59,219,22,180,18,80,225,200,178,172,78,75,86,211,78,53,17,141,230,199,159,229,141,138,1,0,23,32,99,191,127,137,76,49,217,100,122,229,5,204,244,238,245,206,98,223,1,80,5,214,
120,108,108,156,222,183,110,221,76,145,176,32,8,20,18,83,218,229,106,33,133,123,60,227,216,119,0,84,8,197,186,184,40,18,166,192,184,179,179,61,251,154,19,9,120,114,114,26,59,14,128,170,137,141,11,131,
97,171,213,90,222,171,77,0,128,11,144,113,71,71,251,166,77,110,18,45,89,224,103,158,249,29,189,135,66,97,10,149,119,238,220,78,14,54,246,29,0,149,46,227,244,37,226,22,210,237,209,163,199,84,47,154,222,
143,31,63,73,98,214,233,248,173,91,183,208,59,118,31,0,21,45,99,173,71,58,207,169,38,49,83,204,76,26,182,219,237,216,125,0,84,180,140,117,58,165,247,43,20,10,21,174,82,47,38,35,66,6,160,210,101,156,76,
38,153,244,88,174,194,85,234,66,220,153,0,64,165,203,120,105,105,137,73,247,114,169,35,171,85,212,75,199,244,78,158,182,207,231,195,238,3,149,140,246,104,216,117,207,138,215,141,41,6,182,88,44,106,71,
23,189,242,214,106,55,75,148,133,120,60,46,138,34,238,142,0,197,161,70,66,77,165,22,126,41,239,116,186,86,90,231,243,45,36,18,9,142,227,140,70,33,91,222,131,131,195,229,149,16,157,92,194,225,208,204,204,
12,90,42,40,194,246,237,219,109,54,123,45,140,86,90,101,218,0,175,119,182,2,135,79,15,13,141,238,219,183,175,191,191,31,241,57,88,9,65,16,246,238,221,123,226,68,127,173,91,227,138,37,28,142,212,213,137,
189,189,123,200,32,195,181,6,133,33,113,123,123,251,254,253,251,253,254,224,232,168,167,38,126,242,174,93,189,85,90,245,174,174,14,183,123,131,40,90,106,228,158,82,80,34,178,44,7,131,161,129,129,97,245,
222,158,90,160,138,39,184,165,19,109,141,156,107,1,40,14,166,155,7,0,50,6,0,64,198,0,0,200,24,0,200,24,0,0,25,3,0,32,99,0,0,100,12,0,100,12,0,128,140,1,0,144,49,0,0,50,6,0,50,6,0,64,198,0,0,200,24,0,0,
25,3,0,25,3,0,32,99,0,0,100,12,0,248,35,41,243,92,92,233,201,240,88,86,251,167,253,207,36,148,116,58,159,147,45,17,142,203,201,21,44,161,44,87,80,152,91,33,93,88,120,197,146,121,133,243,138,45,87,183,
85,209,246,75,97,150,201,77,100,222,213,103,38,104,239,153,255,153,132,146,78,231,115,178,37,34,73,57,185,130,37,148,149,10,10,103,23,203,94,159,201,44,91,50,111,227,82,222,119,103,21,91,174,110,171,162,
237,151,194,44,147,155,200,100,97,141,1,0,235,197,26,107,102,1,71,2,0,88,99,0,32,99,0,0,100,12,0,128,140,1,0,144,49,0,144,49,0,0,50,6,0,64,198,0,0,200,24,0,200,24,0,0,25,3,0,32,99,0,0,100,12,0,100,12,
0,168,66,116,216,5,160,44,24,12,250,171,174,186,162,190,190,110,221,255,82,191,63,240,228,147,207,196,227,9,200,24,172,55,220,238,238,129,129,51,143,60,242,200,186,255,165,125,125,125,244,99,79,157,58,
3,167,26,172,55,90,90,154,159,127,254,249,90,248,165,244,51,233,199,34,54,6,235,16,147,201,52,59,59,91,11,191,212,235,245,138,162,5,177,241,122,227,208,161,239,223,126,251,157,199,142,189,144,189,240,
166,155,110,120,235,91,223,172,166,105,213,87,190,242,245,153,25,111,241,85,180,29,237,227,63,255,249,227,95,253,234,215,181,236,174,93,151,220,126,251,71,110,190,249,150,188,37,90,150,182,112,219,109,
239,164,45,208,6,169,50,203,126,138,190,247,166,155,110,84,155,32,149,167,239,189,249,230,27,168,76,118,181,105,249,207,127,254,139,75,47,189,68,219,136,90,49,170,12,85,169,200,78,208,235,117,201,100,
178,22,14,119,42,149,226,56,14,50,94,255,144,74,175,186,234,74,85,219,36,155,247,189,239,221,183,223,254,207,239,127,255,135,130,193,80,145,85,244,65,117,57,73,139,150,207,204,204,252,232,71,15,21,255,
162,108,97,107,210,189,238,186,87,21,74,142,54,232,118,247,220,115,207,125,234,233,134,36,77,219,87,181,234,116,54,127,229,43,247,107,103,34,90,133,35,88,94,224,84,151,31,18,39,41,129,108,157,170,10,210,
39,41,196,98,177,92,123,237,171,138,172,202,222,2,173,125,236,177,199,201,36,254,17,223,78,2,126,203,91,222,156,231,245,145,182,211,231,142,59,52,151,129,78,16,154,119,0,32,227,11,227,250,235,94,241,183,
127,125,203,223,252,213,45,111,188,241,250,245,122,12,72,51,164,207,60,31,251,201,39,159,118,58,157,69,86,21,110,71,181,207,23,10,109,141,204,44,57,207,217,11,233,140,64,95,250,167,235,150,140,182,22,
14,128,218,117,170,205,102,147,94,167,84,82,180,152,215,177,53,14,133,150,81,96,75,75,243,208,208,138,171,242,78,4,100,159,191,243,157,239,150,18,150,23,198,210,95,253,234,55,238,190,251,211,164,103,173,
24,25,252,233,233,252,200,60,59,138,46,60,19,101,7,234,0,50,206,33,22,143,171,115,88,71,99,177,245,122,12,200,138,146,108,10,151,147,144,138,172,82,19,106,175,21,21,251,209,143,30,44,222,165,180,82,108,
76,12,14,14,145,207,124,235,173,111,255,246,183,191,167,46,161,115,135,219,221,173,185,211,244,34,49,23,113,218,243,20,174,73,250,182,219,222,9,141,193,169,78,79,72,127,238,181,110,143,129,218,119,149,
215,3,76,161,41,249,186,69,86,157,151,241,157,164,204,183,189,237,111,87,237,220,42,14,157,5,68,81,212,132,74,194,166,47,117,58,155,161,16,200,248,197,80,241,249,215,58,38,109,75,31,186,237,182,191,83,
229,74,186,37,27,75,246,240,177,199,30,47,178,234,69,175,195,183,191,253,93,173,207,153,28,108,82,242,251,222,247,238,188,51,8,98,99,56,213,127,164,142,179,159,39,182,110,200,190,132,75,158,39,73,40,24,
12,106,11,211,62,234,29,106,151,85,145,85,165,71,194,234,85,223,188,37,121,30,47,73,151,94,100,234,213,236,39,62,113,231,91,222,242,230,236,122,82,77,32,152,202,132,221,181,171,183,146,235,215,247,154,
87,182,181,181,80,194,231,91,124,224,199,63,195,1,91,55,244,245,93,123,207,61,119,215,194,8,16,158,231,63,240,129,15,252,244,167,143,193,169,102,36,6,143,107,91,87,68,34,145,166,166,166,90,248,165,205,
205,205,225,112,164,166,99,227,100,50,113,174,139,75,130,140,215,21,211,211,222,221,187,119,215,194,47,165,159,57,51,115,113,71,143,87,180,83,221,220,228,120,249,85,47,105,104,168,103,210,3,83,151,150,
130,12,203,164,146,169,88,60,30,12,134,23,22,253,115,243,62,175,119,30,207,85,173,70,12,6,253,213,87,95,97,181,174,255,251,141,151,150,2,79,62,249,108,44,22,175,45,25,59,155,27,187,187,59,59,219,91,75,
185,47,36,24,10,143,141,77,12,12,142,204,205,47,64,27,160,54,169,44,25,119,118,184,118,108,223,252,199,221,156,57,50,226,249,195,209,147,100,162,113,80,65,173,81,41,23,156,28,118,91,239,229,151,184,90,
211,67,133,37,169,176,64,60,145,240,140,79,197,99,113,73,150,121,158,19,4,193,98,54,89,235,68,163,81,80,11,108,232,108,163,215,243,71,79,252,225,216,41,28,87,0,25,175,53,151,236,220,122,249,101,59,21,
253,230,46,15,133,194,242,249,209,212,139,254,192,111,142,60,155,247,65,158,231,27,108,86,151,171,165,163,195,213,232,104,96,148,49,253,59,154,157,77,191,252,213,147,53,114,47,43,0,138,16,156,78,87,57,
191,158,231,174,121,197,85,91,54,247,228,45,79,38,83,127,56,118,226,215,191,121,134,172,116,131,77,233,226,138,68,99,103,206,14,231,21,147,101,57,28,137,206,120,231,206,158,29,158,154,246,26,244,58,91,
125,93,157,104,233,217,208,65,62,54,109,4,7,24,192,26,95,92,76,38,227,117,175,222,107,181,138,146,156,99,134,199,199,167,158,121,238,168,122,169,77,48,26,212,181,50,35,21,223,154,215,59,71,47,163,32,188,
228,37,187,54,116,181,191,174,239,154,7,31,254,69,34,145,192,49,6,235,30,174,140,26,126,221,107,95,73,193,109,102,132,71,250,245,135,163,39,127,245,235,167,181,203,229,178,36,95,208,184,106,107,189,24,
143,37,164,148,100,50,26,175,191,118,31,14,48,128,53,190,104,223,170,227,95,123,221,159,145,229,204,187,228,251,212,51,255,51,56,52,150,235,54,107,99,170,87,217,166,195,209,112,213,149,151,215,159,191,
14,73,159,170,175,175,187,234,202,61,79,62,253,123,28,102,0,107,252,226,115,237,53,87,155,76,164,97,41,251,69,122,203,211,240,57,115,156,126,49,178,84,92,195,215,95,187,215,90,103,201,219,102,247,134,
54,117,72,54,0,144,241,139,201,75,95,114,105,67,131,45,115,31,113,250,245,194,137,51,67,195,158,194,194,114,214,29,199,43,218,118,158,191,230,21,47,203,219,160,246,186,250,101,123,168,0,142,52,128,140,
95,52,218,92,78,119,119,71,158,205,244,206,206,29,123,225,244,178,229,101,133,243,6,121,5,54,109,218,160,227,185,188,109,106,47,158,99,169,0,142,52,128,140,95,164,47,227,184,171,174,188,76,46,224,55,71,
158,91,233,35,153,66,43,111,214,213,210,44,23,165,173,213,137,35,13,214,49,107,218,197,117,249,238,237,164,228,60,73,254,225,232,169,162,79,169,146,87,157,54,128,215,241,197,239,142,48,24,244,56,210,0,
50,126,17,48,155,77,61,27,58,228,220,251,13,163,209,88,127,193,160,142,28,17,75,140,250,17,121,229,27,21,131,129,144,173,232,141,50,145,72,20,71,26,192,169,126,17,216,117,201,22,73,85,101,214,235,216,
137,254,226,159,146,207,151,44,50,167,222,224,136,167,112,203,217,175,81,207,36,142,52,128,140,255,84,76,38,99,155,203,153,23,178,198,98,241,145,209,137,85,100,44,175,30,29,207,204,204,121,103,231,87,
10,140,131,193,240,178,125,224,0,64,198,23,134,187,167,179,176,23,185,20,117,41,86,88,45,95,116,248,199,147,79,253,79,40,20,41,252,138,104,36,246,235,195,207,226,48,3,200,248,69,160,171,195,85,104,39,
71,70,199,75,144,113,41,125,213,202,173,20,143,255,234,169,201,41,111,118,249,137,201,153,95,252,242,73,4,198,96,221,179,22,93,92,77,141,118,189,158,207,187,240,27,8,132,200,126,150,240,233,243,87,140,
229,85,110,141,72,36,18,79,63,251,135,6,155,149,94,164,97,223,194,146,127,41,128,3,188,150,208,33,136,197,162,169,100,130,227,88,158,254,88,246,197,218,178,36,51,156,156,218,46,203,6,89,90,179,27,80,89,
229,197,198,25,54,196,177,126,142,11,232,116,9,78,103,228,245,122,142,171,69,25,187,90,155,10,109,41,89,206,82,62,43,95,224,60,213,11,139,75,244,130,162,214,146,80,40,152,136,69,55,108,232,220,179,231,
242,237,59,182,187,123,220,142,198,70,147,217,148,255,80,95,57,173,12,230,252,93,46,133,26,151,151,91,152,38,197,48,95,252,236,103,255,236,91,7,174,174,111,246,243,165,157,29,10,183,182,242,246,87,220,
66,250,45,198,50,33,134,157,231,152,33,142,61,198,179,207,9,6,191,222,104,211,11,181,102,141,27,10,69,56,91,218,212,89,154,59,141,89,243,42,16,159,111,214,213,226,124,235,255,254,155,235,94,115,221,174,
75,47,189,184,173,168,169,121,50,153,240,177,76,169,39,105,246,66,20,190,236,42,246,92,142,147,25,35,35,111,76,202,187,25,102,63,195,142,198,163,79,233,98,15,26,244,35,70,147,93,111,172,9,25,155,77,70,
66,202,189,234,75,202,92,44,205,102,42,67,49,211,159,149,48,193,109,37,225,247,47,52,55,54,220,115,247,103,254,226,150,91,214,230,27,35,145,136,61,109,150,255,248,185,32,216,18,20,190,220,170,20,203,36,
168,2,44,59,159,206,214,73,210,91,162,204,13,9,233,225,120,226,223,76,49,70,176,152,248,50,207,162,115,209,189,124,155,173,46,61,199,116,206,107,41,16,40,113,106,142,243,83,84,75,204,106,211,6,128,181,
129,78,172,51,83,227,183,221,250,246,103,127,247,220,154,105,184,66,72,71,203,76,144,101,207,242,236,146,204,188,53,150,250,207,64,244,146,224,226,124,162,204,221,168,23,253,44,34,138,150,194,1,88,75,
75,165,62,80,91,189,110,196,20,29,197,181,198,152,140,130,222,160,87,38,205,174,61,226,241,24,207,166,30,249,217,79,46,223,179,167,150,207,101,92,58,96,62,205,178,45,41,233,139,33,233,243,82,224,160,89,
114,10,230,117,43,99,115,250,190,226,188,133,23,242,44,12,89,62,55,137,79,69,200,88,167,227,175,126,217,238,241,137,153,26,148,113,52,26,118,57,27,127,250,232,207,204,230,114,180,87,182,226,118,8,207,
48,211,28,27,148,153,255,63,156,180,201,161,251,25,217,41,88,214,167,140,211,147,105,229,43,48,18,45,245,153,227,234,56,14,53,81,9,71,174,185,201,206,235,248,165,64,168,214,52,28,143,199,219,90,155,127,
249,196,175,16,86,228,41,57,196,50,131,28,123,107,52,25,97,194,255,206,241,141,229,232,244,186,232,177,177,94,167,43,28,248,17,139,151,252,32,12,109,236,71,133,60,225,133,101,106,243,89,51,172,28,255,
249,47,30,43,103,13,42,117,175,171,14,246,16,203,254,99,52,249,202,80,48,156,74,174,67,25,235,120,174,112,74,142,11,152,122,54,251,131,21,64,122,138,191,154,147,241,196,248,200,67,15,63,172,211,233,24,
176,130,138,34,44,51,199,48,31,140,38,141,225,192,58,148,177,226,15,23,146,42,181,219,89,113,170,85,42,67,60,84,15,41,253,87,59,109,52,24,92,250,216,63,127,100,227,166,141,144,107,113,33,205,113,108,99,
74,254,199,88,98,54,22,94,111,177,49,179,220,0,172,210,53,153,25,254,177,218,71,210,79,132,49,240,28,71,50,139,198,226,169,212,133,41,205,40,24,244,122,29,41,148,226,118,105,101,149,38,147,73,170,73,34,
117,97,23,47,117,58,222,104,20,210,99,21,151,159,32,129,227,88,147,201,72,149,79,36,147,145,72,172,162,26,168,205,106,126,231,123,222,13,161,150,18,39,143,112,236,245,9,233,167,145,240,144,193,196,177,
236,250,145,49,73,130,218,104,126,160,85,250,15,44,97,48,102,171,211,209,218,218,100,171,23,179,23,46,250,131,83,211,115,244,42,44,127,201,142,141,164,168,211,103,70,213,108,103,187,179,179,163,37,123,
134,16,239,236,194,152,103,90,237,199,218,181,115,83,157,104,202,58,89,40,51,141,108,223,210,157,218,152,163,228,63,188,112,54,20,138,88,173,22,247,134,182,241,201,217,217,185,115,99,212,12,122,221,214,
205,27,26,27,109,218,150,135,70,38,194,225,204,101,70,103,147,189,163,221,73,31,204,62,115,141,121,102,134,71,38,42,193,1,241,251,23,62,119,247,103,42,35,58,87,90,77,108,110,34,206,24,140,174,54,41,153,
80,150,112,92,120,106,84,111,180,74,81,101,151,234,27,26,162,11,51,5,234,210,9,174,14,57,149,100,121,62,50,57,194,179,130,208,234,162,143,179,58,125,106,201,31,11,250,140,13,78,206,104,148,233,212,172,
108,144,143,76,141,112,140,206,212,218,17,154,26,86,18,174,142,208,36,37,206,127,41,85,68,167,75,5,2,177,192,188,209,222,194,27,77,241,89,111,44,17,162,186,25,235,28,114,93,29,23,79,220,152,144,110,79,
68,27,12,166,245,35,227,100,42,69,118,178,32,96,230,47,68,197,242,185,32,185,128,186,58,51,41,202,108,86,250,6,35,145,104,32,24,73,41,95,199,147,240,234,173,22,122,145,68,79,246,15,7,2,57,78,78,163,67,
121,154,12,201,152,204,111,239,101,219,140,70,3,109,122,126,222,31,79,36,200,108,218,234,235,154,26,109,244,58,115,118,108,98,106,54,29,1,72,217,141,137,151,185,84,222,194,243,103,25,50,233,54,91,29,157,
65,84,25,83,250,178,93,155,41,49,55,191,152,76,166,28,246,250,115,91,30,24,155,154,158,111,176,213,109,219,178,129,234,64,142,195,228,212,108,32,24,38,95,192,108,18,154,155,236,157,29,78,42,246,187,231,
79,149,253,249,53,245,162,249,230,255,181,255,69,223,108,244,232,177,224,143,31,110,252,248,71,164,80,104,230,189,31,104,186,253,163,186,214,85,230,33,38,29,210,30,111,250,203,183,179,39,78,6,207,246,
235,140,102,106,28,137,133,133,150,155,255,34,49,167,156,172,73,210,145,225,145,182,55,188,238,124,127,152,172,154,139,248,244,204,210,51,79,115,130,41,177,48,223,242,166,55,199,38,167,2,199,254,160,51,
90,82,161,37,161,171,203,113,217,13,243,15,253,68,138,68,89,131,158,101,184,152,119,186,249,134,253,114,50,57,255,219,35,206,155,222,148,10,6,125,207,62,211,178,255,150,200,208,112,176,255,164,161,222,
78,106,79,133,130,134,214,214,198,27,222,224,127,234,233,208,216,136,217,213,214,249,215,127,73,194,158,250,247,3,114,56,52,165,23,94,146,146,58,99,145,192,122,146,113,34,158,208,235,242,69,75,109,247,
130,226,106,102,185,193,152,164,138,157,219,149,135,63,145,6,198,198,103,242,124,81,179,201,72,86,174,197,105,191,252,210,45,47,156,24,244,45,44,101,111,147,148,70,103,222,171,174,184,132,178,39,78,13,
145,145,204,254,108,115,83,3,9,108,163,187,61,158,72,30,63,57,152,189,202,222,96,189,100,135,251,116,255,200,188,111,153,39,176,210,33,166,141,171,79,129,35,149,238,218,185,113,198,59,223,127,118,76,243,
240,187,58,90,54,116,181,118,119,185,102,188,62,170,60,169,244,216,241,129,188,77,13,14,79,168,197,118,108,237,62,122,124,160,140,26,78,36,226,55,221,248,58,246,34,56,135,82,32,144,24,80,126,26,89,72,
97,203,102,86,48,148,18,95,145,193,237,250,218,151,236,47,28,255,109,239,158,58,163,41,229,15,112,70,97,231,3,223,63,253,182,191,109,124,211,126,57,145,24,191,255,203,219,254,227,155,121,159,35,109,31,
233,233,54,154,27,82,145,240,142,255,250,207,249,159,253,247,115,125,215,215,153,196,152,127,190,225,85,175,222,254,237,111,157,250,171,183,143,253,199,55,235,90,55,196,125,179,156,201,116,201,131,63,
244,253,247,99,67,143,60,184,247,192,215,67,199,142,15,239,189,250,229,95,251,146,28,79,60,209,218,162,51,152,73,237,113,255,156,253,218,87,109,251,206,183,158,118,111,147,147,137,203,127,251,132,208,
222,174,156,181,255,108,239,243,55,222,192,56,90,219,88,238,138,68,234,39,82,210,200,173,81,167,224,69,239,226,138,197,19,133,23,156,4,225,2,230,184,211,174,56,101,47,180,88,76,59,182,117,211,226,19,167,
134,73,39,133,241,100,56,18,237,63,59,122,242,244,8,149,33,193,152,76,66,182,216,40,10,125,201,229,219,18,137,228,111,159,62,150,167,97,213,245,125,254,232,25,250,224,182,45,93,121,141,88,117,170,11,253,
139,243,85,85,106,27,12,69,56,142,35,181,147,111,76,21,200,142,210,71,61,211,253,103,70,143,159,26,162,179,210,208,200,36,125,251,178,167,3,42,70,191,168,62,55,76,40,67,231,86,96,233,21,215,92,115,81,
28,100,131,129,179,41,129,6,107,52,218,223,251,46,222,110,95,253,35,228,3,83,149,190,246,77,241,178,221,70,157,73,10,69,19,49,127,195,181,175,166,85,211,223,251,30,167,215,243,162,24,60,249,194,240,71,
111,239,127,207,123,252,79,61,67,170,30,124,255,7,135,62,252,81,90,98,16,109,137,240,146,184,77,57,107,155,55,111,210,51,172,28,141,211,113,77,46,46,210,146,238,79,126,156,87,206,44,75,145,88,104,195,
135,63,72,75,66,199,79,210,1,78,204,206,81,1,74,4,126,255,188,161,197,217,242,218,27,67,139,51,116,222,33,163,45,197,19,212,30,163,35,35,61,239,255,0,105,248,248,155,110,241,220,251,5,203,142,29,130,185,
158,73,73,212,22,119,164,228,68,114,237,158,31,118,209,101,172,246,24,229,97,50,150,122,147,87,246,167,178,151,147,134,105,9,105,152,252,213,34,31,39,231,246,84,255,8,149,164,242,89,10,143,153,205,130,
193,160,123,250,185,227,43,121,173,20,24,83,92,77,31,116,54,55,228,73,85,42,218,77,77,107,73,234,151,236,232,33,123,59,60,186,204,28,96,211,94,223,226,98,128,138,121,198,103,138,213,124,126,65,42,119,
127,56,197,8,151,174,112,223,146,252,167,61,119,86,223,217,121,193,215,237,100,153,76,219,204,15,14,145,243,108,189,226,202,68,208,71,53,104,186,233,198,132,111,33,152,140,80,28,101,104,116,132,189,83,
3,119,124,226,228,125,247,45,252,226,151,201,64,160,255,158,207,158,185,235,142,233,255,60,72,206,112,146,73,217,94,177,151,54,99,114,247,212,109,217,149,88,242,169,81,174,242,51,59,59,218,255,250,239,
23,130,62,107,83,91,215,135,62,144,254,170,244,192,193,84,74,189,36,145,92,80,218,216,166,47,126,158,212,66,110,182,90,25,41,30,167,40,187,233,150,63,159,123,232,39,103,126,240,95,103,254,233,221,39,110,
121,139,161,201,201,233,248,32,203,180,75,178,113,13,47,32,95,116,163,31,9,71,11,123,167,44,102,99,233,7,175,48,54,110,105,182,147,163,78,54,115,89,83,86,160,228,69,114,191,29,118,43,69,155,148,78,71,
230,202,36,187,255,115,244,76,241,187,166,38,38,103,201,187,166,207,78,207,248,138,119,188,231,57,14,91,54,117,208,89,128,124,132,63,169,79,33,145,42,251,56,147,230,230,166,230,230,230,156,31,152,72,132,
30,253,121,244,249,163,114,34,38,45,5,44,175,190,70,124,195,235,21,7,103,110,46,244,248,19,214,63,191,153,201,186,199,120,233,255,254,208,188,247,229,231,130,222,84,106,246,83,119,38,199,39,200,159,209,
53,59,101,41,201,154,148,208,81,142,199,3,63,126,72,188,254,53,156,58,183,169,44,207,126,234,211,73,143,71,217,142,36,139,215,95,87,183,255,166,243,230,152,33,207,123,233,169,167,104,183,52,190,241,13,
179,191,253,21,153,208,134,87,95,179,248,196,175,147,105,91,77,186,162,37,166,70,23,51,55,169,119,216,201,108,90,12,34,57,201,156,32,72,9,101,184,81,243,155,111,9,157,56,169,179,55,52,238,191,113,241,
211,71,169,176,206,90,23,29,25,149,18,137,45,95,255,114,255,183,190,214,253,169,79,40,103,249,129,1,161,205,165,245,205,40,39,29,71,67,248,116,191,121,235,150,158,247,125,232,236,61,119,9,154,241,75,139,
217,208,210,66,173,89,176,57,67,71,143,233,200,197,224,249,168,36,219,101,198,158,74,173,217,21,228,139,110,141,131,225,72,161,83,109,52,26,12,165,133,199,114,214,56,46,141,246,118,101,126,249,225,145,
82,231,187,28,26,153,160,242,29,109,231,90,164,78,199,71,163,241,85,175,235,144,209,166,79,137,22,83,161,86,153,213,148,124,242,244,232,159,184,223,100,166,252,195,197,90,90,242,167,233,79,121,189,209,
227,39,76,87,93,217,240,255,221,106,125,243,45,190,251,190,24,250,249,47,148,147,206,236,220,210,119,255,139,201,117,31,150,190,247,95,201,9,229,24,37,189,179,99,215,189,46,53,239,171,255,171,183,217,
223,245,143,166,43,95,26,59,221,159,74,247,75,201,177,24,21,75,249,149,211,177,180,232,31,235,187,49,53,61,93,255,182,183,82,49,203,171,95,233,187,255,75,115,159,252,180,182,71,168,177,70,19,161,165,39,
159,110,188,225,117,228,68,137,93,155,12,205,77,115,15,62,204,49,171,60,170,47,181,20,48,89,27,109,47,191,106,228,246,59,150,158,122,166,229,109,255,91,139,145,56,139,249,204,173,255,64,154,223,115,207,
125,174,255,243,183,253,127,253,247,193,231,143,234,237,13,218,185,131,16,58,59,167,14,28,156,250,183,111,186,239,254,180,209,96,73,40,55,219,41,157,228,228,55,207,124,235,59,214,151,246,118,221,252,23,
129,197,25,157,173,65,57,251,200,50,213,205,34,203,182,212,218,117,79,94,124,25,7,35,203,62,147,37,251,18,75,81,99,124,254,35,231,111,84,164,184,90,175,227,66,161,72,162,228,94,220,120,60,25,137,68,5,
65,167,206,71,145,190,133,185,164,207,198,98,177,252,25,44,212,135,209,20,115,30,36,138,108,83,127,242,33,148,164,148,44,151,217,169,174,171,203,159,253,91,231,114,53,126,232,3,100,132,117,173,173,166,
43,94,90,255,151,111,13,31,249,173,26,235,234,200,130,229,246,35,80,97,214,164,184,93,115,31,249,152,113,207,101,45,255,122,159,249,229,87,11,219,183,137,175,123,109,203,23,62,207,169,247,87,112,156,82,
76,175,244,149,120,63,248,17,195,70,119,203,151,255,213,188,87,41,102,253,139,55,117,253,250,23,193,71,126,22,121,236,23,153,8,153,182,246,224,67,230,205,155,201,8,88,175,190,138,150,44,60,250,216,170,
253,99,137,168,223,182,79,121,74,238,236,3,135,22,30,255,149,121,203,102,83,93,99,42,125,184,12,77,77,190,95,62,54,118,215,221,237,255,244,174,184,119,118,232,192,215,201,235,150,115,7,29,144,100,245,
54,219,201,219,110,165,244,230,251,62,31,86,122,230,148,102,97,236,234,24,253,218,151,18,51,179,59,30,248,126,235,107,250,66,179,227,108,90,247,50,171,92,67,54,173,225,73,248,162,203,152,130,207,64,32,
92,40,228,134,210,250,111,50,51,99,158,215,142,197,100,164,244,194,226,133,57,44,190,133,0,125,202,98,22,24,117,64,101,105,2,73,144,103,91,160,217,34,227,49,213,218,38,226,127,76,80,100,50,9,45,78,251,
198,158,182,75,182,117,95,182,107,99,123,107,99,217,175,54,45,211,67,125,94,168,145,167,159,93,250,193,3,193,71,30,209,111,216,80,172,121,89,173,169,69,63,25,219,230,127,185,43,167,85,76,77,49,89,23,29,
57,171,40,45,45,209,66,231,231,62,155,183,133,134,119,220,22,248,225,143,180,175,214,179,194,252,195,63,163,132,181,115,19,197,186,177,169,233,144,215,179,202,213,75,150,85,162,232,63,191,41,62,55,183,
40,199,166,255,227,59,202,21,135,235,175,211,58,160,132,198,214,145,187,148,107,227,147,95,253,122,44,125,241,57,239,248,210,105,223,216,189,97,81,78,206,30,122,208,117,219,223,213,49,124,108,124,130,
172,49,153,223,20,35,63,119,229,203,72,246,187,31,253,105,67,239,21,17,239,56,171,157,248,217,117,36,99,229,124,233,15,22,154,227,250,122,75,41,87,50,180,7,177,105,30,166,78,207,75,202,205,21,23,214,13,
24,139,197,233,83,234,133,46,245,57,171,165,121,182,114,222,24,12,121,181,201,118,105,109,225,112,151,98,7,128,227,218,90,27,247,236,222,124,201,246,238,206,246,230,6,91,29,167,227,18,137,100,60,89,254,
216,56,16,92,230,102,76,242,162,167,254,238,214,208,227,143,147,147,76,135,65,181,75,231,218,125,193,1,229,204,166,228,200,8,137,121,217,62,253,76,49,147,57,62,56,196,59,28,100,213,243,10,146,125,86,109,
53,147,222,171,122,171,45,112,250,24,9,178,253,3,239,173,235,221,227,251,217,127,75,171,233,69,78,165,20,219,184,121,147,206,90,127,245,163,143,238,124,224,251,138,163,241,146,61,201,243,21,22,58,58,98,
1,223,217,119,191,207,75,193,124,186,124,78,108,115,190,37,144,95,113,234,111,254,142,210,219,238,255,215,232,152,71,78,247,243,153,120,75,96,100,240,217,203,122,105,249,206,239,125,87,25,166,27,83,250,
192,169,86,209,53,148,241,90,92,215,242,249,150,92,45,142,130,83,36,219,96,19,201,72,150,208,195,149,243,152,114,250,224,170,243,221,46,171,46,66,61,113,148,254,113,109,66,191,18,187,184,178,122,228,74,
162,209,110,237,222,208,170,104,35,28,245,206,46,250,253,65,45,82,112,54,55,144,170,203,43,227,233,233,252,190,244,208,99,143,207,223,115,111,211,199,63,106,186,250,101,74,104,105,177,36,188,179,233,232,
83,82,100,150,27,129,112,162,40,5,131,186,142,118,178,180,171,236,231,104,76,79,197,2,203,52,134,228,228,148,156,72,104,103,10,214,160,79,50,242,236,15,14,181,255,195,173,82,52,58,252,145,219,87,29,72,
68,190,128,169,177,205,188,121,19,103,208,55,189,230,53,234,194,250,171,174,212,157,239,111,167,35,166,231,140,158,47,220,203,27,173,186,149,28,18,73,166,19,76,200,63,59,126,223,23,219,223,253,142,192,
233,83,145,145,17,50,188,201,84,72,108,108,155,127,225,249,161,143,124,172,231,206,79,214,111,189,52,124,166,95,112,56,66,28,183,200,173,221,227,120,215,194,26,71,162,241,112,36,90,24,30,55,55,217,74,
235,169,206,137,141,147,138,153,146,248,11,156,100,148,79,63,57,85,117,83,139,63,102,53,223,129,206,43,41,23,179,199,105,217,75,37,94,74,105,119,53,110,232,114,70,99,177,147,167,71,233,53,55,239,207,142,
246,213,10,151,87,198,222,25,239,220,220,92,110,175,213,255,181,191,243,29,170,134,211,93,71,75,92,186,195,89,215,234,76,142,143,103,235,48,233,245,134,127,115,152,213,27,20,27,171,55,204,221,145,227,
84,235,219,219,178,77,55,109,135,111,108,100,77,166,249,127,185,55,175,14,139,223,248,150,249,85,215,168,66,82,119,49,137,99,254,161,159,40,11,226,241,197,39,126,109,16,234,86,139,140,66,246,190,215,232,
237,246,231,175,126,229,147,237,61,191,105,118,14,188,231,253,245,87,95,37,26,44,201,5,191,118,130,16,154,92,188,185,88,60,43,43,99,138,172,103,223,247,254,84,56,188,233,115,119,203,233,1,17,6,107,99,
98,193,103,102,216,169,111,30,144,18,73,211,198,110,73,138,27,101,198,199,50,62,158,91,87,50,38,102,188,11,133,253,213,20,169,26,141,134,85,221,218,188,233,230,163,177,56,165,205,102,195,5,85,128,190,
139,62,21,141,198,87,237,106,94,214,23,40,232,64,46,218,83,93,194,150,109,245,22,103,179,45,16,140,188,112,98,36,20,142,254,201,118,253,226,156,127,99,241,99,71,143,102,47,17,182,111,13,28,122,144,140,
167,20,137,132,143,252,118,241,223,191,149,24,29,137,189,112,156,220,102,211,149,87,120,222,248,231,241,129,65,41,20,14,62,242,232,220,71,63,33,5,130,114,250,74,79,211,93,159,10,254,248,33,239,135,254,
57,49,58,70,199,32,118,234,180,247,195,31,139,159,29,80,187,242,146,211,51,114,250,254,243,166,59,63,25,252,233,35,115,119,126,70,177,192,209,104,228,185,223,141,223,244,38,195,166,141,226,155,114,70,
131,234,13,98,224,185,223,43,189,167,199,94,136,69,22,57,177,174,120,96,76,167,198,166,255,181,63,177,176,48,243,228,19,209,137,209,216,172,119,242,223,190,161,184,66,175,127,125,220,235,205,9,251,11,
163,188,220,35,160,183,53,196,82,209,129,119,189,143,51,10,230,141,61,145,129,129,158,207,126,186,245,237,127,227,99,100,219,43,246,113,122,93,108,140,98,102,131,133,97,198,89,54,194,175,221,115,60,215,
104,176,216,188,47,208,230,106,44,188,231,195,213,98,31,26,153,46,218,97,123,110,102,76,173,171,41,28,142,209,146,58,241,194,230,145,17,45,38,250,148,26,81,151,126,163,161,116,126,94,206,156,216,120,229,
224,88,137,165,165,146,228,71,14,51,149,60,51,48,81,196,159,47,251,100,160,22,209,250,196,175,158,184,230,85,175,202,116,56,189,243,31,230,63,115,143,247,131,31,226,237,118,195,182,109,13,239,124,135,
18,36,167,47,23,57,62,248,126,114,33,230,239,252,12,99,18,56,163,217,118,219,223,139,55,222,160,238,104,125,103,71,199,99,143,204,126,252,147,115,159,188,147,53,155,200,240,26,122,186,245,175,252,51,69,
59,122,189,229,186,87,147,251,173,20,235,104,111,255,225,247,231,238,250,236,220,29,159,102,244,58,57,18,181,188,98,95,195,187,222,145,231,223,242,86,107,120,110,50,54,62,30,58,118,92,9,140,57,86,86,46,
237,58,206,219,107,69,122,188,181,78,87,95,175,140,197,9,71,12,58,161,241,13,125,20,247,42,167,33,103,27,45,12,205,78,196,38,167,92,255,112,235,224,251,148,49,91,44,207,107,173,75,217,84,83,147,206,235,
149,148,68,163,110,122,230,92,162,190,94,78,135,205,150,58,135,231,27,95,233,190,227,118,131,179,57,30,90,208,219,108,91,190,250,69,219,205,55,56,175,187,46,116,226,212,226,177,231,12,118,229,50,242,73,
158,213,173,63,25,43,211,41,206,44,180,56,243,70,68,49,214,58,179,32,232,87,186,125,79,51,199,217,17,105,250,137,16,1,138,171,233,181,176,88,210,132,88,246,6,229,132,61,55,191,180,146,141,189,224,216,
184,136,142,75,216,178,193,160,227,56,118,209,31,44,54,146,132,41,191,53,54,24,12,15,63,244,240,39,239,248,84,198,98,25,12,141,31,251,112,114,114,146,21,4,94,81,14,99,251,203,183,106,107,29,239,127,47,
217,213,212,252,188,174,85,9,248,153,221,153,17,96,124,67,67,203,253,159,39,101,166,124,243,186,182,182,204,6,141,198,134,255,243,246,76,177,166,70,231,189,119,75,161,80,106,113,81,159,85,44,219,48,178,
202,80,88,118,236,95,238,141,77,76,24,120,3,237,39,142,215,133,78,158,84,19,138,135,201,235,98,163,158,208,241,19,140,78,39,197,35,226,182,157,241,169,233,153,111,127,87,79,107,105,151,210,174,231,184,
137,47,125,213,241,250,215,234,26,29,145,225,17,114,206,185,243,163,24,232,179,193,163,199,162,67,195,58,158,15,30,125,33,58,56,164,36,142,189,16,25,26,82,55,206,83,192,31,152,63,251,174,247,246,220,117,
135,169,185,173,255,189,239,21,58,59,72,195,9,159,239,248,155,110,97,117,122,147,94,239,147,229,103,244,252,90,206,122,203,238,218,213,187,70,223,196,178,59,183,117,22,246,226,134,194,177,129,161,169,
149,62,213,179,193,169,222,39,72,1,246,153,129,115,227,61,12,122,221,182,45,237,116,170,61,126,202,179,106,91,215,190,247,228,105,143,26,124,94,186,115,67,60,158,60,117,102,245,39,72,109,217,212,102,20,
244,71,143,143,100,204,145,77,236,108,111,244,76,204,249,22,150,57,131,88,235,76,221,93,206,137,41,159,118,202,88,22,179,89,216,212,211,58,227,93,156,246,174,56,146,180,209,97,109,107,181,103,127,117,
89,88,92,244,221,255,133,207,221,248,198,55,50,229,230,195,255,244,79,109,247,222,187,175,177,109,137,83,166,129,151,162,17,101,128,187,65,80,7,219,167,205,62,203,106,173,75,237,209,84,58,80,100,78,48,
74,209,104,42,18,209,153,205,90,91,73,5,67,186,122,43,73,154,86,177,185,247,219,41,155,98,21,40,193,166,61,109,45,113,222,45,96,19,139,139,164,103,94,180,68,39,198,153,148,44,94,122,73,124,122,38,54,51,
105,104,237,232,138,39,30,55,240,31,171,175,91,203,27,21,215,46,10,87,158,141,54,181,204,227,75,205,38,67,189,213,92,60,58,205,179,159,241,68,146,4,64,123,214,221,237,92,245,123,221,27,156,180,255,201,
171,215,58,144,10,111,180,184,144,142,103,185,200,173,17,204,106,145,243,249,78,151,100,58,188,47,54,176,156,206,8,149,48,233,151,205,102,191,235,142,79,51,149,64,246,206,224,57,86,167,83,198,81,177,234,
153,154,163,88,90,142,70,40,161,102,201,192,74,225,112,58,220,229,73,192,169,96,144,19,4,89,211,33,125,82,48,36,151,150,40,194,39,175,91,49,209,90,184,71,159,141,68,104,107,108,58,33,69,99,231,18,177,
152,186,113,70,29,221,81,39,210,121,132,150,11,77,205,58,91,61,25,240,164,223,47,180,180,233,82,73,42,245,144,158,179,174,237,196,122,107,250,80,41,178,96,145,244,8,199,60,58,218,28,43,93,107,149,179,
250,184,114,251,204,22,23,253,33,147,209,176,201,221,106,90,161,159,140,150,111,222,232,50,153,12,201,100,42,219,238,93,136,83,157,95,50,22,87,20,72,26,43,230,132,175,182,237,68,34,21,141,197,45,102,193,
108,90,70,201,228,107,108,217,232,162,181,169,84,170,18,228,51,51,191,248,213,47,127,133,169,40,200,60,234,245,202,141,13,231,2,46,137,51,155,233,117,238,150,6,202,146,207,79,241,118,122,56,14,105,150,
175,171,83,76,110,38,46,83,62,206,91,44,180,5,18,164,162,97,237,40,203,18,45,231,76,38,249,92,194,120,46,97,52,102,46,28,144,157,39,71,64,20,85,67,205,81,236,209,220,172,179,90,83,146,212,149,146,127,
174,231,159,54,153,121,150,93,183,50,38,70,60,179,133,50,102,148,27,113,155,138,219,227,194,112,116,108,124,110,110,62,32,24,116,100,147,187,58,26,27,108,22,82,44,69,218,244,222,80,111,161,37,180,220,
160,231,149,75,178,115,254,236,17,81,138,187,85,106,36,144,31,235,134,195,177,88,60,65,39,8,87,75,3,137,144,190,78,180,24,91,156,182,45,27,149,104,48,149,146,74,60,65,140,121,230,168,100,207,134,102,123,
131,168,218,118,114,46,200,49,105,119,57,54,111,108,37,119,131,126,26,203,86,196,212,204,86,107,253,71,63,246,241,209,209,81,6,20,57,177,48,140,67,146,23,120,246,139,130,174,105,205,231,157,95,235,185,
14,201,16,141,79,206,83,212,151,31,46,154,12,206,230,250,25,175,127,37,123,184,172,58,166,102,22,2,161,72,115,163,149,180,68,175,188,181,193,160,34,96,210,201,82,32,82,224,247,150,168,226,101,10,143,140,
206,118,117,42,103,13,122,101,126,87,250,52,193,170,178,47,65,125,209,88,98,212,51,75,110,72,171,211,70,175,236,85,222,89,191,119,110,137,172,177,189,193,82,33,109,180,213,213,121,195,235,223,112,244,
133,99,144,235,74,254,62,197,232,20,224,125,64,208,45,153,235,214,254,176,149,97,202,210,69,127,88,48,232,11,219,168,221,102,33,155,57,239,11,230,246,55,156,187,191,87,90,97,44,4,105,149,94,100,21,233,
68,96,48,232,40,104,34,139,24,143,39,131,161,40,157,50,200,38,71,34,241,120,238,32,231,161,17,111,137,74,30,241,204,21,94,36,35,83,121,118,112,218,102,53,27,141,122,50,152,36,96,250,138,80,56,166,138,
147,54,78,161,111,41,27,15,4,163,167,207,78,146,127,78,53,231,148,201,244,82,100,234,105,225,57,179,31,137,15,14,207,84,72,51,165,159,25,139,203,125,215,191,246,145,71,127,6,209,22,218,97,189,204,108,
148,228,47,155,116,143,90,44,77,107,120,157,169,156,50,86,194,173,89,191,78,199,89,197,124,251,217,236,168,163,51,219,124,78,39,240,121,119,186,168,240,98,177,101,38,157,116,119,53,81,3,36,203,150,183,
60,18,45,117,178,251,34,87,194,22,151,194,133,143,232,36,167,58,146,138,95,64,11,144,100,58,169,209,107,217,88,34,26,75,84,78,99,21,4,227,217,193,209,235,175,187,254,39,63,253,137,78,143,9,171,51,26,54,
201,76,183,44,31,48,234,254,213,108,110,89,195,222,233,114,198,198,26,19,83,11,75,193,136,92,48,21,125,83,163,232,108,178,102,187,43,218,170,210,55,110,20,244,155,221,78,157,158,27,28,241,162,169,189,
88,152,205,150,145,177,137,151,246,190,228,228,137,19,229,112,9,42,110,135,40,227,195,36,185,67,150,239,51,234,254,69,52,183,24,203,22,4,113,101,220,11,19,83,139,11,139,97,117,156,86,246,171,222,106,234,
104,179,147,135,204,164,71,80,171,11,75,28,95,204,113,108,163,93,236,108,183,147,53,59,59,4,13,191,248,54,57,33,113,215,190,250,186,251,191,240,133,26,55,194,6,153,217,146,146,163,28,247,30,179,254,155,
117,98,185,30,194,86,126,25,167,189,235,165,217,185,64,225,211,97,76,130,110,67,187,221,209,96,225,57,246,252,69,167,85,116,108,208,235,72,192,61,157,141,118,155,57,17,79,14,142,204,226,201,230,23,165,
197,112,92,99,179,235,115,247,222,255,242,171,94,254,224,143,127,188,166,253,72,229,70,29,18,96,150,101,138,132,237,12,243,3,35,255,102,81,120,182,206,214,164,55,149,183,98,188,211,233,42,111,13,40,2,
12,133,227,130,81,87,56,166,194,100,210,235,245,231,70,216,144,81,246,47,69,243,250,93,104,173,201,168,183,214,25,27,27,44,141,14,139,73,233,115,98,2,193,216,248,212,162,12,9,95,76,140,70,83,44,158,252,
225,15,31,248,241,161,7,194,225,80,189,205,214,216,216,120,81,191,241,201,223,28,22,14,31,238,49,91,227,233,137,231,217,244,144,13,150,89,139,23,151,238,136,22,25,185,89,102,28,50,179,200,179,143,233,
249,187,205,250,7,45,162,104,18,13,28,87,246,195,177,118,131,49,87,165,161,222,100,171,55,243,43,223,115,159,76,42,147,188,171,67,110,232,72,146,236,243,10,167,82,210,220,66,136,100,12,153,173,37,129,
192,146,156,74,108,222,180,177,247,37,123,118,236,220,217,221,221,109,119,56,76,70,19,151,190,105,65,177,95,108,81,3,199,158,183,180,108,193,66,86,139,66,217,251,238,188,115,223,55,190,190,215,214,178,
200,173,105,148,76,181,72,176,76,136,97,230,57,118,132,99,95,224,217,167,245,250,121,193,88,175,23,216,138,137,215,43,72,198,106,100,91,95,103,172,171,19,10,103,168,95,165,179,33,37,249,3,81,50,215,112,
164,203,72,60,30,139,197,162,114,42,169,227,117,202,41,86,29,29,197,22,245,135,179,229,42,23,44,60,191,36,197,178,92,42,121,105,42,101,148,229,196,26,106,135,132,74,198,63,200,178,139,60,231,231,248,152,
78,39,240,122,195,26,206,7,80,34,149,117,229,128,68,184,224,143,208,203,108,50,88,76,122,163,81,87,92,207,202,5,158,88,50,172,92,182,77,200,112,163,203,141,193,32,208,235,226,109,191,191,188,191,46,253,
170,76,42,244,2,32,41,147,94,140,242,152,181,58,163,160,75,199,198,114,40,116,238,166,127,74,167,146,82,60,153,82,166,188,131,120,65,205,83,233,215,241,165,243,163,148,73,177,243,11,97,28,48,0,170,79,
198,233,144,41,61,151,26,3,179,11,64,117,202,88,206,76,165,134,131,5,64,181,90,99,137,57,55,39,38,116,12,64,149,90,227,146,238,140,0,0,50,174,112,175,26,58,6,160,218,99,227,115,42,198,177,2,160,74,101,
172,12,4,74,75,152,101,113,176,0,168,78,25,167,82,146,196,171,9,216,99,0,170,83,198,190,69,220,231,0,192,42,112,216,5,0,64,198,0,0,200,24,0,0,25,3,0,25,3,0,32,99,0,0,100,12,0,128,140,1,128,140,1,0,144,
49,0,0,50,6,0,64,198,0,64,198,0,0,200,24,0,0,25,3,0,32,99,0,32,99,0,0,100,12,0,128,140,1,0,144,49,0,144,49,0,0,50,6,0,64,198,0,0,200,24,128,154,228,255,9,48,0,158,80,235,103,103,5,124,31,0,0,0,0,73,69,
78,68,174,66,96,130,0,0};

const char* MainViewComponent::background2_png = (const char*) resource_MainViewComponent_background2_png;
const int MainViewComponent::background2_pngSize = 16984;

// JUCER_RESOURCE: background3_png, 16699, "../../graphic assets/plugin assets/background3.png"
static const unsigned char resource_MainViewComponent_background3_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,1,66,0,0,2,71,8,2,0,0,0,106,234,200,229,0,0,0,25,116,69,88,116,83,111,102,
116,119,97,114,101,0,65,100,111,98,101,32,73,109,97,103,101,82,101,97,100,121,113,201,101,60,0,0,3,102,105,84,88,116,88,77,76,58,99,111,109,46,97,100,111,98,101,46,120,109,112,0,0,0,0,0,60,63,120,112,
97,99,107,101,116,32,98,101,103,105,110,61,34,239,187,191,34,32,105,100,61,34,87,53,77,48,77,112,67,101,104,105,72,122,114,101,83,122,78,84,99,122,107,99,57,100,34,63,62,32,60,120,58,120,109,112,109,101,
116,97,32,120,109,108,110,115,58,120,61,34,97,100,111,98,101,58,110,115,58,109,101,116,97,47,34,32,120,58,120,109,112,116,107,61,34,65,100,111,98,101,32,88,77,80,32,67,111,114,101,32,53,46,48,45,99,48,
54,48,32,54,49,46,49,51,52,55,55,55,44,32,50,48,49,48,47,48,50,47,49,50,45,49,55,58,51,50,58,48,48,32,32,32,32,32,32,32,32,34,62,32,60,114,100,102,58,82,68,70,32,120,109,108,110,115,58,114,100,102,61,
34,104,116,116,112,58,47,47,119,119,119,46,119,51,46,111,114,103,47,49,57,57,57,47,48,50,47,50,50,45,114,100,102,45,115,121,110,116,97,120,45,110,115,35,34,62,32,60,114,100,102,58,68,101,115,99,114,105,
112,116,105,111,110,32,114,100,102,58,97,98,111,117,116,61,34,34,32,120,109,108,110,115,58,120,109,112,77,77,61,34,104,116,116,112,58,47,47,110,115,46,97,100,111,98,101,46,99,111,109,47,120,97,112,47,
49,46,48,47,109,109,47,34,32,120,109,108,110,115,58,115,116,82,101,102,61,34,104,116,116,112,58,47,47,110,115,46,97,100,111,98,101,46,99,111,109,47,120,97,112,47,49,46,48,47,115,84,121,112,101,47,82,101,
115,111,117,114,99,101,82,101,102,35,34,32,120,109,108,110,115,58,120,109,112,61,34,104,116,116,112,58,47,47,110,115,46,97,100,111,98,101,46,99,111,109,47,120,97,112,47,49,46,48,47,34,32,120,109,112,77,
77,58,79,114,105,103,105,110,97,108,68,111,99,117,109,101,110,116,73,68,61,34,120,109,112,46,100,105,100,58,48,55,56,48,49,49,55,52,48,55,50,48,54,56,49,49,56,67,49,52,68,69,48,68,65,55,70,69,50,51,52,
57,34,32,120,109,112,77,77,58,68,111,99,117,109,101,110,116,73,68,61,34,120,109,112,46,100,105,100,58,56,69,52,54,65,69,70,48,65,68,54,52,49,49,69,53,66,50,65,53,68,67,49,50,69,54,50,54,49,70,53,57,34,
32,120,109,112,77,77,58,73,110,115,116,97,110,99,101,73,68,61,34,120,109,112,46,105,105,100,58,56,69,52,54,65,69,69,70,65,68,54,52,49,49,69,53,66,50,65,53,68,67,49,50,69,54,50,54,49,70,53,57,34,32,120,
109,112,58,67,114,101,97,116,111,114,84,111,111,108,61,34,65,100,111,98,101,32,80,104,111,116,111,115,104,111,112,32,67,83,53,32,77,97,99,105,110,116,111,115,104,34,62,32,60,120,109,112,77,77,58,68,101,
114,105,118,101,100,70,114,111,109,32,115,116,82,101,102,58,105,110,115,116,97,110,99,101,73,68,61,34,120,109,112,46,105,105,100,58,48,49,56,48,49,49,55,52,48,55,50,48,54,56,49,49,56,56,67,54,57,50,70,
69,57,65,65,54,67,66,57,67,34,32,115,116,82,101,102,58,100,111,99,117,109,101,110,116,73,68,61,34,120,109,112,46,100,105,100,58,48,55,56,48,49,49,55,52,48,55,50,48,54,56,49,49,56,67,49,52,68,69,48,68,
65,55,70,69,50,51,52,57,34,47,62,32,60,47,114,100,102,58,68,101,115,99,114,105,112,116,105,111,110,62,32,60,47,114,100,102,58,82,68,70,62,32,60,47,120,58,120,109,112,109,101,116,97,62,32,60,63,120,112,
97,99,107,101,116,32,101,110,100,61,34,114,34,63,62,74,51,23,115,0,0,61,107,73,68,65,84,120,218,236,157,9,124,35,103,121,255,53,51,146,70,178,70,146,45,217,150,45,223,86,118,227,93,111,54,155,172,201,
66,232,110,8,33,129,26,8,199,182,180,80,10,45,16,174,127,203,85,10,229,42,161,133,94,28,229,104,155,80,32,221,44,105,57,179,41,87,104,9,132,99,183,129,144,132,100,179,135,215,187,246,122,109,249,62,36,
235,62,103,230,255,72,227,29,93,150,172,13,187,150,100,253,190,31,125,164,121,103,94,141,94,205,188,191,247,121,158,119,222,121,135,217,189,123,72,3,0,168,101,88,28,2,0,32,99,0,0,100,12,0,128,140,1,128,
140,1,0,144,49,0,0,50,6,0,64,198,0,64,198,0,0,200,24,0,0,25,3,0,32,99,0,32,99,0,0,100,12,0,128,140,1,0,144,49,0,144,49,0,160,86,209,214,116,233,187,187,59,92,174,62,65,16,88,150,193,185,4,42,146,36,5,
2,193,241,241,11,110,247,12,100,92,213,12,14,14,8,130,241,200,145,251,103,102,102,232,180,161,238,2,21,142,227,156,78,231,240,240,176,32,152,70,70,206,194,169,174,82,154,155,237,118,123,227,225,195,135,
221,110,55,52,12,242,16,69,145,42,198,161,67,135,28,14,170,40,77,91,191,217,114,56,156,229,228,227,121,126,199,142,171,251,250,122,100,57,229,174,84,188,220,187,118,237,248,229,47,31,33,59,140,42,11,74,
136,57,145,72,236,216,177,99,118,118,30,214,88,99,179,53,237,218,181,211,100,106,168,158,114,83,145,198,199,199,81,83,65,105,198,198,198,236,118,27,156,106,141,211,217,182,109,155,139,22,60,30,111,245,
148,155,231,245,193,96,16,213,20,148,38,16,8,80,85,169,119,25,147,23,221,213,213,25,139,197,206,156,25,141,70,99,168,22,160,182,144,101,153,97,182,254,85,140,13,122,170,201,2,83,84,60,54,54,158,76,138,
54,155,13,213,2,128,218,147,177,207,231,167,23,14,19,0,181,29,27,3,0,32,99,0,0,100,12,0,128,140,1,128,140,1,0,144,49,0,0,50,6,0,64,198,0,64,198,0,212,38,12,195,200,178,12,25,87,41,241,120,92,16,4,84,83,
80,26,170,36,84,85,32,227,42,101,101,197,219,223,223,143,106,10,74,227,114,185,168,170,108,249,191,121,9,147,248,184,221,211,244,170,146,114,159,63,63,121,224,192,129,209,209,209,88,12,247,93,129,245,
225,121,126,255,254,253,167,78,141,110,249,127,90,238,236,31,213,70,56,28,49,155,133,161,161,189,11,11,11,184,241,24,20,134,196,157,157,157,7,15,30,244,249,130,147,147,238,173,255,127,119,239,30,170,221,
210,247,244,116,185,92,189,130,96,170,135,123,74,65,249,200,178,28,12,134,198,198,38,166,166,166,235,225,255,214,246,4,183,212,208,214,67,91,11,64,105,112,193,9,0,200,24,0,0,25,3,0,32,99,0,32,99,0,0,100,
12,0,128,140,1,0,144,49,0,144,49,0,0,50,6,0,64,198,0,0,200,24,0,200,24,0,0,25,3,0,32,99,0,0,100,12,0,100,12,0,168,89,42,63,251,71,122,250,29,134,81,63,212,207,204,66,106,57,157,206,73,150,9,203,230,164,
10,214,80,146,45,200,204,22,89,46,204,92,52,103,94,230,188,108,235,149,109,67,212,227,82,152,212,228,46,100,222,149,89,154,213,247,204,103,102,33,181,156,78,231,36,203,68,146,114,82,5,107,40,41,21,100,
206,206,150,189,61,147,88,55,103,222,206,165,188,223,206,202,182,94,217,54,68,61,46,133,73,77,238,66,38,9,107,12,0,216,42,214,88,53,11,56,25,0,192,26,3,0,25,3,0,32,99,0,0,100,12,0,128,140,1,128,140,1,
0,144,49,0,0,50,6,0,64,198,0,64,198,0,128,218,163,182,31,140,218,221,221,225,114,245,9,130,192,178,120,190,49,200,32,73,82,32,16,28,31,191,224,118,207,64,198,85,205,224,224,128,32,24,143,28,185,127,102,
102,134,78,27,234,46,80,225,56,206,233,116,14,15,15,11,130,105,100,228,44,156,234,42,165,185,217,110,183,55,30,62,124,216,237,118,67,195,32,15,81,20,169,98,28,58,116,200,225,160,138,210,4,107,172,177,
217,154,236,118,27,189,43,73,159,207,79,204,206,206,87,182,220,253,253,61,71,143,30,141,197,98,168,178,160,24,84,61,142,29,59,182,103,207,245,43,43,222,186,182,198,3,3,219,183,109,115,169,26,38,172,86,
75,87,87,39,173,172,108,185,169,72,227,227,227,168,169,160,52,99,99,99,100,132,234,218,26,59,157,109,36,90,106,210,22,23,151,84,243,219,215,215,211,218,218,66,42,162,119,90,95,169,114,243,188,62,24,12,
162,154,130,210,4,2,1,170,42,117,45,99,69,186,121,254,243,196,196,164,86,171,37,25,147,194,43,40,99,0,202,65,150,101,101,62,163,186,118,170,215,141,129,41,60,78,219,67,30,181,4,128,26,144,113,9,66,161,
16,14,31,0,181,42,99,147,169,65,181,201,0,128,218,147,49,105,184,181,181,37,20,10,123,60,94,28,62,0,106,82,198,125,125,189,201,164,120,238,28,46,246,0,80,155,50,30,24,216,78,214,120,98,226,2,198,93,0,
80,147,50,38,13,91,173,22,178,195,112,167,1,168,73,25,67,195,0,84,45,218,50,53,108,50,153,78,158,60,29,10,133,113,200,0,168,49,25,107,181,220,192,192,213,60,207,159,57,51,10,13,3,80,123,50,86,52,76,239,
100,135,209,167,5,106,17,245,153,146,245,43,99,210,176,50,210,99,207,158,107,214,205,224,118,79,87,234,142,197,120,60,46,8,2,238,142,0,165,161,74,66,85,101,203,255,205,82,93,92,213,60,106,122,101,197,
219,223,223,143,106,10,74,227,114,185,182,252,205,198,27,88,227,39,158,120,178,106,203,125,254,252,228,129,3,7,70,71,71,225,237,131,18,118,104,255,254,253,167,78,141,110,249,127,202,57,28,206,90,44,119,
56,28,49,155,133,161,161,189,11,11,11,112,173,65,97,72,220,217,217,121,240,224,65,159,47,56,57,233,222,250,255,119,247,238,161,218,45,125,79,79,151,203,213,43,8,166,122,184,167,20,148,143,44,203,193,96,
104,108,108,98,106,106,186,30,254,111,109,79,112,75,13,109,61,180,181,0,148,6,211,205,3,0,25,3,0,32,99,0,0,100,12,0,100,12,0,128,140,1,0,144,49,0,0,50,6,0,50,6,0,64,198,0,0,200,24,0,0,25,3,0,25,3,0,32,
99,0,0,100,12,0,128,140,1,128,140,1,0,53,75,229,103,255,72,79,191,195,48,234,135,250,153,89,72,45,167,211,57,201,50,97,217,156,84,193,26,74,178,5,153,217,34,203,133,153,139,230,204,203,156,151,109,189,
178,109,136,122,92,10,147,154,220,133,204,187,50,75,179,250,158,249,204,44,164,150,211,233,156,100,153,72,82,78,170,96,13,37,165,130,204,217,217,178,183,103,18,235,230,204,219,185,148,247,219,89,217,214,
43,219,134,168,199,165,48,169,201,93,200,36,97,141,1,0,91,197,26,171,102,1,39,3,0,88,99,0,32,99,0,0,100,12,0,128,140,1,0,144,49,0,144,49,0,0,50,6,0,64,198,0,0,200,24,0,200,24,0,0,25,3,0,32,99,0,0,100,
12,64,221,161,173,233,210,119,119,119,184,92,125,130,32,176,44,131,115,9,84,36,73,10,4,130,227,227,23,220,238,25,200,184,170,25,28,28,16,4,227,145,35,247,207,204,204,208,105,67,221,5,42,28,199,57,157,
206,225,225,97,65,48,141,140,156,133,83,93,165,52,55,219,237,246,198,195,135,15,187,221,110,104,24,228,33,138,34,85,140,67,135,14,57,28,84,81,154,96,141,53,78,103,155,197,98,177,90,45,74,50,20,10,123,
60,158,217,217,249,202,150,187,191,191,231,232,209,163,177,88,12,85,22,20,131,170,199,177,99,199,246,236,185,126,101,197,91,191,214,216,100,106,216,181,107,103,87,87,167,170,97,101,37,173,161,245,90,45,
87,193,114,219,108,77,227,227,227,168,169,160,52,99,99,99,118,187,173,174,173,113,107,107,11,137,214,231,243,123,60,222,197,197,37,213,56,183,183,183,211,122,122,119,187,167,43,85,110,158,215,7,131,65,
84,83,80,154,64,32,64,85,165,174,101,60,49,49,169,104,56,123,165,226,78,43,38,218,237,70,61,1,85,141,44,203,202,36,161,245,235,84,19,121,26,86,136,70,17,145,2,80,59,50,94,23,37,216,32,67,141,195,7,64,
181,59,213,133,216,108,77,20,48,147,59,29,10,133,231,230,230,112,248,0,168,13,25,147,116,183,109,115,169,73,50,194,110,247,116,197,47,56,1,0,158,161,53,38,200,20,155,76,38,205,197,190,46,0,64,13,200,216,
227,241,62,250,232,227,107,185,181,92,123,123,59,249,213,93,93,157,60,207,79,76,76,226,8,2,80,113,46,173,139,43,153,20,201,163,62,121,242,52,45,144,152,73,201,56,130,0,212,152,140,21,98,105,52,233,17,
93,56,130,0,212,164,140,21,239,26,199,14,128,26,150,177,213,106,81,220,233,80,40,140,35,8,64,197,41,213,197,181,119,239,117,139,139,75,228,63,171,3,170,53,233,97,152,20,21,107,210,93,95,184,193,8,84,57,
234,131,218,235,87,198,154,244,141,16,244,222,215,215,147,183,222,231,243,79,76,92,168,96,185,227,241,184,32,8,184,59,2,148,134,42,9,85,149,45,255,55,57,135,195,89,108,27,217,91,73,146,245,122,157,86,
171,205,94,185,188,188,50,49,49,73,155,42,88,110,155,173,41,28,14,45,44,44,160,166,130,18,236,220,185,179,177,209,182,229,199,56,148,178,198,228,51,187,221,211,21,188,27,177,4,231,207,79,30,56,112,96,
116,116,20,142,61,40,6,207,243,251,247,239,63,117,106,180,174,173,113,53,19,14,71,204,102,97,104,104,47,25,100,184,214,160,48,36,238,236,236,60,120,240,160,207,23,156,156,220,250,247,211,50,187,119,15,
213,110,233,123,122,186,92,174,94,65,48,213,195,61,165,160,124,100,89,14,6,67,99,99,19,83,83,211,245,240,127,107,123,130,91,106,104,235,161,173,5,160,52,152,110,30,0,200,24,0,0,25,3,0,32,99,0,32,99,0,
0,100,12,0,128,140,1,0,144,49,0,144,49,0,0,50,6,0,64,198,0,0,200,24,0,200,24,0,0,25,3,0,32,99,0,0,100,12,0,100,12,0,168,89,42,63,251,71,122,250,29,134,81,63,212,207,204,66,106,57,157,206,73,150,9,203,
230,164,10,214,80,146,45,200,204,22,89,46,204,92,52,103,94,230,188,108,235,149,109,67,212,227,82,152,212,228,46,100,222,149,89,154,213,247,204,103,102,33,181,156,78,231,36,203,68,146,114,82,5,107,40,41,
21,100,206,206,150,189,61,147,88,55,103,222,206,165,188,223,206,202,182,94,217,54,68,61,46,133,73,77,238,66,38,9,107,12,0,216,42,214,88,53,11,56,25,0,192,26,3,0,25,3,0,32,99,0,0,100,12,0,128,140,1,128,
140,1,0,144,49,0,0,50,6,0,64,198,0,64,198,0,0,200,24,0,0,25,3,0,32,99,0,234,14,109,237,22,189,187,187,195,229,234,19,4,129,101,25,156,72,160,34,73,82,32,16,28,31,191,224,118,207,64,198,85,205,224,224,
128,32,24,143,28,185,127,102,102,134,78,27,234,46,80,225,56,206,233,116,14,15,15,11,130,105,100,228,44,156,234,42,165,185,217,110,183,55,30,62,124,216,237,118,67,195,32,15,81,20,169,98,28,58,116,200,225,
160,138,210,4,25,231,51,48,176,125,223,190,161,93,187,118,86,182,208,253,253,61,71,143,30,141,197,98,168,178,160,24,84,61,142,29,59,214,215,215,3,25,231,224,116,182,89,173,150,106,40,180,205,214,52,62,
62,142,154,10,74,51,54,54,102,183,219,32,227,12,36,224,174,174,78,159,207,95,13,133,230,121,125,48,24,68,53,5,165,9,4,2,84,85,32,227,12,228,156,144,151,50,55,55,143,202,1,106,5,89,150,149,25,66,33,227,
53,13,243,60,63,49,49,153,76,38,81,57,0,168,61,25,183,182,182,208,107,113,113,169,74,60,106,0,192,165,201,152,140,48,133,196,161,80,152,76,49,14,22,0,53,41,227,109,219,92,244,126,238,28,186,133,1,168,
77,25,59,157,109,38,83,131,219,61,141,43,180,0,212,164,140,149,43,76,20,18,211,11,135,9,128,218,147,177,86,203,245,245,245,32,36,6,160,38,88,255,214,136,246,246,118,62,133,102,223,190,161,194,173,228,
105,43,235,41,102,246,120,188,56,136,0,84,111,108,12,0,168,97,107,236,118,79,211,107,93,59,188,107,215,78,114,182,79,158,60,141,99,7,0,172,49,0,87,22,245,41,237,144,113,53,18,143,199,5,65,64,53,5,165,
161,74,66,85,5,50,174,82,86,86,188,253,253,253,168,166,160,52,46,151,139,170,10,100,156,15,69,197,143,62,250,120,197,3,227,243,231,39,15,28,56,144,234,73,7,160,8,84,61,246,239,223,95,39,87,76,57,135,195,
89,115,133,14,135,35,102,179,48,52,180,119,97,97,1,55,30,131,194,144,184,179,179,243,224,193,131,62,95,112,114,210,93,23,127,121,247,238,161,26,45,122,79,79,151,203,213,43,8,166,58,185,167,20,148,137,
44,203,193,96,104,108,108,98,106,106,186,78,254,114,13,79,112,75,13,109,157,180,181,0,92,206,216,24,0,0,25,3,0,32,99,0,0,100,12,0,100,12,0,128,140,1,0,144,49,0,0,50,6,0,50,6,0,64,198,0,0,200,24,0,0,25,
3,0,25,3,0,32,99,0,0,100,12,0,128,140,1,128,140,1,0,85,68,133,103,255,72,79,191,195,48,234,135,250,153,89,72,45,167,211,57,201,50,97,217,156,84,193,26,74,178,5,153,217,34,203,133,153,139,230,204,203,156,
151,109,189,178,109,136,122,92,10,147,154,220,133,204,187,50,75,179,250,158,249,204,44,164,150,211,233,156,100,153,72,82,78,170,96,13,37,165,130,204,217,217,178,183,103,18,235,230,204,219,185,148,247,
219,89,217,214,43,219,134,168,199,165,48,169,201,93,200,36,97,141,1,0,91,197,26,171,102,1,103,2,0,88,99,0,32,99,0,0,100,12,0,128,140,1,0,144,49,0,144,49,0,0,50,6,0,64,198,0,0,200,24,0,200,24,0,0,25,3,
0,32,99,0,0,100,12,64,61,162,173,221,162,119,119,119,184,92,125,130,32,176,44,131,19,9,84,36,73,10,4,130,227,227,23,220,238,25,200,184,170,25,28,28,16,4,227,145,35,247,207,204,204,208,105,67,221,5,42,
28,199,57,157,206,225,225,97,65,48,141,140,156,133,83,93,165,52,55,219,237,246,198,195,135,15,187,221,110,104,24,228,33,138,34,85,140,67,135,14,57,28,84,81,154,234,221,26,59,157,109,93,93,157,235,110,
58,121,242,116,40,20,174,84,161,251,251,123,142,30,61,26,139,197,80,101,65,49,168,122,28,59,118,108,207,158,235,87,86,188,117,109,141,57,174,74,93,110,155,173,105,124,124,28,53,21,148,102,108,108,204,
110,183,213,187,53,54,24,120,122,63,119,110,220,227,169,174,246,140,231,245,193,96,16,213,20,148,38,16,8,80,85,65,108,188,230,156,160,66,128,90,68,150,101,101,146,208,186,150,49,207,167,172,113,50,41,
162,66,0,80,171,50,214,106,57,77,170,223,47,137,195,4,64,173,202,152,227,180,100,138,97,141,1,168,114,180,37,76,177,98,141,247,237,27,202,142,147,87,86,188,110,247,52,14,28,0,53,96,141,215,181,195,20,
45,59,157,109,123,246,92,163,132,205,0,128,170,182,198,196,241,227,79,91,44,150,236,171,77,164,225,214,214,22,210,240,182,109,174,147,39,79,227,240,1,80,237,177,49,89,227,188,43,198,179,179,243,35,35,
103,105,189,201,212,96,181,90,112,248,0,168,118,25,175,11,133,199,161,80,72,115,241,114,20,0,160,246,100,156,101,171,113,33,10,128,218,148,177,234,78,87,240,214,8,0,64,54,69,187,184,186,186,58,13,6,158,
252,103,138,135,179,87,182,182,182,208,194,226,226,18,6,105,130,42,71,125,80,123,253,202,88,147,190,145,136,94,133,247,42,250,124,254,137,137,201,10,22,58,30,143,11,130,128,187,35,64,105,168,146,80,85,
169,135,127,202,57,28,206,117,55,248,253,126,89,78,221,145,175,220,231,164,224,241,120,231,231,23,39,39,221,149,45,52,53,46,225,112,104,97,97,1,53,21,148,96,231,206,157,141,141,182,108,119,178,30,173,
49,253,255,234,60,4,231,207,79,30,56,112,96,116,116,20,142,61,40,6,207,243,251,247,239,63,117,106,180,174,173,113,53,19,14,71,204,102,97,104,104,47,25,100,184,214,160,48,36,238,236,236,60,120,240,160,
207,23,172,184,231,184,73,127,121,247,238,161,26,45,122,79,79,151,203,213,43,8,166,58,185,167,20,148,137,44,203,193,96,104,108,108,98,106,170,94,6,255,215,240,4,183,212,208,214,73,91,11,64,105,48,221,
60,0,144,49,0,0,50,6,0,64,198,0,64,198,0,0,200,24,0,0,25,3,0,32,99,0,32,99,0,0,100,12,0,128,140,1,0,144,49,0,144,49,0,0,50,6,0,64,198,0,0,200,24,0,200,24,0,80,179,84,120,246,143,244,244,59,12,163,126,
168,159,153,133,212,114,58,157,147,44,19,150,205,73,21,172,161,36,91,144,153,45,178,92,152,185,104,206,188,204,121,217,214,43,219,134,168,199,165,48,169,201,93,200,188,43,179,52,171,239,153,207,204,66,
106,57,157,206,73,150,137,36,229,164,10,214,80,82,42,200,156,157,45,123,123,38,177,110,206,188,157,75,121,191,157,149,109,189,178,109,136,122,92,10,147,154,220,133,76,18,214,24,0,176,85,172,177,106,22,
112,38,0,128,53,6,0,50,6,0,64,198,0,0,200,24,0,0,25,3,0,25,3,0,32,99,0,0,100,12,0,128,140,1,128,140,1,0,144,49,0,0,50,6,0,64,198,0,64,198,0,0,200,24,0,176,249,104,107,183,232,221,221,29,46,87,159,32,8,
44,203,224,68,2,21,73,146,2,129,224,248,248,5,183,123,6,50,174,106,6,7,7,4,193,120,228,200,253,51,51,51,116,218,80,119,129,10,199,113,78,167,115,120,120,88,16,76,35,35,103,225,84,87,41,205,205,118,187,
189,241,240,225,195,110,183,27,26,6,121,136,162,72,21,227,208,161,67,14,7,85,148,38,88,227,53,90,91,91,76,166,6,122,87,215,156,57,115,214,231,243,87,170,208,253,253,61,71,143,30,141,197,98,168,178,160,
24,84,61,142,29,59,182,103,207,245,43,43,94,88,99,205,192,192,246,190,190,158,108,13,43,126,75,5,11,109,179,53,141,143,143,163,166,130,210,140,141,141,217,237,54,88,227,148,134,173,86,75,50,41,46,46,46,
205,205,205,209,130,178,158,231,249,10,22,154,231,245,193,96,16,213,20,148,38,16,8,80,85,169,119,25,59,157,109,164,225,80,40,124,230,204,168,42,96,213,99,65,45,1,85,142,44,203,202,148,221,117,237,84,43,
142,180,219,61,157,167,97,0,64,109,200,152,236,48,121,206,100,138,43,216,149,5,0,248,173,156,106,147,169,129,222,73,195,36,230,238,238,78,155,109,173,227,158,214,144,125,38,121,227,216,1,80,237,214,152,
227,82,10,215,106,185,93,187,118,170,26,86,172,116,222,26,0,64,149,90,99,131,129,87,194,99,50,188,110,247,210,226,226,146,38,221,65,221,215,215,67,74,238,235,235,245,251,253,136,153,1,168,106,107,172,
64,26,62,121,242,180,162,97,77,186,131,250,204,153,179,180,146,172,180,205,102,195,225,3,160,6,100,236,241,120,138,173,172,236,165,99,0,192,198,50,142,70,113,101,24,128,26,151,177,50,192,195,100,50,21,
110,82,236,176,40,38,113,248,0,168,106,25,147,231,156,76,138,54,91,147,213,106,201,219,164,172,193,53,39,0,170,93,198,202,56,106,90,184,234,42,151,211,217,166,172,52,153,26,6,6,182,99,88,8,168,9,24,134,
145,101,185,30,254,105,169,49,213,110,247,180,193,192,147,65,238,234,234,164,87,182,191,125,238,92,37,111,48,138,199,227,130,32,224,238,8,80,26,170,36,84,85,234,218,26,43,144,92,243,198,108,205,206,206,
159,60,121,186,178,183,70,172,172,120,251,251,251,81,77,65,105,92,46,87,61,220,108,172,41,103,218,0,210,45,189,170,170,208,19,19,147,7,14,28,24,29,29,197,141,86,160,24,20,250,237,223,191,255,228,201,209,
122,248,179,156,195,225,172,185,66,135,195,17,179,217,60,52,116,253,194,194,2,92,107,80,24,18,119,118,118,30,60,120,208,231,11,78,78,186,235,226,47,239,222,61,84,163,69,239,233,233,114,185,122,5,193,84,
39,247,148,130,50,145,101,57,24,12,141,141,77,76,77,77,215,201,95,174,225,9,110,169,161,173,147,182,22,128,210,96,186,121,0,32,99,0,0,100,12,0,128,140,1,128,140,1,0,144,49,0,0,50,6,0,64,198,0,64,198,0,
0,200,24,0,0,25,3,0,32,99,0,32,99,0,0,100,12,0,128,140,1,0,144,49,0,144,49,0,160,102,169,240,236,31,233,233,119,24,70,253,80,63,51,11,169,229,116,58,39,89,38,44,155,147,42,88,67,73,182,32,51,91,100,185,
48,115,209,156,121,153,243,178,173,87,182,13,81,143,75,97,82,147,187,144,121,87,102,105,86,223,51,159,153,133,212,114,58,157,147,44,19,73,202,73,21,172,161,164,84,144,57,59,91,246,246,76,98,221,156,121,
59,151,242,126,59,43,219,122,101,219,16,245,184,20,38,53,185,11,153,36,172,49,0,96,171,88,99,213,44,224,76,0,0,107,12,0,100,12,0,128,140,1,0,144,49,0,0,50,6,0,50,6,0,64,198,0,0,200,24,0,240,140,168,225,
71,177,117,119,119,184,92,125,130,32,176,44,158,168,8,50,72,146,20,8,4,199,199,47,184,221,51,144,113,85,51,56,56,32,8,198,35,71,238,159,153,153,161,211,134,186,11,84,56,142,115,58,157,195,195,195,130,
96,26,25,57,11,167,186,74,105,110,182,219,237,141,135,15,31,118,187,221,208,48,200,67,20,69,170,24,135,14,29,114,56,168,162,52,213,181,53,222,187,247,58,173,150,43,241,205,217,217,121,183,187,50,143,129,
238,239,239,57,122,244,104,44,22,67,149,5,197,160,234,113,236,216,177,61,123,174,95,89,241,194,26,151,104,243,146,149,42,180,205,214,52,62,62,142,154,10,74,51,54,54,102,183,219,234,218,26,63,241,196,147,
197,54,237,218,181,211,100,106,168,96,35,199,243,250,96,48,136,106,10,74,19,8,4,168,170,32,54,94,223,18,146,134,61,30,47,124,90,80,229,200,178,172,204,160,0,25,231,227,116,182,167,3,227,57,212,18,0,106,
82,198,138,41,246,249,252,161,80,24,199,14,128,154,148,177,98,138,23,23,151,112,224,0,168,73,25,147,29,166,23,217,97,10,140,113,224,0,168,73,25,43,166,216,227,241,224,168,1,80,147,50,38,59,76,129,113,
44,22,155,157,157,199,81,3,160,38,101,140,168,24,128,218,150,49,207,243,100,138,147,73,17,50,6,160,86,101,220,218,218,162,152,98,82,50,14,25,0,181,39,99,173,150,83,101,140,227,5,64,77,202,184,189,189,
157,148,140,209,151,160,230,80,159,98,85,239,50,86,77,113,85,141,190,140,199,227,130,32,160,154,130,210,80,37,161,170,2,25,167,162,98,82,114,40,20,174,170,209,151,43,43,222,254,254,126,84,83,80,26,151,
203,85,15,55,27,107,54,156,196,103,118,118,190,10,47,20,159,63,63,121,224,192,129,209,209,81,248,249,160,24,60,207,239,223,191,255,212,169,209,122,248,179,156,195,225,172,185,66,135,195,17,179,89,24,26,
218,187,176,176,128,27,143,65,97,72,220,217,217,121,240,224,65,159,47,56,57,233,174,139,191,188,123,247,80,141,22,189,167,167,203,229,234,21,4,83,157,220,83,10,202,68,150,229,96,48,52,54,54,49,53,53,93,
39,127,185,134,39,184,165,134,182,78,218,90,0,74,131,233,230,1,128,140,1,0,144,49,0,0,50,6,0,50,6,0,64,198,0,0,200,24,0,0,25,3,0,25,3,0,32,99,0,0,100,12,0,128,140,1,128,140,1,0,144,49,0,0,50,6,0,64,198,
0,64,198,0,0,200,24,0,0,25,3,0,32,99,0,234,149,10,79,169,151,158,211,146,97,212,15,245,51,179,144,90,78,167,115,146,101,194,178,57,169,130,53,148,100,11,50,179,69,150,11,51,23,205,153,151,57,47,219,122,
101,219,16,245,184,20,38,53,185,11,153,119,229,209,39,234,123,230,51,179,144,90,78,167,115,146,101,34,73,57,169,130,53,148,148,10,50,103,103,203,222,158,73,172,155,51,111,231,82,222,111,103,101,91,175,
108,27,162,30,151,194,164,38,119,33,147,132,53,6,0,108,21,107,172,154,5,156,9,0,96,141,1,128,140,1,0,144,49,0,0,50,6,0,64,198,0,64,198,0,0,200,24,0,0,25,3,0,32,99,0,32,99,0,0,100,12,0,168,4,218,218,45,
122,119,119,135,203,213,39,8,2,203,50,56,145,64,69,146,164,64,32,56,62,126,193,237,158,129,140,171,154,193,193,1,65,48,30,57,114,255,204,204,12,157,54,212,93,160,194,113,156,211,233,28,30,30,22,4,211,
200,200,89,56,213,85,74,115,179,221,110,111,60,124,248,176,219,237,134,134,65,30,162,40,82,197,56,116,232,144,195,65,21,165,9,214,88,99,50,53,180,182,182,208,75,73,38,147,226,226,226,210,220,220,28,45,
84,176,208,253,253,61,71,143,30,141,197,98,168,178,160,24,84,61,142,29,59,182,103,207,245,43,43,222,186,182,198,164,222,93,187,118,170,26,78,137,94,75,238,74,27,173,228,121,190,130,133,182,217,154,198,
199,199,81,83,65,105,198,198,198,236,118,91,189,91,227,174,174,78,122,247,120,188,19,19,23,20,243,75,250,113,58,219,201,68,247,245,245,156,57,83,177,168,131,231,245,193,96,16,213,20,148,38,16,8,80,85,
169,235,216,216,106,181,144,237,37,207,228,220,185,113,213,133,86,36,157,118,182,77,168,37,160,202,145,101,89,153,150,172,174,157,106,34,26,205,143,63,43,27,21,3,0,46,65,198,62,159,159,76,49,217,100,122,
229,5,204,244,190,184,184,132,99,7,64,13,88,227,169,169,105,122,31,24,216,78,145,48,207,243,20,18,211,178,211,217,70,10,119,187,167,113,236,0,168,18,74,117,113,81,36,76,129,113,119,119,103,246,53,39,18,
240,236,236,60,14,28,0,53,19,27,23,6,195,22,139,165,178,87,155,0,0,151,32,227,174,174,206,109,219,92,36,90,178,192,143,62,250,56,189,135,66,97,10,149,119,237,218,73,14,54,142,29,0,213,46,227,244,37,226,
54,210,237,241,227,79,43,94,52,189,159,60,121,154,196,172,213,114,3,3,87,211,59,14,31,0,85,45,99,181,71,58,207,169,38,49,83,204,76,26,182,217,108,56,124,0,84,181,140,181,218,84,239,87,40,20,42,220,164,
92,76,70,132,12,64,181,203,56,153,76,106,210,99,185,10,55,41,43,113,103,2,0,213,46,99,191,223,175,73,247,114,41,35,171,21,148,75,199,244,78,158,182,199,227,193,225,3,213,140,250,104,216,45,79,209,235,
198,20,3,155,76,38,165,163,139,94,121,91,213,155,37,42,66,60,30,23,4,1,119,71,128,210,80,37,161,170,82,15,255,148,115,56,156,197,182,121,60,222,68,34,193,178,172,193,192,103,203,123,124,124,162,178,18,
162,198,37,28,14,45,44,44,160,166,130,18,236,220,185,179,177,209,86,15,163,149,54,152,54,96,113,113,169,10,135,79,159,63,63,121,224,192,129,209,209,81,196,231,160,24,60,207,239,223,191,255,212,169,209,
122,183,198,85,75,56,28,49,155,133,161,161,189,100,144,225,90,131,194,144,184,179,179,243,224,193,131,62,95,112,114,210,93,23,127,121,247,238,161,26,45,122,79,79,151,203,213,43,8,166,58,185,167,20,148,
137,44,203,193,96,104,108,108,66,185,183,167,30,168,225,9,110,169,161,173,147,182,22,128,210,96,186,121,0,32,99,0,0,100,12,0,128,140,1,128,140,1,0,144,49,0,0,50,6,0,64,198,0,64,198,0,0,200,24,0,0,25,3,
0,32,99,0,32,99,0,0,100,12,0,128,140,1,0,144,49,0,144,49,0,0,50,6,0,64,198,0,128,103,72,133,231,226,74,79,134,199,48,234,135,250,153,89,72,45,167,211,57,201,50,97,217,156,84,193,26,74,178,5,153,217,34,
203,133,153,139,230,204,203,156,151,109,189,178,109,136,122,92,10,147,154,220,133,204,187,242,204,4,245,61,243,153,89,72,45,167,211,57,201,50,145,164,156,84,193,26,74,74,5,153,179,179,101,111,207,36,214,
205,153,183,115,41,239,183,179,178,173,87,182,13,81,143,75,97,82,147,187,144,73,194,26,3,0,182,138,53,86,205,2,206,4,0,176,198,0,64,198,0,0,200,24,0,0,25,3,0,32,99,0,32,99,0,0,100,12,0,128,140,1,0,144,
49,0,144,49,0,0,50,6,0,64,198,0,0,200,24,128,122,68,139,67,80,38,122,189,238,198,27,247,89,173,230,45,255,79,125,190,192,35,143,60,26,143,39,112,210,33,227,173,134,203,213,55,54,118,246,193,7,31,220,242,
255,116,120,120,152,254,236,200,200,89,156,116,56,213,91,141,182,182,214,39,159,124,178,30,254,41,253,77,250,179,56,227,144,241,22,196,104,52,46,45,45,213,195,63,93,92,92,20,4,19,206,248,86,115,170,143,
28,249,250,157,119,126,226,233,167,79,100,175,124,197,43,110,255,227,63,126,141,178,76,155,238,186,235,75,11,11,139,165,55,209,126,212,175,255,232,71,63,185,251,238,47,169,201,221,187,175,185,243,206,
15,189,242,149,127,152,183,70,77,210,30,222,246,182,119,208,30,104,135,84,152,117,191,69,191,251,138,87,188,76,169,130,148,159,126,247,149,175,188,157,242,100,23,155,214,255,232,71,63,190,246,218,107,
212,157,40,5,163,194,80,145,74,28,4,157,78,155,76,38,235,161,78,136,162,200,178,104,223,235,32,54,38,149,222,120,227,179,21,109,147,108,222,251,222,119,221,121,231,135,255,242,47,63,16,12,134,74,108,162,
47,42,235,73,90,180,126,97,97,225,129,7,190,91,250,135,178,133,173,74,247,182,219,110,41,148,28,237,208,229,234,255,212,167,62,171,52,55,36,105,218,191,162,85,135,163,245,174,187,62,175,182,68,180,9,39,
30,212,187,83,77,226,36,37,144,173,83,84,65,250,36,133,152,76,166,91,111,189,165,196,166,236,61,208,214,135,30,250,9,153,196,103,240,235,36,224,215,190,246,53,121,94,31,105,59,221,118,124,92,117,25,168,
129,80,189,3,0,32,99,77,161,61,36,125,230,249,216,143,60,242,43,135,195,81,98,83,225,126,20,251,124,169,208,222,200,204,146,243,156,189,146,90,4,250,209,223,94,183,100,180,213,112,0,128,173,236,84,147,
37,12,133,214,81,96,91,91,235,249,243,69,55,229,53,4,100,159,239,187,239,191,202,9,203,11,99,233,187,239,254,242,39,63,249,119,164,103,53,27,25,252,249,249,252,200,60,59,138,46,108,137,178,3,117,0,234,
78,198,100,69,73,54,133,235,73,72,37,54,41,11,74,175,21,101,123,224,129,239,148,238,82,42,22,27,19,227,227,231,201,103,126,235,91,223,244,213,175,126,77,89,67,109,135,203,213,167,186,211,244,34,49,151,
112,218,243,20,174,74,250,109,111,123,7,234,4,168,11,167,90,233,187,202,235,1,166,208,148,124,221,18,155,46,202,248,19,164,204,215,189,238,141,27,118,110,149,134,90,1,65,16,84,161,146,176,233,71,29,14,
92,237,4,144,113,217,214,152,68,248,182,183,221,161,200,149,116,75,54,150,236,225,67,15,253,164,196,166,203,91,110,250,161,175,126,245,191,212,62,103,114,176,73,201,239,125,239,187,242,90,16,196,198,0,
78,117,134,236,75,184,228,121,146,132,130,193,160,186,50,237,163,126,92,233,178,42,177,169,252,72,88,185,234,155,183,38,207,227,37,233,210,139,76,189,146,252,216,199,62,241,218,215,190,38,187,156,84,18,
156,96,80,15,48,187,119,15,225,40,148,195,240,240,173,159,250,212,39,235,97,4,8,199,113,239,123,223,251,126,240,131,135,112,210,183,178,83,93,159,68,34,145,150,150,150,122,248,167,173,173,173,225,112,
4,103,28,50,222,130,204,207,47,238,217,179,167,30,254,41,253,205,133,133,37,156,241,45,24,27,131,241,241,137,231,62,119,223,208,208,214,143,65,252,254,192,35,143,252,26,103,28,177,49,0,0,78,53,0,0,50,
6,0,50,6,0,64,198,0,0,200,24,0,0,25,3,0,25,3,0,32,99,0,0,100,12,0,128,140,1,128,140,1,0,53,65,181,223,26,241,194,91,111,106,111,79,205,170,233,245,174,126,247,251,15,201,178,140,115,6,64,141,201,152,231,
245,6,94,175,44,224,108,1,80,147,50,150,36,73,94,91,128,29,6,160,54,101,172,33,241,174,57,210,144,49,0,181,41,99,249,162,124,33,98,0,106,87,198,178,210,173,133,206,45,0,106,215,169,150,215,156,106,168,
24,128,90,119,170,97,144,1,40,70,181,15,255,144,37,105,205,32,203,50,203,178,12,195,224,156,1,80,51,214,88,171,229,108,77,141,13,70,163,98,132,45,22,225,229,47,189,141,22,68,81,140,197,227,193,96,216,
187,234,91,94,241,120,60,171,137,68,18,39,18,64,198,213,133,195,209,210,215,219,213,217,209,102,49,11,170,47,77,166,184,177,209,82,152,57,16,8,185,167,103,199,206,79,46,47,123,112,58,65,125,82,93,19,220,
118,119,57,119,238,216,222,222,126,201,15,70,36,169,79,78,78,31,63,49,66,198,25,39,21,192,26,87,134,102,123,211,245,123,118,117,56,83,195,167,53,20,15,23,16,79,36,166,167,231,200,157,150,36,153,227,56,
3,175,111,104,48,10,2,189,25,83,173,145,70,211,219,221,209,213,209,246,244,201,51,79,159,56,35,161,51,12,64,198,155,234,15,48,204,174,193,171,175,221,189,131,196,153,39,223,80,40,156,82,172,129,167,101,
159,63,248,243,99,249,143,50,208,235,116,22,171,185,189,173,149,204,120,115,179,141,225,184,107,175,29,108,105,105,62,246,200,99,145,72,20,103,23,212,9,156,195,225,172,224,207,243,60,127,224,119,110,24,
216,222,207,230,118,65,199,98,241,19,39,206,60,242,203,39,72,156,74,132,76,178,60,123,110,34,239,235,162,36,133,195,145,197,197,229,115,99,19,243,243,139,58,157,182,209,106,54,155,77,29,29,109,179,115,
11,241,120,2,39,24,192,26,95,89,204,130,233,166,155,246,53,53,90,37,57,199,12,187,221,115,143,255,230,196,218,35,145,25,141,178,85,150,165,210,123,91,88,92,166,151,61,229,156,15,182,181,181,220,114,243,
141,15,253,248,88,8,79,6,4,117,64,197,174,27,155,205,194,45,207,127,110,147,213,186,54,194,227,226,235,169,227,167,127,246,139,95,101,30,107,158,189,117,67,215,130,227,4,83,67,52,26,147,68,201,44,8,7,
246,239,211,106,57,156,99,0,107,124,69,48,26,13,55,31,120,54,73,46,123,96,22,45,63,250,216,83,99,227,147,185,121,47,142,169,222,72,199,173,45,246,27,134,174,85,47,74,209,183,236,182,198,103,237,221,253,
203,71,159,196,105,6,176,198,151,59,28,231,184,253,55,14,153,205,164,97,41,251,245,171,95,63,89,160,225,180,136,215,50,148,146,177,163,181,249,121,55,237,179,90,133,188,125,246,247,117,117,119,57,113,
154,1,100,124,153,185,254,186,193,230,102,219,197,17,150,107,175,19,39,207,142,159,159,42,204,156,157,167,24,60,175,127,246,190,235,180,156,54,111,159,202,235,250,235,118,97,230,16,0,25,95,78,186,58,219,
175,234,239,206,179,153,115,115,11,79,159,60,179,254,23,46,230,209,20,239,226,234,235,237,106,48,242,121,251,84,95,70,131,158,50,224,76,3,200,248,242,64,86,241,250,61,59,229,92,98,241,248,99,79,156,40,
246,21,229,126,99,133,226,30,181,93,46,73,187,163,25,103,26,108,97,54,181,139,107,112,231,54,131,129,207,19,228,169,211,231,130,161,112,81,25,203,154,13,187,184,180,90,174,116,228,172,211,235,112,166,
1,100,124,25,176,90,204,253,61,157,114,238,204,120,129,96,104,108,124,170,196,183,20,215,56,189,80,52,79,48,16,178,55,53,150,216,73,20,35,186,0,156,234,203,194,213,87,247,105,88,38,29,227,102,94,103,206,
78,136,162,88,74,198,23,115,150,176,198,83,211,115,121,187,205,123,77,207,46,224,76,3,200,248,183,69,16,76,29,78,71,94,200,26,14,71,220,211,179,165,191,40,107,52,27,198,198,243,11,203,243,243,75,197,2,
227,213,85,255,212,212,44,206,52,128,140,127,91,122,187,59,24,13,147,215,139,60,57,53,155,76,138,27,200,88,205,95,92,198,180,233,137,223,156,244,251,131,133,29,213,161,96,248,209,199,142,39,69,17,103,
26,64,198,191,21,28,199,117,116,228,155,98,73,146,166,167,231,202,248,246,198,61,213,68,36,26,59,246,200,19,179,115,11,57,251,159,153,255,197,177,199,2,129,16,78,51,216,218,108,70,23,151,221,214,104,52,
232,243,238,109,88,245,5,252,101,8,76,145,164,166,140,249,244,34,145,232,175,126,125,188,169,201,210,104,49,83,94,175,207,239,243,5,112,130,55,19,81,76,138,201,164,44,137,12,147,154,173,229,242,238,92,
78,198,251,19,201,77,191,228,192,36,24,77,152,209,4,89,46,196,105,37,78,203,209,139,229,234,81,198,109,142,230,66,17,46,46,174,148,51,211,101,198,14,151,55,19,128,215,235,167,23,20,181,153,196,99,81,89,
78,118,56,157,215,94,187,251,154,107,174,233,119,245,55,53,217,12,6,3,203,94,182,249,15,233,220,255,235,63,254,227,45,223,250,239,78,222,152,220,196,89,21,153,244,79,147,146,99,100,120,24,230,2,199,60,
197,177,39,116,186,176,222,160,215,234,171,103,130,199,43,46,99,250,171,118,187,181,80,177,75,203,222,242,78,32,166,155,175,82,82,67,119,34,161,54,71,203,43,255,228,53,183,220,122,235,192,192,128,86,123,
5,171,83,99,99,99,84,146,72,78,155,223,207,193,200,26,131,70,211,33,203,61,162,124,19,35,173,196,196,167,180,177,7,245,186,89,158,188,76,67,93,200,184,161,193,216,96,52,230,61,72,45,153,76,250,3,193,114,
190,158,234,168,74,127,23,243,242,84,21,209,72,168,189,173,245,29,31,253,192,240,139,95,76,134,119,83,60,246,138,245,83,42,183,201,74,105,179,76,80,204,246,130,184,252,220,68,236,88,60,241,117,62,26,53,
10,58,78,187,197,101,108,49,155,168,53,203,187,234,27,12,133,99,177,120,121,71,144,190,43,105,202,184,81,17,108,82,157,150,164,68,44,252,246,183,189,249,77,111,126,179,201,100,170,199,46,0,77,42,90,166,
208,255,214,184,180,39,25,187,71,76,62,105,20,42,107,150,175,184,140,205,66,131,92,240,76,211,204,172,0,229,184,110,107,163,184,170,69,198,6,3,79,81,95,56,92,143,35,195,146,201,68,147,197,244,153,175,
220,117,195,13,55,212,121,115,38,165,197,220,40,201,239,141,36,191,37,6,30,48,137,70,190,98,141,218,21,191,224,212,208,96,40,188,235,168,252,185,117,212,251,141,53,27,77,226,179,57,232,180,218,161,235,
118,52,219,27,235,176,226,38,226,177,171,250,186,190,253,192,253,208,112,230,152,48,154,132,70,243,234,152,248,186,96,40,18,173,216,165,205,43,110,141,121,94,95,24,214,70,34,177,75,49,198,74,108,92,21,
167,205,110,183,154,132,134,68,178,238,198,147,36,19,137,237,87,245,222,123,223,87,173,86,43,212,91,104,150,95,18,151,98,76,248,27,44,107,212,27,183,160,53,86,110,63,42,188,57,241,82,172,177,210,91,93,
29,58,102,24,185,244,36,6,91,52,30,110,106,20,190,116,207,87,160,225,245,143,79,90,201,175,136,139,207,13,5,19,201,196,22,148,49,199,177,133,83,114,36,47,201,154,109,56,253,199,166,158,177,186,211,176,
38,117,101,56,244,133,47,124,190,165,165,5,138,45,161,228,132,172,121,93,92,180,70,130,155,127,113,244,138,203,152,73,61,4,162,0,177,220,64,87,253,134,44,73,85,162,226,84,97,234,73,201,209,72,232,205,
111,190,227,186,189,215,67,171,27,196,29,169,30,47,205,107,99,137,104,124,179,167,85,214,94,249,122,191,206,112,232,75,144,65,102,248,199,6,25,117,58,173,94,167,99,89,134,84,22,79,36,46,245,49,139,6,3,
175,211,114,36,208,88,44,94,194,89,80,238,210,144,46,49,82,215,83,217,120,125,50,145,140,22,185,204,70,161,7,207,235,89,134,73,138,34,21,64,170,154,110,121,250,195,109,173,246,183,188,237,173,80,105,57,
68,24,205,13,73,105,103,52,50,174,51,92,246,225,168,149,148,177,180,158,140,203,31,197,38,107,54,152,253,131,116,219,218,98,163,170,102,181,154,56,110,109,176,171,40,138,62,127,104,97,209,67,47,41,215,
140,211,79,15,108,239,73,36,197,177,113,119,250,235,172,179,189,185,163,189,197,100,90,235,153,32,13,175,120,124,238,153,5,191,63,213,241,184,227,234,94,117,147,38,221,83,77,229,113,245,119,116,119,57,
178,119,123,250,204,68,56,28,181,152,77,174,254,78,250,238,242,242,218,19,225,12,188,190,175,215,233,104,181,209,15,145,56,151,87,188,23,38,231,130,161,136,90,152,102,123,99,123,155,189,169,209,172,22,
158,164,62,191,176,226,118,47,36,146,149,127,224,107,52,18,126,203,251,223,125,249,175,15,211,65,20,69,38,61,234,139,66,44,166,236,225,95,82,36,34,235,180,140,94,175,182,235,180,134,209,233,228,244,224,
16,218,143,84,48,69,4,163,229,88,163,49,149,159,97,164,112,152,242,168,95,79,221,64,19,137,112,13,13,154,172,10,41,69,163,26,134,101,13,60,109,74,213,15,62,181,192,112,92,246,143,166,190,24,141,114,180,
91,150,149,227,241,212,143,178,12,75,251,161,252,178,102,56,46,126,58,17,53,240,13,91,71,198,98,82,148,11,230,124,79,5,204,151,104,204,215,53,224,22,139,105,251,85,221,102,33,117,188,130,193,112,40,28,
37,1,147,30,76,13,6,18,6,189,58,156,45,231,198,166,124,254,80,182,140,155,155,27,227,177,196,88,106,186,108,126,112,71,63,125,157,12,224,226,146,151,44,184,86,171,165,100,107,75,19,189,206,141,187,167,
103,22,83,17,64,86,8,192,177,138,53,206,89,169,22,47,253,244,25,97,249,226,56,83,42,192,174,157,46,138,43,150,87,86,41,63,109,106,105,110,178,53,89,199,206,187,73,168,180,208,223,235,164,54,130,244,63,
51,187,164,104,155,100,111,183,91,123,186,218,154,109,214,167,79,142,69,99,241,202,202,216,106,17,94,242,210,151,94,126,255,115,102,214,119,248,62,251,7,223,79,206,207,242,199,62,110,255,192,251,217,244,
35,126,54,108,209,109,47,124,65,112,114,50,58,113,65,109,2,172,55,237,79,44,44,166,36,68,49,252,220,156,229,134,103,229,7,246,11,11,129,223,60,69,58,36,189,53,221,242,252,216,204,76,100,108,92,81,190,
206,102,19,158,127,243,234,47,142,82,195,175,40,89,138,199,45,251,110,144,98,177,224,241,167,173,55,62,71,12,133,130,79,159,160,133,248,252,124,116,114,138,190,165,104,88,107,177,152,111,126,158,255,151,
191,74,250,253,124,71,71,243,203,94,146,244,7,150,191,243,61,250,98,140,101,7,69,169,53,30,243,111,37,25,147,54,244,122,109,161,3,92,190,140,21,115,90,24,27,147,29,35,83,73,214,120,102,118,113,122,118,
41,111,60,6,41,185,179,163,181,205,97,223,189,235,170,211,103,46,144,129,205,212,161,68,50,22,143,243,122,221,181,215,108,35,85,159,26,57,191,188,226,83,141,54,173,33,13,111,115,117,186,250,58,200,51,
31,61,55,149,247,163,131,59,250,206,79,204,44,45,175,22,43,173,226,18,147,104,175,25,116,205,205,175,92,152,154,83,60,124,106,188,58,157,173,189,61,237,100,252,87,60,126,218,15,73,247,248,137,115,158,
220,123,57,40,127,119,87,91,95,79,251,85,174,206,147,167,207,87,80,195,98,50,113,243,109,183,89,44,150,203,239,170,199,227,201,185,121,197,155,210,245,244,48,92,89,247,12,137,145,72,231,187,223,17,158,
153,25,121,253,155,180,86,11,233,144,53,153,118,220,251,149,179,111,127,103,203,203,111,167,99,191,248,205,251,119,124,245,63,242,190,181,250,139,99,79,255,238,237,92,131,145,78,237,85,159,251,244,202,
15,126,56,246,238,247,106,173,86,42,131,177,191,111,240,27,247,141,188,254,141,75,223,58,194,153,5,57,145,212,54,54,14,126,251,107,75,223,188,255,204,47,126,214,243,145,15,134,207,140,158,121,227,27,122,
62,244,126,250,238,241,23,189,148,163,182,131,97,40,102,51,244,244,12,220,243,197,199,247,62,135,124,179,93,71,190,217,48,176,61,213,228,61,247,198,209,55,191,157,105,48,146,113,31,74,36,127,36,38,181,
155,53,72,243,138,255,76,60,145,108,40,48,164,134,178,39,142,150,139,196,198,228,190,146,111,76,171,73,162,235,42,138,44,51,41,208,187,26,184,122,91,247,142,171,123,158,58,49,70,230,250,98,183,153,204,
81,147,185,163,47,17,79,156,56,125,62,239,137,109,244,115,228,138,147,125,38,17,146,181,244,120,252,217,206,45,147,190,224,84,34,40,72,123,139,162,94,175,35,59,127,254,194,44,217,243,76,45,20,165,73,247,
124,40,28,73,138,100,204,69,178,246,36,242,117,189,140,41,247,124,179,205,66,198,188,178,166,56,17,143,61,255,150,231,95,153,158,79,70,49,167,100,223,26,223,242,166,178,59,75,69,207,15,126,216,114,199,
27,72,114,169,179,24,143,155,158,53,196,176,156,255,255,30,105,121,229,203,24,137,13,159,58,125,254,131,31,145,162,177,166,23,60,223,60,180,119,250,51,159,163,31,138,94,184,144,242,144,19,9,163,171,223,
208,221,101,25,218,187,230,99,211,201,74,187,226,93,239,126,199,202,247,31,164,29,138,225,80,215,123,222,73,150,86,12,6,233,247,200,180,202,9,170,27,76,114,213,103,127,201,176,237,214,23,120,254,247,71,
156,32,172,121,213,145,40,185,232,173,127,248,42,190,179,99,228,79,238,104,216,230,34,163,205,166,205,53,237,116,80,148,127,40,38,182,142,140,35,145,152,197,220,80,208,159,84,182,140,211,214,45,29,99,
103,123,182,44,89,75,218,56,50,58,69,254,106,137,175,147,171,76,239,219,175,234,218,214,223,121,252,228,185,180,157,148,147,98,146,220,233,104,52,126,252,196,88,177,248,115,213,23,156,157,91,166,168,149,
92,92,114,128,243,74,84,172,139,78,177,198,12,203,208,47,146,159,156,173,97,21,178,252,202,2,237,191,68,201,87,188,254,134,134,10,223,61,67,78,211,206,157,131,87,68,197,198,103,50,70,130,209,233,87,143,
254,95,231,95,127,208,184,237,170,240,233,17,178,138,77,55,223,20,153,184,16,155,157,77,217,115,45,41,118,114,250,159,191,144,140,250,169,117,48,244,245,78,125,230,115,20,171,50,122,29,185,220,20,223,
154,159,53,68,186,53,110,223,102,236,237,137,92,152,84,90,19,90,35,236,185,182,249,229,183,207,31,190,207,216,215,231,124,235,29,41,191,47,183,149,86,212,222,243,193,247,175,254,236,231,107,15,223,86,
186,107,24,198,114,227,179,23,191,241,173,185,123,239,209,154,172,166,193,65,106,47,232,235,162,172,105,151,101,61,85,173,205,122,204,193,21,151,113,56,18,45,172,244,13,70,94,49,107,151,208,197,149,149,
153,156,94,106,8,72,93,165,53,172,42,57,29,148,54,146,63,172,168,90,49,140,103,206,77,150,238,67,90,88,242,180,57,108,77,141,66,182,140,213,9,119,75,88,99,242,153,201,228,146,111,252,219,5,35,73,169,210,
215,216,154,154,26,91,29,173,185,93,76,82,244,137,223,132,31,249,149,228,247,147,165,106,216,255,59,166,91,111,73,173,14,134,66,15,254,208,252,251,7,179,251,138,2,223,186,223,244,194,91,217,180,79,46,
71,34,190,251,190,22,59,61,66,123,208,182,52,107,59,58,214,114,38,18,129,7,190,35,220,254,82,38,253,20,107,10,149,253,247,125,45,122,234,180,38,153,36,135,217,244,162,219,26,110,218,159,233,206,212,235,
195,103,207,198,23,151,26,111,124,78,232,201,227,26,157,182,241,192,126,223,47,142,74,82,60,181,55,242,146,180,90,46,29,99,179,60,207,176,172,214,98,102,24,86,195,50,202,140,140,182,219,94,224,249,159,
31,153,118,238,176,60,231,217,225,209,179,169,190,46,142,163,184,58,120,242,116,239,135,254,106,225,190,175,57,223,250,38,41,26,13,60,254,27,214,144,221,202,48,244,187,222,159,60,220,248,188,155,90,95,
253,170,185,123,238,101,245,124,246,1,209,59,90,57,173,129,107,48,69,206,157,83,130,103,137,209,88,100,217,34,137,155,54,109,197,21,239,19,15,133,34,133,163,184,120,94,207,151,55,119,116,214,32,46,57,
19,187,182,54,165,230,232,153,93,42,179,12,100,21,105,15,142,150,38,69,135,140,134,9,135,35,193,224,6,23,247,34,225,24,105,137,218,139,92,23,186,228,172,96,233,173,100,141,199,39,102,46,67,95,110,165,
175,78,55,219,237,60,207,231,68,167,94,111,244,55,79,9,47,188,205,246,238,119,52,190,233,13,254,175,125,35,250,196,147,138,74,67,255,251,227,188,200,135,214,72,233,9,94,196,21,207,252,219,223,33,133,66,
77,255,239,173,246,15,188,207,52,252,162,216,200,25,41,229,184,166,12,29,101,35,245,166,106,191,223,63,255,103,239,18,125,190,166,183,191,197,254,193,247,11,47,123,41,41,223,251,175,119,103,187,226,162,
63,176,122,244,24,249,204,178,152,228,157,237,20,148,174,254,252,40,179,145,53,162,95,209,218,109,228,244,46,124,237,155,164,82,251,139,135,53,170,193,213,233,220,159,249,172,222,217,222,123,231,135,219,
254,244,245,83,255,240,201,248,220,28,147,219,41,75,78,56,5,216,243,135,255,179,239,163,31,209,53,55,203,107,173,127,106,15,222,159,253,130,252,237,230,87,188,44,233,243,41,26,214,164,135,103,242,178,
198,178,137,87,13,175,184,140,201,26,39,147,201,188,91,35,200,18,155,5,99,121,149,89,202,123,20,27,207,235,26,140,250,64,48,68,94,113,217,101,136,81,126,147,137,215,235,181,107,19,117,149,113,163,133,
72,150,39,22,227,88,166,64,198,197,135,127,164,116,44,205,206,45,197,227,201,203,161,226,10,91,99,147,144,127,157,137,179,219,41,148,213,15,108,103,5,65,215,221,101,186,229,230,216,153,51,107,141,171,
209,80,224,57,27,52,233,9,64,60,159,253,2,25,85,219,187,254,92,127,149,75,219,230,48,92,127,157,253,47,222,201,94,188,136,149,202,150,62,194,43,159,249,188,97,239,245,182,247,188,83,201,102,124,246,13,
109,119,125,62,242,235,199,162,143,61,158,85,97,217,213,159,254,156,220,96,138,81,133,107,174,145,69,41,248,212,113,86,167,223,176,71,173,97,199,128,214,106,9,252,250,49,239,207,126,110,217,247,44,82,
181,156,190,214,192,241,122,242,207,231,190,252,31,61,31,120,95,210,179,58,127,223,127,113,235,93,93,163,159,152,250,187,127,212,181,182,116,188,245,14,10,161,149,70,128,228,189,244,237,35,100,216,119,
220,119,200,246,187,183,137,129,64,182,174,120,121,11,201,152,42,116,40,20,45,156,179,210,106,21,202,171,206,154,188,153,49,141,188,158,146,129,192,165,13,148,241,251,195,180,43,163,226,185,149,61,64,
91,76,74,121,57,101,121,131,91,38,105,107,50,241,76,110,156,160,178,181,52,91,123,186,28,87,95,213,57,56,208,219,238,176,167,126,189,178,20,191,186,159,184,48,25,62,246,72,148,36,164,47,37,33,242,90,201,
198,38,221,110,203,107,95,147,227,155,231,221,226,198,177,100,156,19,231,206,89,95,247,71,57,95,215,106,45,175,254,131,224,131,255,163,150,134,188,101,255,163,143,145,126,140,219,183,91,159,183,63,124,
102,52,190,184,200,108,244,20,107,41,158,104,188,233,64,228,252,68,100,108,108,245,225,159,113,166,6,225,154,93,114,60,182,230,51,27,12,51,255,246,69,138,17,102,255,253,75,73,159,119,221,110,115,10,122,
131,99,167,103,238,250,247,174,247,188,203,208,211,35,165,47,4,82,78,209,239,63,253,234,63,78,44,45,15,126,253,190,212,5,170,72,36,19,13,110,226,12,63,155,49,208,100,213,23,44,124,68,154,197,220,160,45,
227,50,67,246,87,214,162,121,157,54,53,214,42,126,105,3,208,41,63,125,75,121,106,121,246,222,54,52,137,133,57,165,226,238,174,210,230,92,90,231,132,150,107,119,216,174,25,236,163,87,111,119,27,133,241,
44,5,108,73,106,10,146,21,159,240,36,28,92,231,161,60,145,95,62,186,244,129,143,80,64,155,156,153,145,163,49,77,233,145,60,28,75,30,53,99,48,148,30,224,145,210,131,199,203,54,52,40,151,127,115,186,217,
186,58,229,172,187,211,105,63,177,233,233,232,196,132,253,37,191,107,125,206,115,188,15,255,76,78,13,185,99,74,55,64,169,230,224,134,33,93,75,203,174,251,191,233,250,212,63,80,210,250,156,125,210,197,
123,24,88,94,31,157,156,28,123,207,251,150,191,243,61,214,80,116,160,11,199,25,221,159,254,44,57,243,93,127,241,46,233,162,92,89,99,67,248,204,217,83,191,247,106,18,118,207,71,63,76,241,154,18,89,72,169,
233,187,54,79,199,155,209,33,238,245,5,156,237,246,130,131,194,90,173,166,21,143,191,156,216,120,205,14,94,60,65,207,96,56,164,178,31,230,18,195,78,185,32,18,222,96,170,221,181,47,148,91,182,102,187,181,
179,163,69,167,229,168,165,155,153,93,14,4,35,234,24,210,214,150,198,238,78,71,101,101,188,188,188,18,139,197,178,195,99,242,111,125,255,113,47,5,174,186,222,158,181,38,45,145,184,104,125,52,154,188,57,
244,168,153,22,37,182,209,74,145,115,170,131,183,248,224,68,58,157,172,197,146,186,192,19,79,48,185,157,38,226,242,10,147,61,73,16,195,80,168,227,249,241,195,237,175,127,45,185,229,190,163,199,88,189,
78,46,28,60,155,117,6,40,148,213,59,90,133,107,119,235,26,27,155,95,113,123,234,12,37,69,235,129,253,76,150,43,78,70,126,254,240,125,180,166,196,21,108,10,125,169,5,153,250,228,63,247,126,244,67,193,39,
159,74,13,246,162,157,39,146,156,89,8,60,254,196,196,71,238,116,125,242,239,249,14,103,124,97,129,165,156,140,38,192,110,158,140,55,195,26,135,195,177,96,40,92,56,121,64,179,205,92,158,0,115,98,227,164,
40,82,146,227,46,237,24,81,136,75,223,18,149,145,36,202,195,100,158,105,128,90,250,235,229,7,180,157,206,230,222,238,86,210,201,233,209,201,115,227,51,30,111,32,123,28,120,186,39,191,194,119,53,123,189,
222,165,165,156,126,196,208,143,31,38,247,120,77,195,105,133,40,226,36,69,73,225,176,148,53,191,26,25,225,196,249,9,18,54,215,212,196,181,182,250,191,117,127,110,216,108,204,49,227,162,200,53,90,181,237,
109,193,239,255,32,175,12,129,35,255,221,112,243,77,217,210,100,181,90,223,207,143,242,93,93,98,48,20,58,61,194,232,55,8,140,201,78,146,134,89,163,225,169,91,94,244,235,193,235,30,189,250,154,209,55,191,
221,124,253,30,190,179,83,74,36,178,220,102,3,179,209,40,104,10,155,231,190,124,79,204,61,221,243,193,247,43,21,146,26,8,106,200,56,193,228,253,241,79,68,127,64,75,109,150,36,115,178,38,192,48,62,142,
219,82,50,78,181,235,43,254,194,254,106,147,201,104,106,224,203,236,169,86,77,28,185,199,148,50,92,226,147,199,13,169,137,178,201,7,76,108,108,81,55,176,189,27,152,227,50,119,222,212,40,56,90,27,125,190,
208,232,185,233,80,40,90,157,61,213,241,132,56,114,122,36,199,121,235,236,136,252,234,81,153,90,82,81,140,157,56,25,252,222,15,40,166,141,157,60,69,178,52,236,123,214,242,223,124,130,140,39,89,84,90,227,
249,252,191,200,241,184,210,222,217,222,243,206,192,253,15,248,14,29,22,189,94,50,95,201,133,69,255,215,191,41,122,60,107,127,52,22,83,38,133,72,101,251,239,239,5,190,117,68,242,7,40,91,194,61,189,244,
225,143,114,45,205,13,207,127,94,78,19,192,243,193,19,39,197,96,48,248,228,241,164,215,203,108,52,107,52,181,53,77,183,220,28,57,123,46,240,196,19,241,153,217,248,220,60,73,142,246,111,221,119,131,210,
67,126,9,125,5,90,109,194,227,153,252,251,127,50,94,229,82,70,137,180,191,229,141,20,117,199,87,151,27,6,6,24,94,159,244,7,24,106,185,52,154,57,134,137,111,226,60,123,155,244,75,100,106,218,90,155,180,
5,93,17,45,205,141,161,169,133,210,61,70,107,51,99,94,244,162,163,209,120,34,33,154,76,6,229,102,166,178,218,42,150,53,53,24,98,177,36,125,151,172,92,170,159,250,153,198,198,233,27,21,139,199,198,233,
173,27,250,212,84,6,58,26,244,47,38,166,22,138,253,5,57,235,47,87,10,173,94,255,211,135,127,114,235,109,183,170,107,44,175,250,61,239,191,222,189,252,145,143,177,102,179,174,191,215,242,71,175,14,253,
240,127,248,129,129,84,195,244,150,59,124,247,220,75,74,214,232,116,156,197,108,125,237,107,244,253,253,154,116,85,38,51,219,118,247,191,172,126,233,158,229,143,254,45,137,144,53,11,186,158,30,227,129,
223,81,206,141,97,104,175,114,169,70,235,112,56,254,249,159,124,247,28,94,186,243,111,25,142,37,109,27,158,125,131,229,247,15,22,6,210,137,229,149,192,19,191,241,61,242,136,114,253,80,17,88,182,139,180,
118,39,67,218,57,34,59,76,50,94,254,254,131,116,46,73,105,140,172,73,172,120,2,79,62,101,127,241,139,102,191,248,229,84,182,220,240,158,10,147,142,228,229,156,5,50,173,233,221,115,130,176,244,173,251,
59,222,122,135,176,231,90,106,32,180,86,235,224,183,191,238,248,222,247,154,110,190,153,60,109,242,186,201,63,167,90,126,154,163,230,69,183,213,100,44,138,210,210,178,175,205,209,148,183,222,106,105,104,
48,242,225,226,115,250,168,195,63,212,147,68,187,242,250,130,246,38,115,163,197,228,89,45,107,150,220,198,212,205,79,236,210,138,79,25,71,185,225,16,142,2,107,156,31,30,111,240,149,141,116,172,211,105,
121,94,231,93,13,150,188,35,178,242,214,88,171,213,61,252,240,79,201,236,9,130,160,90,66,178,153,82,48,148,26,59,145,238,246,55,191,236,37,153,179,249,134,215,91,200,80,71,162,108,250,74,149,126,219,85,
25,119,212,102,179,191,255,189,84,239,83,91,179,238,130,32,21,101,15,198,228,236,118,219,95,190,155,220,84,114,156,138,222,44,145,234,71,210,44,126,227,219,225,145,51,107,35,49,88,54,54,59,151,58,77,138,
87,204,178,9,143,55,74,46,125,170,186,72,250,182,54,178,189,222,31,63,188,214,169,206,164,218,209,165,7,190,211,114,251,75,72,159,225,209,209,84,104,160,42,153,101,98,110,55,197,183,12,167,77,47,44,42,
11,212,112,40,59,39,199,91,12,135,47,124,252,239,251,254,230,163,164,216,233,207,125,193,232,234,111,121,249,203,34,227,231,207,127,240,175,211,77,52,19,209,104,30,215,105,55,115,214,91,102,247,238,161,
77,170,19,28,123,245,182,142,66,131,28,8,70,206,95,40,106,144,251,123,29,202,21,230,72,36,126,118,124,86,245,144,183,187,218,19,73,241,220,248,220,134,19,137,208,47,110,119,57,73,198,244,245,88,44,65,
71,121,199,213,157,201,132,168,238,173,4,87,245,183,147,222,70,70,221,170,97,164,22,161,167,171,197,61,179,236,241,174,211,130,152,205,198,254,30,199,204,236,202,178,167,212,0,30,163,145,202,239,92,92,
242,205,45,20,157,115,191,217,102,118,182,219,159,62,117,161,178,74,142,134,131,127,251,241,143,189,234,15,94,165,169,52,31,121,247,187,119,127,249,222,46,163,73,100,214,92,154,28,243,123,241,134,39,213,
26,107,210,183,52,165,70,76,106,185,212,13,140,169,219,15,153,236,102,146,172,52,201,59,117,73,140,34,228,236,93,145,107,32,167,186,238,148,59,19,215,22,168,6,100,77,148,77,63,196,26,141,244,46,197,98,
169,155,26,187,187,201,217,78,250,124,20,96,27,36,249,73,45,251,41,139,192,111,226,29,78,155,119,103,115,82,148,230,23,87,11,35,100,193,100,32,109,148,31,27,43,126,245,194,146,79,167,229,186,59,155,75,
223,156,77,91,41,143,86,203,146,87,31,139,37,46,217,208,173,55,101,143,124,241,194,85,89,93,219,235,30,138,212,181,36,153,26,136,18,121,40,106,144,171,96,50,80,222,104,186,251,223,238,138,68,34,154,106,
67,202,233,104,36,197,202,89,19,188,165,4,150,238,73,78,93,0,18,69,178,159,133,23,198,196,80,36,53,155,20,253,181,220,51,150,238,48,79,141,238,204,89,200,29,183,187,214,46,80,91,160,79,117,110,71,47,92,
16,67,33,50,206,154,244,229,144,31,234,57,157,110,83,199,195,179,155,249,99,164,165,96,40,90,168,228,118,71,163,174,180,48,10,132,183,184,184,234,93,13,153,26,248,190,158,86,50,110,197,140,94,127,79,43,
229,73,36,146,203,43,254,75,242,123,139,9,62,158,72,166,58,231,138,247,204,149,211,64,80,121,232,56,8,130,129,180,90,184,85,175,215,82,177,45,102,163,40,86,94,198,228,188,204,204,46,124,249,75,95,170,
58,25,147,44,179,149,73,173,121,118,131,78,229,206,74,174,115,25,137,50,80,248,157,122,207,223,196,92,220,85,206,66,65,43,144,249,34,237,68,191,118,165,202,40,107,30,215,178,39,12,155,58,245,199,102,203,
152,106,248,204,156,135,106,103,158,140,201,227,237,104,183,109,164,98,57,47,102,158,38,223,117,197,111,52,232,92,189,142,174,14,59,153,116,210,45,153,56,122,167,101,90,67,235,13,6,29,57,237,203,43,129,
88,246,232,200,75,184,110,156,47,75,242,237,233,69,50,166,166,135,162,122,3,175,35,111,162,181,197,218,223,219,170,220,236,81,230,188,153,243,11,171,178,36,247,116,54,219,26,5,178,237,233,90,199,80,201,
105,183,219,250,219,232,0,45,45,251,171,228,65,95,134,6,211,191,253,203,93,39,158,62,161,1,27,245,51,5,88,205,125,188,206,160,111,216,252,159,222,84,200,179,157,155,247,58,219,155,10,124,72,222,209,106,
93,88,244,21,181,135,242,58,118,111,110,97,149,204,26,133,145,100,187,232,149,151,33,20,138,174,120,131,36,51,159,63,156,111,48,229,114,27,158,194,225,31,212,124,116,118,216,108,77,2,189,50,242,142,198,
213,59,177,202,217,119,56,18,163,0,155,68,219,222,214,216,166,105,164,166,141,77,43,153,188,188,249,69,223,138,39,64,197,182,53,85,203,163,85,180,124,195,59,254,236,207,143,124,231,129,166,166,38,200,
181,72,191,155,70,39,107,238,225,185,21,163,160,223,244,6,184,2,143,144,242,250,66,228,55,22,214,81,91,163,41,61,15,86,48,79,54,133,247,27,231,246,144,69,233,69,86,209,104,208,235,244,169,27,25,210,35,
139,196,112,36,78,77,70,71,123,19,45,196,179,134,85,208,14,39,221,203,101,90,99,242,29,148,11,84,57,189,62,177,196,249,11,139,102,193,104,224,181,180,53,21,94,69,19,244,43,105,113,198,105,83,153,179,249,
249,3,145,80,56,102,54,25,120,131,142,138,157,72,138,20,243,135,195,113,229,18,23,109,162,93,85,73,29,37,23,113,97,217,251,150,55,221,113,207,189,135,212,94,107,144,173,225,6,89,243,93,61,247,211,6,147,
81,171,219,252,2,84,230,73,112,11,75,62,114,36,11,237,103,171,221,76,118,114,37,187,19,88,245,81,75,10,143,164,21,141,37,242,66,167,238,14,27,73,130,66,232,194,204,229,250,14,69,110,84,34,97,147,133,247,
173,179,94,138,68,47,97,246,44,50,194,171,228,41,248,215,247,3,202,47,231,38,160,211,233,79,156,26,253,211,215,253,201,221,95,250,162,221,110,135,116,243,52,252,191,122,246,63,41,170,227,27,42,82,6,182,
82,127,126,118,193,231,15,70,228,130,169,232,91,154,5,71,139,69,189,55,48,123,211,37,132,115,188,174,175,187,153,211,178,179,243,171,168,103,151,11,61,111,56,117,230,220,239,189,226,224,241,167,142,227,
104,168,102,144,215,104,190,205,179,95,49,153,12,134,138,249,41,21,147,49,89,155,153,185,85,239,106,56,61,147,124,206,203,106,49,118,182,55,242,188,86,177,123,202,171,204,39,42,114,28,219,108,19,186,59,
109,164,123,247,140,167,138,38,124,222,18,144,77,94,246,250,95,253,135,175,249,226,93,119,197,46,113,36,227,150,52,194,65,134,249,60,207,125,83,48,27,13,149,236,200,96,43,123,44,22,150,252,75,203,1,89,
185,6,152,245,50,26,116,221,206,38,18,36,183,54,3,203,198,193,44,197,219,148,191,167,211,102,107,108,136,70,19,238,89,79,50,41,65,120,87,32,78,230,116,124,195,167,63,243,249,151,14,191,228,193,239,255,
32,89,5,147,105,111,190,102,140,114,234,253,231,58,246,175,76,252,99,150,198,138,60,126,45,199,122,57,28,206,202,150,128,34,192,72,52,193,235,181,228,3,231,53,119,36,102,237,197,149,162,36,249,3,177,236,
208,151,101,25,157,150,51,24,116,22,179,161,185,201,100,111,162,208,36,245,212,136,64,48,58,183,232,23,69,216,225,43,107,150,131,161,240,247,191,255,253,239,125,247,187,209,72,216,98,177,92,233,128,249,
231,15,61,212,250,196,83,86,157,94,222,244,235,112,76,90,186,28,153,10,57,53,73,94,144,101,30,211,178,255,110,208,253,216,100,210,24,201,210,112,21,63,29,155,55,24,115,131,114,48,76,163,197,64,238,180,
182,200,76,244,100,141,147,162,168,76,74,153,26,21,203,50,100,168,83,243,30,102,157,84,50,191,43,171,161,64,48,6,153,109,102,120,20,139,70,89,70,238,237,233,190,126,239,117,215,92,179,187,183,175,215,
218,216,104,224,13,76,202,147,186,108,74,250,220,39,62,113,243,215,143,116,25,140,201,77,151,177,72,198,134,209,248,25,198,205,50,199,57,230,55,58,189,63,53,64,129,103,170,228,202,126,245,200,88,141,108,
45,2,111,22,120,157,238,210,90,56,18,176,63,24,37,115,93,13,35,159,234,86,207,98,146,90,218,100,106,14,0,86,105,96,47,91,45,79,141,195,73,196,6,18,137,205,191,152,19,103,152,160,134,9,112,108,144,229,
82,79,21,225,116,213,96,126,243,208,86,85,105,210,119,47,69,86,253,81,114,167,77,70,157,193,144,58,108,37,234,66,82,148,98,177,100,40,18,15,71,18,232,205,170,184,73,224,82,119,245,92,49,161,233,248,177,
74,135,196,124,181,30,122,109,21,150,137,252,230,112,74,153,212,14,106,218,90,205,134,116,151,181,40,201,161,80,92,217,74,203,100,126,169,233,79,207,229,12,245,130,122,71,91,205,133,203,190,71,63,153,
16,87,188,97,156,48,0,106,76,198,107,97,209,218,181,38,88,93,0,106,83,198,41,131,156,214,47,124,103,0,106,217,26,107,36,88,99,0,106,219,26,195,167,6,160,198,173,113,121,119,56,1,0,25,87,187,144,97,140,
1,168,101,167,250,226,45,138,50,132,12,64,141,202,56,117,151,98,122,124,165,132,81,150,0,212,168,140,61,171,184,207,1,128,13,96,113,8,0,128,140,1,0,144,49,0,224,183,227,255,11,48,0,122,104,162,75,62,245,
84,247,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* MainViewComponent::background3_png = (const char*) resource_MainViewComponent_background3_png;
const int MainViewComponent::background3_pngSize = 16699;

// JUCER_RESOURCE: msg_ui_background_png, 9619, "../../graphic assets/MSg_UI_Background.png"
static const unsigned char resource_MainViewComponent_msg_ui_background_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,1,28,0,0,1,159,8,2,0,0,0,2,178,250,193,0,0,0,25,116,69,88,116,83,111,
102,116,119,97,114,101,0,65,100,111,98,101,32,73,109,97,103,101,82,101,97,100,121,113,201,101,60,0,0,3,104,105,84,88,116,88,77,76,58,99,111,109,46,97,100,111,98,101,46,120,109,112,0,0,0,0,0,60,63,120,
112,97,99,107,101,116,32,98,101,103,105,110,61,34,239,187,191,34,32,105,100,61,34,87,53,77,48,77,112,67,101,104,105,72,122,114,101,83,122,78,84,99,122,107,99,57,100,34,63,62,32,60,120,58,120,109,112,109,
101,116,97,32,120,109,108,110,115,58,120,61,34,97,100,111,98,101,58,110,115,58,109,101,116,97,47,34,32,120,58,120,109,112,116,107,61,34,65,100,111,98,101,32,88,77,80,32,67,111,114,101,32,53,46,48,45,99,
48,54,48,32,54,49,46,49,51,52,55,55,55,44,32,50,48,49,48,47,48,50,47,49,50,45,49,55,58,51,50,58,48,48,32,32,32,32,32,32,32,32,34,62,32,60,114,100,102,58,82,68,70,32,120,109,108,110,115,58,114,100,102,
61,34,104,116,116,112,58,47,47,119,119,119,46,119,51,46,111,114,103,47,49,57,57,57,47,48,50,47,50,50,45,114,100,102,45,115,121,110,116,97,120,45,110,115,35,34,62,32,60,114,100,102,58,68,101,115,99,114,
105,112,116,105,111,110,32,114,100,102,58,97,98,111,117,116,61,34,34,32,120,109,108,110,115,58,120,109,112,77,77,61,34,104,116,116,112,58,47,47,110,115,46,97,100,111,98,101,46,99,111,109,47,120,97,112,
47,49,46,48,47,109,109,47,34,32,120,109,108,110,115,58,115,116,82,101,102,61,34,104,116,116,112,58,47,47,110,115,46,97,100,111,98,101,46,99,111,109,47,120,97,112,47,49,46,48,47,115,84,121,112,101,47,82,
101,115,111,117,114,99,101,82,101,102,35,34,32,120,109,108,110,115,58,120,109,112,61,34,104,116,116,112,58,47,47,110,115,46,97,100,111,98,101,46,99,111,109,47,120,97,112,47,49,46,48,47,34,32,120,109,112,
77,77,58,79,114,105,103,105,110,97,108,68,111,99,117,109,101,110,116,73,68,61,34,120,109,112,46,100,105,100,58,48,55,56,48,49,49,55,52,48,55,50,48,54,56,49,49,56,67,49,52,68,69,48,68,65,55,70,69,50,51,
52,57,34,32,120,109,112,77,77,58,68,111,99,117,109,101,110,116,73,68,61,34,120,109,112,46,100,105,100,58,67,65,49,50,70,49,55,48,66,51,67,48,49,49,69,53,56,49,70,50,66,54,65,52,53,70,66,49,65,56,67,53,
34,32,120,109,112,77,77,58,73,110,115,116,97,110,99,101,73,68,61,34,120,109,112,46,105,105,100,58,67,65,49,50,70,49,54,70,66,51,67,48,49,49,69,53,56,49,70,50,66,54,65,52,53,70,66,49,65,56,67,53,34,32,
120,109,112,58,67,114,101,97,116,111,114,84,111,111,108,61,34,65,100,111,98,101,32,80,104,111,116,111,115,104,111,112,32,67,83,54,32,40,77,97,99,105,110,116,111,115,104,41,34,62,32,60,120,109,112,77,77,
58,68,101,114,105,118,101,100,70,114,111,109,32,115,116,82,101,102,58,105,110,115,116,97,110,99,101,73,68,61,34,120,109,112,46,105,105,100,58,48,50,56,48,49,49,55,52,48,55,50,48,54,56,49,49,56,50,50,65,
67,52,50,48,65,66,69,48,67,52,57,49,34,32,115,116,82,101,102,58,100,111,99,117,109,101,110,116,73,68,61,34,120,109,112,46,100,105,100,58,48,55,56,48,49,49,55,52,48,55,50,48,54,56,49,49,56,67,49,52,68,
69,48,68,65,55,70,69,50,51,52,57,34,47,62,32,60,47,114,100,102,58,68,101,115,99,114,105,112,116,105,111,110,62,32,60,47,114,100,102,58,82,68,70,62,32,60,47,120,58,120,109,112,109,101,116,97,62,32,60,63,
120,112,97,99,107,101,116,32,101,110,100,61,34,114,34,63,62,195,38,189,123,0,0,33,193,73,68,65,84,120,218,236,157,9,116,28,213,153,239,187,214,174,222,181,239,139,45,217,218,140,109,188,111,44,38,196,
108,193,16,240,188,192,204,153,201,100,66,38,228,29,222,59,97,245,76,66,50,201,153,67,128,3,207,36,60,146,23,30,76,72,194,76,128,23,135,156,4,12,4,99,147,196,54,120,199,224,85,146,109,201,218,215,86,171,
91,189,87,117,245,251,170,75,42,181,181,89,150,91,242,194,255,119,250,200,181,87,117,213,253,249,251,238,173,91,213,204,130,5,75,77,0,128,212,193,226,20,0,0,169,0,128,84,0,64,42,0,0,164,2,0,82,1,0,169,
0,0,144,10,128,139,0,63,133,117,68,81,168,174,174,200,207,207,51,155,69,156,193,43,158,72,36,210,209,209,117,252,120,189,44,203,99,46,144,149,149,89,86,86,154,153,153,65,5,35,181,187,86,213,120,32,16,
104,106,106,105,110,110,75,222,187,32,8,37,37,133,165,165,197,54,155,141,101,153,212,238,52,26,149,221,238,190,134,134,51,189,189,125,83,219,2,115,190,61,42,4,129,191,238,186,213,199,142,29,221,179,103,
143,207,231,67,153,187,226,113,58,157,171,87,175,174,170,170,222,177,99,183,162,40,35,230,150,149,205,154,53,171,120,239,222,61,245,245,245,36,64,106,119,205,113,92,110,110,238,53,215,92,195,243,226,177,
99,181,161,80,152,38,90,44,210,188,121,85,138,18,221,181,107,87,87,87,87,44,22,75,237,78,73,212,138,138,138,21,43,86,158,57,211,66,106,205,132,84,244,125,124,62,207,59,239,188,131,210,246,185,98,253,250,
245,54,155,243,248,241,186,228,137,25,25,233,11,23,206,123,243,205,223,81,225,30,47,142,93,104,253,132,101,37,73,186,237,182,219,88,86,168,173,61,73,83,170,170,230,170,170,252,238,187,239,134,195,97,85,
85,167,99,167,20,9,73,230,13,27,254,230,240,225,99,110,183,103,218,235,84,133,133,121,20,163,80,200,62,111,124,252,241,199,133,133,249,163,194,84,233,254,253,251,58,58,58,166,201,168,68,6,168,6,131,193,
189,123,247,90,173,146,62,133,6,104,148,38,78,147,81,4,125,29,250,82,244,213,102,207,46,157,137,134,10,139,197,226,118,187,81,200,62,111,244,245,245,81,222,53,186,54,85,91,91,155,242,4,108,52,109,109,
109,225,112,72,31,166,1,26,157,238,61,210,151,58,113,226,4,125,193,153,144,10,124,62,137,199,227,12,51,178,73,192,108,22,7,6,6,102,96,239,20,148,140,96,72,3,211,23,163,146,241,251,253,83,107,138,227,81,
92,192,244,81,90,90,250,208,67,15,81,170,246,252,243,207,83,189,235,246,219,111,191,247,222,123,223,120,227,13,138,3,43,87,174,124,238,185,231,94,121,229,149,194,194,66,26,253,244,211,79,159,122,234,41,
10,65,100,239,148,119,183,105,211,166,213,171,87,147,117,155,55,111,126,225,133,23,30,120,224,1,69,81,66,161,208,141,55,222,88,94,94,78,213,179,125,251,246,253,240,135,63,204,202,202,122,236,177,199,42,
42,42,40,237,162,181,254,240,135,63,60,253,244,211,41,252,214,144,10,76,35,25,25,25,119,223,125,183,203,229,218,178,101,11,149,117,42,229,183,220,114,203,225,195,135,201,28,18,236,229,151,95,166,185,27,
55,110,52,155,205,247,220,115,79,52,26,125,228,145,71,166,38,149,32,8,119,220,113,199,125,247,221,247,240,195,15,215,212,212,252,228,39,63,217,186,117,43,185,68,209,134,246,187,100,201,146,247,222,123,
47,16,8,124,245,171,95,61,115,230,12,165,178,203,150,45,163,138,217,142,29,59,200,180,198,198,198,212,126,107,72,5,166,55,105,172,175,175,167,194,93,89,89,217,219,219,75,127,169,14,70,165,156,2,136,207,
231,163,124,210,235,245,62,251,236,179,180,100,75,75,203,51,207,60,243,232,163,143,78,121,95,146,36,217,237,118,218,230,241,227,199,201,46,143,199,67,22,81,144,164,89,199,142,29,163,168,216,209,209,225,
116,58,215,174,93,75,11,80,214,58,123,246,108,138,144,20,199,82,94,67,131,84,96,26,225,56,142,10,55,149,96,210,201,225,112,208,232,161,67,135,40,46,25,247,187,140,122,218,7,31,124,144,153,153,57,229,29,
145,168,175,191,254,186,73,107,112,175,186,225,134,27,104,152,108,209,131,30,253,213,155,200,73,170,131,7,15,206,153,51,135,134,169,86,70,49,138,142,135,79,0,169,192,229,4,149,221,83,167,78,45,88,176,
224,166,155,110,106,110,110,214,3,84,114,40,211,7,214,175,95,127,33,173,202,162,40,222,124,243,205,157,157,157,191,249,205,111,238,188,243,78,170,38,145,201,20,187,40,253,163,3,32,229,168,70,71,139,173,
88,177,130,246,222,223,223,79,130,81,138,72,85,172,233,248,202,144,10,76,35,20,4,40,44,28,57,114,164,160,160,160,184,184,152,42,81,84,225,233,238,238,166,72,69,153,24,25,69,213,173,199,30,123,140,74,255,
215,190,246,181,215,94,123,109,202,173,20,180,163,235,175,191,254,193,7,31,164,26,26,57,67,201,36,229,126,54,155,141,226,21,237,107,222,188,121,84,215,162,41,84,133,123,254,249,231,201,168,117,235,214,
81,253,237,192,129,3,180,110,93,93,221,91,111,189,5,169,192,229,65,79,79,207,246,237,219,119,238,220,73,242,44,89,178,100,203,150,45,20,142,26,27,27,169,172,211,48,5,147,223,255,254,247,27,54,108,160,
186,205,187,239,190,187,105,211,166,41,75,69,117,167,167,158,122,138,234,84,95,249,202,87,104,244,213,87,95,125,243,205,55,115,114,114,40,205,163,125,145,114,171,86,173,162,144,181,121,243,230,151,94,
122,41,59,59,123,247,238,221,21,21,21,180,107,90,152,142,16,82,129,203,134,134,134,134,31,252,224,7,250,48,149,114,83,162,103,134,62,250,222,123,239,209,95,189,88,167,4,210,245,91,223,250,86,242,148,159,
255,252,231,250,0,57,150,60,221,235,245,222,127,255,253,211,152,241,226,194,131,201,64,85,145,209,97,36,18,137,58,28,142,153,169,152,9,194,96,23,120,26,160,209,25,216,41,197,61,250,130,51,33,21,5,211,
140,140,12,20,178,207,27,116,209,245,78,226,201,244,246,186,171,170,170,56,142,155,238,189,23,22,22,74,146,69,31,166,1,26,157,238,61,210,151,170,174,174,166,47,56,19,82,181,181,117,82,122,138,66,246,121,
131,46,122,91,91,199,136,137,141,141,77,203,150,45,207,207,207,55,194,200,116,196,40,139,197,178,98,197,138,96,48,60,84,125,10,211,168,213,106,157,190,120,69,95,39,47,47,143,190,26,125,193,169,68,245,
243,127,158,74,184,238,186,85,71,143,30,161,170,158,223,239,71,105,187,226,161,44,104,245,234,213,243,230,93,181,99,199,199,178,60,238,243,84,117,117,117,250,157,214,212,26,69,133,123,205,154,53,130,96,
30,245,60,149,188,107,215,206,206,206,206,148,247,3,36,93,43,43,43,151,47,95,209,212,212,58,67,207,83,153,18,221,40,107,106,42,243,242,114,83,254,164,39,184,4,137,70,229,246,246,206,19,39,234,163,209,
177,43,24,211,247,228,47,213,226,252,254,137,158,252,181,219,109,163,187,249,94,248,247,77,60,249,219,52,181,220,111,138,82,1,0,82,89,167,2,0,64,42,0,32,21,0,144,10,0,0,169,0,128,84,0,64,42,0,32,21,0,
32,5,76,229,209,15,134,209,239,98,39,253,99,252,155,52,144,24,25,30,30,61,122,190,176,236,4,19,217,241,23,99,71,76,73,140,178,227,111,153,61,215,190,166,64,242,217,24,227,228,232,207,149,159,61,48,114,
212,148,232,97,48,244,132,120,124,196,104,242,64,98,100,120,120,244,232,249,162,170,19,76,84,199,95,76,29,49,37,49,170,142,191,101,245,92,251,154,2,201,103,99,140,147,163,63,124,124,246,192,200,81,68,
42,0,46,195,72,101,252,191,136,211,7,0,34,21,0,144,10,0,72,5,0,164,2,0,64,42,0,32,21,0,144,10,0,0,169,0,128,84,0,64,42,0,0,164,2,0,82,1,0,169,0,0,144,10,0,72,5,0,164,2,0,82,1,0,32,21,0,144,10,0,72,5,0,
128,84,0,64,42,0,32,21,0,0,82,1,0,169,0,128,84,0,0,72,5,0,164,2,0,82,1,0,169,0,0,144,10,0,72,5,0,164,2,0,64,42,0,32,21,0,144,10,0,0,169,0,128,84,0,64,42,0,0,164,2,0,82,1,0,169,0,128,84,0,0,72,5,0,164,
2,0,82,1,0,32,21,0,144,10,0,72,5,0,128,84,0,64,42,0,32,21,0,144,10,0,0,169,0,128,84,0,64,42,0,0,164,2,0,82,1,0,169,0,0,144,10,0,72,5,0,164,2,0,64,42,0,32,21,0,144,10,0,72,5,0,128,84,0,64,42,0,32,21,0,
0,82,1,0,169,0,128,84,0,0,72,5,0,164,2,0,82,1,0,32,21,0,144,10,0,72,5,0,164,2,0,64,42,0,32,21,0,144,10,0,0,169,0,128,84,0,64,42,0,0,164,2,0,82,1,0,169,0,0,144,10,0,72,5,0,164,2,0,82,1,0,32,21,0,144,10,
0,72,5,0,128,84,0,64,42,0,32,21,0,0,82,1,0,169,0,128,84,0,64,42,156,2,0,32,21,0,144,10,0,72,5,0,128,84,0,64,42,0,32,21,0,0,82,1,0,169,0,128,84,0,0,72,5,0,164,2,0,82,1,0,169,0,0,144,10,0,72,5,0,164,2,0,
64,42,0,32,21,0,144,10,0,0,169,0,128,84,0,64,42,0,0,164,2,0,82,1,0,169,0,128,84,0,0,72,5,0,164,2,0,82,1,0,32,21,0,144,10,0,72,5,0,128,84,0,64,42,0,32,21,0,0,82,1,0,169,0,128,84,0,64,42,0,0,164,2,0,82,
1,0,169,0,0,144,10,0,72,5,0,164,2,0,64,42,0,32,21,0,144,10,0,0,169,0,128,84,0,64,42,0,32,21,0,0,82,1,0,169,0,128,84,0,0,72,5,0,164,2,0,82,1,0,32,21,0,144,10,0,72,5,0,164,2,0,64,42,0,32,21,0,144,10,0,0,
169,0,128,84,0,64,42,0,0,164,2,0,82,1,0,169,0,0,144,10,0,72,5,0,164,2,0,82,1,0,32,21,0,144,10,0,72,5,0,128,84,0,64,42,0,32,21,0,0,82,1,0,169,0,128,84,0,0,72,5,0,164,2,0,82,1,0,169,0,0,144,10,0,72,5,0,
164,2,0,64,42,0,32,21,0,144,10,0,0,169,0,128,84,0,64,42,0,0,164,2,0,82,1,0,169,0,128,84,0,0,72,5,0,164,2,0,82,1,0,32,21,0,144,10,0,72,5,0,128,84,0,64,42,0,32,21,0,144,10,0,0,169,0,128,84,0,64,42,0,0,164,
2,0,82,1,0,169,0,0,144,10,0,72,5,0,164,2,0,64,42,0,32,21,0,144,10,0,72,5,0,128,84,0,64,42,0,32,21,0,0,82,1,0,169,0,128,84,0,0,72,5,0,164,2,0,82,1,0,32,21,0,144,10,0,72,5,0,164,2,0,64,42,0,32,21,0,144,
10,0,0,169,0,128,84,0,64,42,0,0,164,2,0,82,1,0,169,0,0,144,10,0,72,5,0,164,2,0,82,1,0,32,21,0,144,10,0,72,5,0,128,84,0,64,42,0,32,21,0,0,82,1,0,169,0,128,84,0,64,42,0,0,164,2,0,82,1,0,169,0,0,144,10,0,
72,5,0,164,2,0,64,42,0,32,21,0,144,10,0,0,169,0,128,84,0,64,42,0,32,21,0,0,82,1,112,105,194,227,20,92,8,54,155,53,39,39,107,120,60,110,106,109,109,151,21,229,124,183,147,155,147,109,181,89,140,209,112,
40,220,209,217,61,222,194,89,153,25,69,69,5,185,185,89,46,167,83,52,139,241,120,60,26,137,14,248,253,110,183,167,163,163,171,171,171,103,10,7,0,32,213,165,66,217,236,210,155,191,184,54,121,202,187,239,
111,63,126,162,254,188,54,34,138,194,134,47,127,201,106,29,150,170,171,187,231,63,95,251,221,232,37,75,75,138,150,45,185,186,164,184,144,101,199,77,49,188,94,223,241,218,250,189,251,63,81,148,24,46,16,
210,191,203,15,179,40,170,241,120,242,167,170,114,238,249,110,132,84,145,44,82,242,70,24,150,101,24,230,172,235,196,178,107,175,95,179,225,174,219,75,74,138,76,12,51,98,167,201,31,135,211,65,199,64,225,
11,87,7,145,234,242,148,74,18,227,38,53,121,74,97,81,158,203,233,240,250,6,38,191,145,154,234,138,17,27,17,68,158,227,56,37,41,139,187,105,221,245,213,85,115,147,23,243,13,248,61,158,126,74,252,200,55,
138,114,46,151,211,136,117,71,143,215,198,98,42,174,14,164,186,60,165,50,155,41,58,36,79,225,24,150,114,194,67,159,29,157,228,22,28,14,123,113,81,129,190,17,10,47,122,128,226,89,114,138,53,156,186,122,
225,188,170,138,57,198,142,58,187,122,246,238,251,164,181,173,93,150,149,228,35,201,201,206,156,59,103,54,237,253,116,195,25,92,26,72,117,25,167,127,122,162,53,224,15,168,177,24,133,11,26,158,59,183,108,
242,82,149,151,205,34,129,104,35,193,96,104,192,239,207,205,201,214,147,61,65,16,34,145,40,13,75,146,121,249,210,69,70,58,119,166,169,229,157,247,182,43,163,154,34,34,145,72,75,107,59,125,62,222,115,64,
95,17,160,78,117,89,34,8,188,154,32,24,12,54,53,183,234,195,20,49,178,179,50,38,179,58,197,165,202,185,101,250,90,237,29,157,125,125,253,250,48,195,50,2,207,27,109,33,102,179,56,184,151,80,104,219,246,
157,202,132,141,123,225,112,4,21,42,72,117,25,35,38,34,21,65,37,190,185,165,77,31,214,76,40,155,53,153,213,115,178,179,178,179,51,245,181,78,55,52,81,58,167,15,179,12,195,11,131,82,229,231,229,196,135,
104,105,105,15,4,131,56,237,144,234,138,142,84,252,96,164,162,18,223,209,209,29,14,135,245,209,178,89,37,19,180,122,27,204,41,159,165,47,47,203,50,57,73,181,42,117,8,35,82,89,173,22,99,162,111,96,0,231,
28,82,93,209,245,81,130,99,201,3,77,133,88,140,114,179,174,174,30,125,52,205,229,200,203,205,62,231,234,179,103,21,235,203,119,119,247,82,157,202,148,8,121,250,135,106,107,250,98,198,20,250,88,36,51,78,
59,164,186,178,165,226,88,158,213,203,187,222,137,225,12,85,171,134,12,40,47,43,157,120,245,162,194,124,155,205,162,47,124,186,177,137,166,40,177,152,177,186,104,22,244,197,6,2,1,99,98,94,94,14,207,163,
109,9,82,93,209,145,138,101,57,189,188,71,163,154,84,84,231,81,20,85,159,82,92,84,48,177,0,137,220,79,91,82,150,99,103,154,90,105,138,172,173,60,40,144,32,12,70,170,246,246,46,99,162,213,98,89,182,116,
33,206,60,164,186,114,43,84,2,73,197,12,69,42,153,166,244,123,125,110,79,159,62,197,98,149,10,10,114,199,91,215,98,161,185,57,250,146,93,61,61,190,196,205,98,89,86,134,35,149,56,24,169,200,183,1,191,223,
152,94,83,61,119,245,170,37,198,220,11,254,10,130,36,153,41,213,164,239,194,113,220,136,110,28,96,138,255,219,226,20,92,72,137,164,168,164,15,203,178,172,15,52,55,183,167,167,185,244,225,178,217,37,205,
205,109,99,174,59,171,180,136,10,177,190,122,67,67,147,177,17,99,131,194,80,235,31,77,220,187,239,208,218,235,87,25,235,86,86,148,231,231,229,28,57,90,215,216,216,60,181,190,179,217,217,153,116,108,249,
249,57,14,187,157,163,106,97,60,30,163,90,161,18,139,202,114,52,18,13,134,194,94,175,239,192,193,195,184,196,144,106,166,17,181,155,84,131,157,86,163,209,193,251,173,77,205,173,87,205,155,171,255,151,
159,159,151,101,54,155,35,145,200,232,117,203,102,23,235,235,42,138,210,148,200,253,18,254,68,141,13,82,228,48,22,110,60,211,98,183,219,22,47,154,103,76,177,219,173,171,86,46,186,106,94,5,205,106,108,
108,161,8,57,201,99,118,58,236,75,150,204,47,41,46,160,97,175,111,160,173,189,35,22,139,145,222,228,48,253,31,65,223,200,102,147,50,50,92,244,215,116,16,87,24,82,93,140,72,21,143,13,222,102,149,163,131,
145,170,175,175,191,191,207,151,150,166,117,173,16,56,161,176,32,183,161,177,121,196,138,20,202,50,210,210,244,117,59,218,187,41,50,12,109,68,49,54,40,156,93,31,59,114,180,54,18,142,44,89,116,21,237,116,
88,45,171,117,126,77,229,188,170,185,45,173,29,39,234,79,119,119,247,78,124,192,197,69,249,215,172,90,74,91,168,173,61,93,127,178,209,211,239,29,177,0,253,95,224,114,58,238,248,210,23,221,61,30,92,95,
72,117,49,34,149,200,171,241,161,72,53,148,254,81,42,213,220,214,238,116,217,134,210,188,194,209,82,209,196,184,73,213,187,61,52,156,105,49,166,211,70,140,13,114,73,145,74,167,254,84,99,87,119,239,130,
249,149,20,103,206,170,252,48,166,226,226,60,250,52,53,183,125,250,217,137,1,127,96,204,163,45,47,43,89,181,98,145,215,59,240,241,222,67,110,247,216,206,208,193,75,146,72,199,208,231,233,199,245,133,84,
23,69,42,49,54,84,5,138,14,69,42,173,90,213,210,94,85,89,166,151,251,204,204,116,171,85,10,6,195,195,77,67,44,91,88,148,167,175,24,14,71,218,218,59,141,89,84,125,50,54,200,114,99,180,33,81,194,182,243,
163,3,25,25,105,115,202,75,41,6,74,103,223,182,42,42,202,167,202,210,254,3,135,41,112,141,88,145,22,94,190,108,97,79,111,223,95,118,236,157,184,103,96,90,186,139,142,193,51,233,124,18,64,170,84,55,84,
196,198,144,202,227,241,122,250,188,122,6,200,50,76,94,110,118,67,227,112,56,34,205,108,22,139,190,98,75,75,71,114,79,115,89,137,25,27,228,24,237,145,170,49,123,241,81,134,185,175,175,223,108,22,11,242,
115,41,254,100,102,164,13,31,18,207,83,56,210,182,156,228,149,197,34,45,95,186,144,196,222,177,107,255,57,251,218,166,57,29,116,12,254,129,0,174,239,148,65,147,250,5,68,42,158,55,250,58,24,173,127,122,
18,213,218,214,97,204,42,60,187,97,189,184,48,215,152,149,232,154,52,140,34,43,198,44,142,99,39,238,232,68,122,52,158,105,217,246,225,71,31,239,249,196,231,27,48,86,164,221,47,91,124,149,221,102,53,150,
156,95,83,33,240,220,39,159,28,9,133,194,147,105,201,8,5,67,193,73,44,9,32,85,234,225,120,86,107,137,78,124,146,35,21,209,218,214,165,196,98,250,172,140,244,52,35,79,227,56,46,55,55,91,159,222,239,29,
232,61,187,110,35,43,164,149,162,207,165,48,197,113,147,186,58,20,148,182,255,101,119,107,123,167,113,48,12,203,86,85,150,15,74,226,180,23,23,231,119,247,246,181,180,117,158,251,191,9,65,160,100,213,211,
239,51,90,246,1,164,154,217,212,89,187,209,52,88,146,147,35,149,94,249,113,247,121,244,89,20,111,140,39,65,50,210,93,146,89,208,167,83,152,82,207,126,192,81,209,144,245,185,148,250,209,246,39,121,36,164,
244,222,253,159,245,121,250,141,227,201,207,203,164,252,80,107,20,41,41,160,209,186,250,134,201,108,135,140,162,154,160,199,235,197,197,133,84,23,41,82,113,172,222,121,156,98,82,84,30,121,19,182,77,235,
94,52,72,94,110,166,62,49,55,55,211,88,165,173,125,228,251,146,72,7,173,83,69,2,61,172,77,254,96,40,44,214,214,53,24,123,164,212,209,97,183,37,246,152,21,14,71,186,123,250,38,179,17,187,221,70,235,122,
189,232,11,15,169,46,142,81,156,214,71,73,127,112,67,209,114,189,17,11,116,118,245,106,29,100,19,164,167,57,249,68,39,160,236,172,116,125,10,37,126,163,219,190,181,238,78,137,78,21,250,179,36,147,76,255,
134,27,72,250,125,209,161,213,181,135,71,4,222,34,153,37,179,216,219,235,25,125,120,227,84,168,52,169,6,252,120,100,235,194,82,24,156,130,41,135,41,70,139,45,137,94,17,81,89,29,245,162,21,191,63,216,231,
246,80,190,103,74,116,143,112,56,108,20,133,172,146,89,95,165,165,117,140,26,142,230,39,109,202,44,26,222,158,215,33,145,218,114,36,202,14,173,78,90,218,109,86,218,221,228,251,91,164,185,236,138,44,107,
15,161,0,72,117,113,164,74,244,166,213,27,24,198,12,5,237,157,61,105,105,142,193,242,154,230,208,218,32,134,150,239,234,118,143,94,62,30,55,201,49,69,95,198,148,120,180,228,124,15,137,229,24,99,245,104,
52,106,209,222,124,166,134,199,234,39,53,26,10,107,78,167,205,31,8,142,168,31,2,72,53,83,82,105,237,221,113,221,165,104,210,77,219,100,168,38,51,183,188,88,111,25,207,76,119,82,74,167,47,223,211,211,55,
162,181,48,185,201,193,240,243,124,211,63,138,51,137,202,85,76,15,83,254,64,200,102,179,104,163,147,123,99,69,126,126,150,86,161,242,249,241,134,11,72,117,145,164,210,30,164,31,234,248,39,143,221,85,60,
20,138,120,60,3,233,233,218,93,96,151,203,145,72,240,226,137,54,140,158,241,54,155,208,51,158,156,254,141,119,11,120,100,229,152,101,19,13,125,131,75,246,123,7,200,79,125,107,146,229,220,207,11,83,152,
42,46,202,163,133,125,184,237,11,169,46,218,137,211,154,254,98,67,38,140,155,47,117,116,245,184,134,250,1,234,9,94,56,28,237,243,140,91,201,145,19,77,234,198,46,76,90,71,193,124,139,197,220,210,210,53,
65,251,129,40,10,85,21,179,108,54,201,88,183,169,185,93,171,215,5,130,52,37,35,221,49,177,153,20,117,171,171,102,115,90,187,75,204,239,135,84,144,234,162,73,197,25,141,19,114,116,220,135,154,220,110,47,
205,77,78,228,186,186,251,38,184,181,170,68,149,225,158,74,131,121,163,203,110,179,100,103,164,81,12,33,27,233,111,40,28,161,234,25,57,66,214,73,146,57,51,195,153,151,147,73,94,25,43,118,247,120,122,122,
181,30,177,129,64,200,231,11,208,234,57,217,233,180,223,49,247,40,240,124,117,229,44,167,221,42,71,101,10,119,193,96,4,23,23,82,93,172,244,143,53,122,148,203,177,113,35,85,36,42,123,188,62,138,21,195,
82,245,184,39,216,44,109,202,216,44,195,154,40,70,89,173,162,62,197,225,176,208,71,207,33,169,166,20,215,172,99,140,22,66,99,45,79,255,64,221,169,166,161,192,24,111,105,235,172,156,91,82,54,43,159,2,93,
114,191,94,163,26,54,167,188,200,106,49,55,52,181,101,164,57,172,86,41,18,197,139,56,33,213,37,16,169,20,121,162,199,111,123,122,60,105,206,193,12,208,31,8,249,253,19,53,88,43,114,82,159,90,142,165,96,
69,21,51,243,168,135,231,185,161,110,129,201,77,249,218,27,57,59,221,77,45,93,201,153,94,87,183,39,221,229,200,202,116,205,175,153,221,210,218,237,233,247,43,218,83,137,172,22,190,178,210,50,210,157,164,
104,93,125,115,119,111,127,97,94,22,69,54,188,132,29,82,93,52,24,150,49,122,81,68,34,19,181,65,187,61,190,108,159,95,111,3,236,236,58,71,207,6,218,166,177,89,170,8,145,132,135,14,159,164,64,71,165,159,
52,48,158,177,31,1,213,211,40,64,81,214,23,12,141,145,188,213,159,110,161,109,230,230,164,151,150,228,149,150,12,191,177,93,75,20,123,251,91,218,186,201,91,155,85,50,49,154,243,184,178,41,40,27,11,22,
44,197,89,152,74,250,151,212,139,92,239,56,145,146,205,178,73,25,29,149,254,228,223,152,162,216,104,150,4,73,123,75,11,175,87,210,104,191,145,168,18,142,68,194,161,168,122,174,22,66,114,50,61,205,78,242,
80,248,147,101,133,2,102,191,47,16,26,146,144,42,102,115,203,11,207,52,117,118,118,227,153,95,68,170,139,4,21,232,233,200,148,18,79,111,140,157,76,82,218,166,4,98,129,192,20,31,202,208,50,207,241,3,145,
69,210,94,215,30,8,226,137,143,84,252,207,136,83,0,18,113,76,162,168,24,10,161,149,2,82,129,84,64,249,164,197,34,250,6,2,74,12,191,104,10,169,64,42,72,115,217,168,254,230,238,195,19,31,144,10,164,164,
4,176,108,102,166,35,28,137,122,125,232,75,1,169,64,42,200,207,77,227,57,182,163,211,51,226,49,100,0,169,192,84,200,206,116,166,187,172,125,158,1,175,15,15,38,166,12,52,169,127,78,17,4,46,39,203,233,114,
90,125,254,80,123,39,94,157,9,169,192,228,96,24,198,233,144,20,69,77,188,163,73,187,61,204,178,140,89,228,237,54,179,203,105,161,185,158,126,127,103,183,15,191,17,12,169,192,100,177,89,197,252,92,215,
152,179,130,161,104,159,39,224,15,160,79,58,164,2,231,67,36,170,80,106,39,240,28,159,120,248,223,20,55,81,192,210,122,54,133,149,168,172,224,252,64,42,112,222,200,114,140,62,56,15,51,12,90,255,0,128,84,
0,64,42,0,32,21,0,0,82,1,112,201,128,214,191,212,19,143,171,138,44,243,28,107,181,89,172,22,43,207,79,241,36,135,6,188,213,109,29,86,134,141,51,169,60,188,24,195,248,25,166,135,99,187,57,33,200,243,44,
47,178,12,131,171,6,169,46,81,100,57,226,180,219,174,189,118,205,186,155,214,85,215,212,100,101,101,73,146,196,76,181,200,190,250,211,159,165,255,203,227,165,86,71,44,213,249,68,220,100,82,77,166,0,19,
110,102,153,93,2,191,79,146,100,81,226,88,14,87,16,82,93,66,40,138,156,238,114,60,240,63,30,90,127,199,29,118,187,61,85,69,63,100,50,5,89,211,52,221,105,18,227,166,106,37,62,95,145,55,68,148,63,138,225,
191,216,172,188,104,193,165,132,84,151,4,209,72,232,158,175,108,120,116,227,99,169,210,105,40,141,156,222,46,121,20,172,34,140,41,98,50,185,226,241,127,14,203,43,21,223,11,54,37,108,177,51,200,6,33,213,
197,37,166,68,158,123,238,153,91,111,187,45,245,155,158,169,178,173,208,135,49,205,83,226,79,12,4,159,84,213,62,155,19,94,93,8,104,253,187,176,226,24,13,191,248,226,207,166,197,40,61,255,155,65,66,140,
41,67,141,63,30,8,219,130,120,174,30,82,93,188,172,239,71,79,254,251,53,215,94,59,189,187,153,65,181,40,27,204,84,227,15,6,67,177,8,158,89,132,84,51,142,170,170,235,110,188,225,203,119,221,53,237,123,
154,217,68,140,226,85,165,18,191,61,16,140,169,232,137,11,169,102,22,142,81,31,255,254,227,211,190,155,120,60,158,244,140,70,92,81,226,177,88,226,175,170,70,163,198,39,62,244,34,219,184,44,155,134,154,
55,104,49,99,88,127,219,173,49,81,251,155,244,74,93,125,150,118,127,45,28,166,45,132,25,211,173,114,204,26,70,176,130,84,51,27,166,110,191,253,182,220,188,188,169,39,90,71,143,197,220,238,88,119,79,248,
208,167,19,24,197,90,44,98,110,78,92,23,64,85,133,236,108,33,35,93,200,202,226,93,78,75,121,153,165,140,62,179,105,64,200,206,210,252,81,85,49,63,143,209,223,26,29,143,211,138,38,150,29,244,138,70,115,
180,81,49,47,143,225,121,33,43,211,196,243,131,179,24,70,204,203,165,89,100,166,99,201,98,115,81,145,34,43,46,53,190,54,28,73,213,187,172,33,21,152,132,84,74,244,158,123,239,189,144,45,132,15,126,162,
116,116,82,88,80,199,255,145,181,120,76,17,179,179,231,254,244,39,172,40,82,48,97,4,97,206,255,122,58,253,198,47,148,126,247,95,178,239,186,115,241,206,63,47,222,245,161,246,119,231,135,37,143,124,91,
25,24,32,91,170,127,245,31,214,170,74,149,124,136,68,42,254,207,11,185,127,123,79,108,192,31,11,6,157,171,86,214,188,254,42,75,91,248,241,179,98,78,246,172,127,123,188,224,27,95,87,124,3,166,184,74,107,
149,63,251,20,43,73,69,223,126,96,193,159,222,190,250,195,63,73,101,179,35,209,232,10,133,66,34,94,88,11,169,102,138,180,52,87,85,85,229,5,157,119,171,149,2,11,95,88,96,189,118,205,184,149,41,142,15,53,
158,33,163,108,213,85,177,64,144,108,97,205,230,112,75,43,133,163,222,183,223,57,124,235,250,206,87,127,227,222,250,193,103,183,172,111,127,233,23,44,207,75,179,74,29,203,150,146,63,100,148,22,229,108,
182,226,141,15,115,78,135,41,22,43,217,248,48,173,69,17,143,179,90,180,55,87,8,98,201,198,71,204,5,121,106,226,231,234,88,209,108,46,200,207,252,210,109,71,214,223,221,244,228,51,66,154,139,114,196,60,
53,238,194,47,106,79,9,220,167,154,10,101,229,179,5,81,52,146,180,104,109,93,244,228,41,170,144,72,139,23,137,115,202,213,129,1,165,179,75,156,59,71,159,79,179,248,188,92,214,225,136,135,195,129,15,182,
43,221,61,124,118,150,220,212,108,94,48,95,245,250,98,125,110,97,246,108,45,33,60,118,60,124,240,144,41,166,8,115,202,173,215,94,163,39,102,106,52,224,255,236,176,107,205,106,247,246,173,174,213,171,252,
148,52,82,68,98,217,72,91,91,168,190,158,20,82,163,145,254,29,59,132,244,12,170,107,57,87,175,10,157,60,233,92,182,132,130,15,173,43,119,117,89,102,149,102,111,184,43,116,234,52,165,136,161,83,13,148,
25,82,101,140,102,41,222,126,90,177,232,127,62,112,122,227,119,57,187,141,194,32,239,112,144,138,190,189,251,188,187,62,226,236,118,147,217,44,153,76,249,49,229,36,46,54,34,213,204,80,88,80,56,156,164,
133,195,114,107,155,249,234,133,150,21,203,125,111,108,86,41,221,234,117,7,63,252,179,177,0,13,199,122,122,227,161,80,223,166,231,169,232,219,214,94,199,23,20,200,173,173,148,206,41,237,237,193,93,187,
19,203,252,197,255,214,22,105,225,2,203,154,213,209,227,181,222,87,126,157,144,138,202,63,239,251,120,183,125,233,98,26,112,44,91,226,219,189,135,73,212,133,232,47,85,183,104,11,218,128,89,27,160,74,145,
235,154,213,173,63,125,81,204,207,151,138,139,73,30,170,48,181,252,248,127,231,127,253,107,101,79,254,123,219,207,254,175,110,227,96,12,228,133,150,77,207,103,222,185,222,54,255,170,120,36,194,240,92,
184,181,149,181,90,74,191,179,209,104,222,160,69,211,81,167,130,84,51,134,213,58,220,71,142,177,88,108,235,110,20,74,138,57,151,139,202,165,234,247,155,56,78,43,229,198,2,84,244,173,214,192,182,15,197,
249,243,28,95,190,67,40,47,147,150,46,166,88,20,143,70,245,55,134,81,205,42,184,99,87,198,163,15,153,23,206,23,43,230,166,221,255,141,88,127,191,169,173,157,17,69,70,48,15,28,60,36,100,102,58,22,94,45,
228,228,12,28,248,132,53,34,228,89,181,175,152,152,151,39,230,228,116,254,250,63,195,205,205,206,21,75,227,209,8,103,145,40,236,68,90,91,57,135,163,123,243,155,148,13,14,95,117,179,232,255,244,51,247,
219,239,204,250,254,119,212,72,212,196,176,20,102,27,191,251,111,197,143,60,88,242,216,35,177,96,226,23,119,226,38,17,87,26,233,223,140,17,10,157,245,67,79,161,61,251,162,39,106,201,28,133,76,224,249,
248,136,170,72,162,203,15,69,51,251,109,183,12,107,64,70,37,166,83,74,22,235,235,227,178,179,146,61,20,107,170,77,205,45,38,158,167,185,145,246,142,104,71,71,254,55,191,174,184,221,148,245,217,230,213,
140,33,85,52,106,173,152,107,173,172,160,160,100,171,169,86,250,189,157,175,254,87,162,93,79,108,126,102,147,144,157,173,181,115,156,221,243,136,179,217,154,159,125,110,201,158,157,105,215,95,171,6,131,
156,213,218,247,193,182,19,255,248,141,234,87,94,234,255,235,14,255,145,163,148,1,162,153,2,145,106,230,104,107,107,55,134,35,135,143,132,247,239,119,252,183,187,157,247,252,141,121,209,66,10,26,148,101,
197,71,220,5,98,24,206,229,148,201,19,67,52,227,33,43,85,101,237,14,213,231,75,222,126,172,171,203,148,145,97,210,234,63,180,186,236,219,179,175,224,190,127,162,191,234,56,191,114,173,70,101,215,154,85,
178,219,109,171,169,33,163,236,11,230,115,118,135,182,101,73,162,136,228,217,254,103,206,102,29,217,10,34,240,145,182,150,142,95,252,106,214,15,190,167,253,71,160,170,156,197,218,253,198,111,187,127,187,
57,109,237,245,100,41,125,1,15,139,226,1,169,102,138,198,134,70,121,40,28,41,61,61,124,110,46,107,183,83,85,42,114,228,104,172,179,147,77,79,87,58,187,228,198,51,164,83,228,232,177,208,206,143,76,106,
204,250,197,27,3,127,218,74,163,218,111,48,250,124,209,218,58,221,40,202,187,88,155,85,40,46,242,189,254,91,53,16,212,82,193,157,31,41,93,221,166,185,115,40,133,211,74,191,40,250,246,237,55,177,156,111,
255,1,86,16,198,58,156,56,107,54,59,87,173,60,245,200,198,79,191,112,211,225,219,191,76,147,108,243,170,213,196,141,96,10,128,148,236,153,198,234,240,206,89,108,237,47,190,196,167,167,57,150,46,230,157,
206,244,155,190,168,170,161,104,175,155,225,88,10,106,97,147,169,147,67,34,3,169,102,10,183,167,191,174,174,110,176,126,181,102,53,85,75,188,191,124,53,124,224,160,185,170,50,114,236,4,43,153,157,127,
123,143,255,173,45,253,47,190,44,55,52,58,191,250,247,140,32,242,57,217,105,223,188,47,248,231,191,122,126,254,210,192,31,183,240,69,69,92,86,38,155,158,70,149,40,218,136,243,239,255,142,212,162,141,244,
191,252,11,249,116,67,250,127,191,223,68,5,59,241,51,28,84,137,10,159,105,234,219,250,65,232,212,105,218,142,246,147,192,122,216,137,199,105,22,197,162,120,84,182,86,204,161,10,85,224,200,49,62,35,131,
44,13,156,168,205,184,121,29,147,200,30,141,59,188,148,239,13,254,101,89,173,145,131,66,37,199,201,253,222,150,103,54,241,46,23,197,192,242,167,159,88,180,117,91,222,63,252,93,255,95,119,10,130,216,201,
50,253,99,59,12,206,1,151,155,91,128,179,112,190,48,12,27,87,162,55,124,225,11,122,34,39,45,156,47,45,184,138,244,144,22,93,109,94,112,21,149,90,46,35,221,178,114,185,101,233,18,177,170,82,44,155,173,
221,149,162,115,157,230,178,172,88,70,19,165,171,23,72,139,22,210,68,138,111,66,209,96,67,162,88,89,97,89,190,84,155,187,104,33,99,214,218,8,62,221,183,79,216,246,161,203,44,169,138,18,172,171,143,182,
119,104,205,119,12,35,187,251,130,181,117,154,48,12,19,105,105,13,159,105,20,115,115,35,173,173,254,79,14,105,170,176,172,220,221,67,89,104,240,68,93,168,174,62,230,247,235,107,197,130,193,224,209,99,
164,92,240,216,241,88,32,24,58,121,74,241,244,115,22,137,92,165,58,155,111,239,254,192,225,35,214,170,202,142,87,126,77,2,219,204,210,251,34,127,210,106,199,147,246,83,41,30,248,117,250,41,158,184,120,
108,235,182,63,229,228,228,76,223,46,126,245,194,79,173,255,250,189,18,155,35,198,104,77,17,148,7,146,27,148,82,170,225,136,22,172,24,70,187,201,75,21,39,139,101,120,98,194,120,125,58,125,24,179,89,111,
130,167,79,44,209,26,161,253,181,88,104,1,173,77,146,2,145,62,43,16,160,8,70,19,181,126,134,28,43,90,173,17,134,121,204,97,141,88,29,184,208,72,255,102,142,88,220,244,228,19,79,206,156,195,122,75,58,213,
145,70,165,127,103,77,76,154,78,145,240,28,233,159,49,203,110,215,130,175,36,113,14,59,137,103,137,155,222,23,184,160,100,197,85,134,84,51,123,226,88,238,253,173,219,222,126,235,173,43,236,123,73,113,
83,61,199,188,109,179,226,61,48,144,234,34,32,154,45,223,249,215,239,237,222,189,123,154,131,212,204,125,35,115,220,212,207,50,63,182,89,88,51,194,20,164,186,88,237,60,130,249,155,223,184,127,235,251,
91,175,128,239,66,89,159,135,101,126,100,151,252,168,74,65,170,139,124,6,121,243,183,191,253,240,143,158,120,34,24,76,245,83,125,51,21,163,120,147,201,22,55,213,242,204,247,29,150,94,43,222,250,2,169,
46,141,60,240,181,215,127,119,235,77,183,254,110,243,230,64,32,144,58,167,152,233,190,246,98,66,167,1,134,249,165,196,255,200,229,12,193,168,148,228,47,184,79,149,154,2,202,114,225,168,188,125,219,135,
191,125,227,255,53,54,156,102,89,86,16,4,81,20,167,252,206,103,226,240,254,3,142,173,219,178,69,51,109,66,72,237,135,209,140,138,48,166,70,142,249,163,89,248,165,205,122,202,230,224,121,116,160,77,209,
255,134,184,79,149,114,226,170,170,40,218,187,212,109,118,171,221,102,231,249,41,54,163,5,189,222,154,214,54,27,203,170,169,123,161,18,197,33,213,164,189,75,189,155,99,59,57,222,47,8,44,47,176,12,18,22,
72,5,0,234,84,0,64,42,0,0,164,2,0,82,1,0,169,0,0,144,10,0,72,5,0,164,2,0,64,42,0,32,21,0,144,10,0,72,5,0,128,84,0,64,42,0,32,21,0,0,82,1,0,169,0,128,84,0,128,9,249,255,2,12,0,120,72,36,31,82,181,205,26,
0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* MainViewComponent::msg_ui_background_png = (const char*) resource_MainViewComponent_msg_ui_background_png;
const int MainViewComponent::msg_ui_background_pngSize = 9619;

// JUCER_RESOURCE: msg_ui_background2_png, 12070, "../../graphic assets/MSg_UI_Background2.png"
static const unsigned char resource_MainViewComponent_msg_ui_background2_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,1,28,0,0,1,159,8,2,0,0,0,2,178,250,193,0,0,0,25,116,69,88,116,83,111,
102,116,119,97,114,101,0,65,100,111,98,101,32,73,109,97,103,101,82,101,97,100,121,113,201,101,60,0,0,3,104,105,84,88,116,88,77,76,58,99,111,109,46,97,100,111,98,101,46,120,109,112,0,0,0,0,0,60,63,120,
112,97,99,107,101,116,32,98,101,103,105,110,61,34,239,187,191,34,32,105,100,61,34,87,53,77,48,77,112,67,101,104,105,72,122,114,101,83,122,78,84,99,122,107,99,57,100,34,63,62,32,60,120,58,120,109,112,109,
101,116,97,32,120,109,108,110,115,58,120,61,34,97,100,111,98,101,58,110,115,58,109,101,116,97,47,34,32,120,58,120,109,112,116,107,61,34,65,100,111,98,101,32,88,77,80,32,67,111,114,101,32,53,46,48,45,99,
48,54,48,32,54,49,46,49,51,52,55,55,55,44,32,50,48,49,48,47,48,50,47,49,50,45,49,55,58,51,50,58,48,48,32,32,32,32,32,32,32,32,34,62,32,60,114,100,102,58,82,68,70,32,120,109,108,110,115,58,114,100,102,
61,34,104,116,116,112,58,47,47,119,119,119,46,119,51,46,111,114,103,47,49,57,57,57,47,48,50,47,50,50,45,114,100,102,45,115,121,110,116,97,120,45,110,115,35,34,62,32,60,114,100,102,58,68,101,115,99,114,
105,112,116,105,111,110,32,114,100,102,58,97,98,111,117,116,61,34,34,32,120,109,108,110,115,58,120,109,112,77,77,61,34,104,116,116,112,58,47,47,110,115,46,97,100,111,98,101,46,99,111,109,47,120,97,112,
47,49,46,48,47,109,109,47,34,32,120,109,108,110,115,58,115,116,82,101,102,61,34,104,116,116,112,58,47,47,110,115,46,97,100,111,98,101,46,99,111,109,47,120,97,112,47,49,46,48,47,115,84,121,112,101,47,82,
101,115,111,117,114,99,101,82,101,102,35,34,32,120,109,108,110,115,58,120,109,112,61,34,104,116,116,112,58,47,47,110,115,46,97,100,111,98,101,46,99,111,109,47,120,97,112,47,49,46,48,47,34,32,120,109,112,
77,77,58,79,114,105,103,105,110,97,108,68,111,99,117,109,101,110,116,73,68,61,34,120,109,112,46,100,105,100,58,48,55,56,48,49,49,55,52,48,55,50,48,54,56,49,49,56,67,49,52,68,69,48,68,65,55,70,69,50,51,
52,57,34,32,120,109,112,77,77,58,68,111,99,117,109,101,110,116,73,68,61,34,120,109,112,46,100,105,100,58,53,70,70,54,55,57,69,54,66,53,56,51,49,49,69,53,66,52,54,48,70,53,51,66,68,52,56,56,68,68,57,48,
34,32,120,109,112,77,77,58,73,110,115,116,97,110,99,101,73,68,61,34,120,109,112,46,105,105,100,58,53,70,70,54,55,57,69,53,66,53,56,51,49,49,69,53,66,52,54,48,70,53,51,66,68,52,56,56,68,68,57,48,34,32,
120,109,112,58,67,114,101,97,116,111,114,84,111,111,108,61,34,65,100,111,98,101,32,80,104,111,116,111,115,104,111,112,32,67,83,54,32,40,77,97,99,105,110,116,111,115,104,41,34,62,32,60,120,109,112,77,77,
58,68,101,114,105,118,101,100,70,114,111,109,32,115,116,82,101,102,58,105,110,115,116,97,110,99,101,73,68,61,34,120,109,112,46,105,105,100,58,48,50,56,48,49,49,55,52,48,55,50,48,54,56,49,49,56,50,50,65,
67,52,50,48,65,66,69,48,67,52,57,49,34,32,115,116,82,101,102,58,100,111,99,117,109,101,110,116,73,68,61,34,120,109,112,46,100,105,100,58,48,55,56,48,49,49,55,52,48,55,50,48,54,56,49,49,56,67,49,52,68,
69,48,68,65,55,70,69,50,51,52,57,34,47,62,32,60,47,114,100,102,58,68,101,115,99,114,105,112,116,105,111,110,62,32,60,47,114,100,102,58,82,68,70,62,32,60,47,120,58,120,109,112,109,101,116,97,62,32,60,63,
120,112,97,99,107,101,116,32,101,110,100,61,34,114,34,63,62,114,171,134,213,0,0,43,84,73,68,65,84,120,218,236,157,9,116,21,215,153,231,95,213,219,183,210,190,63,118,3,146,108,144,141,1,131,29,77,60,1,
169,59,150,157,134,134,153,52,57,29,60,208,153,232,204,224,62,116,39,141,187,113,162,204,57,193,193,61,33,203,48,129,238,40,221,65,129,76,135,76,44,14,36,142,166,29,9,57,137,113,108,1,94,130,151,39,25,
99,22,233,61,173,104,171,39,189,125,153,175,222,149,138,135,54,11,241,86,241,255,157,58,162,222,173,91,85,151,91,223,191,190,239,222,170,186,151,91,189,122,173,2,0,16,61,120,84,1,0,16,21,0,16,21,0,16,
21,0,0,162,2,0,162,2,0,162,2,0,64,84,0,36,0,213,28,246,209,104,212,37,37,43,10,10,242,181,90,13,106,112,222,227,241,120,186,186,122,172,214,203,62,159,15,181,17,19,81,169,213,170,242,242,141,31,124,240,
254,47,127,121,90,20,69,212,224,188,71,16,132,71,31,125,180,188,124,195,171,175,190,225,247,251,81,33,159,136,50,47,175,240,142,118,32,31,213,217,105,123,249,229,151,233,6,134,234,187,71,60,213,149,43,
87,114,114,114,10,10,10,250,250,250,81,33,209,111,83,21,21,229,183,180,180,160,226,238,53,94,127,253,245,162,162,2,212,67,76,68,165,215,235,251,251,113,187,186,231,24,24,24,208,235,117,168,135,152,136,
10,220,155,132,66,33,142,227,80,15,16,21,0,16,21,0,16,21,0,0,162,2,0,162,2,0,162,2,0,162,2,0,64,84,0,64,84,32,165,225,56,46,20,10,161,30,98,34,42,151,203,149,153,153,137,138,187,215,160,139,238,114,185,
81,15,49,17,149,221,222,189,113,227,70,84,220,189,6,93,116,187,189,11,245,48,27,238,248,211,143,161,161,225,53,107,30,52,155,77,189,189,189,94,175,23,53,56,239,49,153,76,143,63,254,120,113,113,201,59,
239,188,27,12,6,81,33,159,28,42,207,97,216,103,173,86,83,90,186,50,63,63,79,163,81,163,6,231,61,94,175,175,179,179,187,181,245,50,238,161,49,20,21,0,32,154,109,42,0,0,68,5,0,68,5,0,68,5,0,128,168,0,128,
168,0,128,168,0,128,168,0,0,81,96,46,99,169,115,28,27,172,42,226,31,249,223,136,149,240,143,91,235,147,127,222,41,60,63,67,34,63,125,54,126,66,74,248,39,63,253,145,249,79,58,215,28,136,172,141,41,42,39,
188,62,97,101,226,79,69,120,156,176,240,155,226,17,255,200,255,70,172,132,127,220,90,159,252,243,78,9,6,103,72,12,78,159,45,56,33,37,252,51,56,253,145,131,159,116,174,57,16,89,27,83,84,78,120,125,194,
202,196,159,240,84,0,164,160,167,146,239,139,168,62,0,224,169,0,128,168,0,128,168,0,128,168,0,0,16,21,0,16,21,0,16,21,0,0,162,2,0,162,2,0,162,2,0,64,84,0,64,84,0,64,84,0,0,136,10,0,136,10,0,136,10,0,136,
42,209,88,44,69,151,46,93,164,165,161,225,140,32,8,184,48,32,117,109,38,89,68,85,89,185,185,190,254,116,89,217,58,155,205,78,149,5,139,1,169,107,51,73,20,254,217,237,118,250,75,21,84,90,90,12,139,1,169,
107,51,170,185,237,214,223,223,23,57,70,69,86,86,238,237,91,123,253,254,192,216,9,84,202,9,91,163,197,204,103,185,189,132,92,86,86,78,98,43,154,66,148,234,234,61,53,53,207,89,173,173,135,15,31,161,20,
138,91,232,46,75,127,89,6,178,12,202,64,119,95,90,63,118,236,56,253,173,173,61,90,87,119,156,254,202,7,161,27,243,129,3,7,105,133,162,157,67,135,94,216,176,97,61,173,183,180,92,160,29,89,56,68,103,217,
183,111,127,99,227,217,25,206,152,192,74,72,184,217,196,199,102,230,232,169,252,183,51,121,107,184,112,210,50,121,235,116,152,205,230,176,185,152,201,188,102,89,134,25,206,50,115,9,19,200,238,221,79,51,
49,200,144,161,211,66,74,216,182,109,235,228,252,180,137,180,65,202,161,21,166,40,98,239,222,103,228,29,169,198,182,111,223,202,194,33,170,186,201,7,153,124,198,68,17,117,179,73,78,155,153,163,168,198,
7,162,139,26,100,82,116,237,233,86,74,151,223,106,109,187,251,3,70,150,48,234,165,189,27,200,219,144,247,184,203,134,53,213,146,44,176,29,59,118,210,49,105,101,215,174,157,228,145,40,16,154,208,192,136,
202,25,163,66,116,47,68,210,218,140,42,73,76,141,238,52,137,141,76,226,70,83,211,89,186,179,146,0,228,20,22,1,70,134,127,179,132,197,123,76,54,231,207,95,96,49,33,115,89,44,128,156,238,140,243,131,164,
181,25,60,167,74,0,228,79,88,192,22,25,254,85,85,109,97,49,76,69,197,38,38,24,242,57,162,232,152,242,8,20,13,146,243,97,86,197,218,75,20,245,209,10,139,21,39,235,103,194,25,1,68,53,223,32,49,48,37,76,
25,28,50,223,69,46,168,177,177,217,106,109,157,78,150,162,40,178,167,52,36,194,83,167,78,83,8,196,246,37,189,145,20,39,120,188,25,206,8,162,31,229,206,109,34,237,222,222,174,200,97,166,243,242,10,35,183,
246,244,116,70,254,156,176,53,90,204,124,150,200,18,114,28,151,155,91,128,139,157,112,18,110,54,241,177,25,120,42,0,16,254,1,0,81,1,0,81,1,0,32,42,0,32,42,0,32,42,0,0,68,5,0,68,5,0,68,5,0,128,168,0,128,
168,0,128,168,0,128,168,0,0,16,21,0,16,21,0,16,21,0,0,162,2,0,162,2,0,162,2,0,64,84,0,64,84,0,64,84,0,0,136,10,0,136,10,0,136,10,0,136,10,0,48,175,68,85,90,90,114,238,92,243,165,75,23,35,39,14,4,32,21,
109,38,89,230,167,178,90,91,203,203,165,41,100,168,142,4,65,16,69,17,70,3,82,212,102,146,40,252,179,88,138,168,118,168,166,160,40,144,210,54,147,68,162,98,83,152,89,173,109,187,119,63,13,115,1,169,107,
51,201,34,42,170,20,54,57,52,220,20,72,117,155,73,22,81,213,215,75,115,1,146,43,167,214,103,228,124,181,0,164,156,205,36,75,71,5,221,108,118,236,216,9,67,1,243,192,102,240,156,10,0,136,10,0,136,10,0,136,
10,0,0,81,1,0,81,1,0,81,1,0,32,42,0,32,42,0,32,42,0,0,68,5,0,68,149,90,92,186,116,81,254,12,161,182,246,40,45,22,75,81,67,195,25,182,137,45,39,79,158,160,196,88,151,132,138,193,78,199,62,140,173,169,121,
110,251,246,173,114,162,92,206,200,20,86,78,0,81,37,29,21,21,210,231,168,36,155,13,27,214,79,216,84,86,182,142,150,166,166,102,246,205,66,76,161,83,84,85,109,161,211,9,130,185,178,114,179,156,126,248,
240,17,74,164,77,219,182,109,45,45,45,145,83,88,34,46,31,68,149,164,144,177,146,29,55,54,158,157,114,43,251,102,33,214,101,160,179,144,174,200,65,85,87,63,51,185,36,54,155,157,18,89,49,40,27,243,84,148,
25,215,238,238,81,161,10,162,14,57,34,50,86,242,87,167,78,157,174,168,216,156,168,98,28,56,112,144,69,119,181,181,71,200,23,205,144,147,182,226,27,54,120,170,164,166,165,229,194,174,93,59,153,55,152,50,
3,109,165,60,177,118,149,212,64,162,16,148,212,98,181,182,177,48,47,18,218,68,77,172,88,23,3,162,2,209,193,106,109,37,57,145,191,154,178,27,131,22,242,99,51,187,142,168,148,129,4,67,186,10,127,24,91,76,
161,96,100,91,139,245,73,212,213,157,160,108,145,225,31,45,184,124,119,15,183,122,245,218,57,236,214,219,219,21,10,133,228,159,121,121,133,145,91,123,122,58,35,127,78,216,26,45,102,62,75,100,9,57,142,
203,205,45,192,197,78,56,9,55,155,248,216,12,60,21,0,8,255,0,128,168,0,128,168,0,0,16,21,0,16,21,0,16,21,0,0,162,2,0,162,2,0,162,2,0,64,84,0,64,84,0,64,84,115,164,182,246,40,123,123,58,14,159,154,131,
249,65,114,218,76,178,124,164,88,89,185,89,20,197,178,178,117,48,20,144,234,54,147,44,158,138,141,232,192,6,69,17,4,1,22,3,82,215,102,146,40,252,107,108,108,166,187,78,75,203,133,202,202,77,176,24,144,
186,54,147,44,162,138,156,11,89,20,29,48,23,144,186,54,147,68,19,105,147,55,103,159,154,99,224,4,144,210,54,147,68,163,41,85,87,239,129,161,128,121,96,51,120,78,5,0,68,5,0,68,5,0,68,5,0,128,168,0,128,
168,238,65,88,255,175,34,60,38,51,173,176,153,56,206,157,107,142,156,204,134,150,237,219,183,70,254,140,156,52,224,228,201,19,108,133,189,73,16,57,83,78,228,65,40,27,157,130,142,204,70,123,166,77,13,13,
103,240,158,10,68,53,15,177,217,236,162,40,146,161,147,36,104,189,164,164,152,25,61,27,162,153,77,102,67,75,125,253,105,250,91,93,189,135,37,178,121,6,152,20,35,7,103,151,119,97,178,81,68,204,136,35,72,
152,235,234,78,212,212,236,39,37,239,218,181,115,223,190,253,145,143,74,1,68,53,127,32,37,148,150,22,147,156,234,234,142,147,180,200,226,153,78,100,207,51,195,180,107,148,167,181,181,109,114,250,169,83,
167,233,128,138,136,33,209,73,63,86,107,219,177,99,199,69,209,65,126,140,84,202,198,76,7,16,213,60,132,84,81,84,84,68,62,135,12,157,188,9,137,129,189,10,32,187,157,25,166,93,163,204,211,77,120,197,32,
79,85,94,190,137,84,74,50,99,126,137,82,200,101,197,122,50,4,0,81,37,56,2,164,166,20,19,18,41,132,154,79,83,58,159,41,33,17,78,57,55,15,69,119,242,65,72,75,20,46,146,203,98,45,40,81,2,47,82,66,84,243,
61,252,163,144,239,252,249,11,204,107,201,58,137,236,120,152,114,146,69,114,110,19,66,56,121,23,146,77,228,148,109,116,10,90,226,48,253,41,152,14,76,165,3,226,7,166,210,1,0,64,84,0,64,84,0,64,84,0,0,136,
10,0,136,10,0,136,10,0,0,81,1,0,81,1,0,81,1,0,81,1,0,32,42,0,32,42,0,32,42,0,0,68,5,0,68,5,0,68,5,0,128,168,0,128,168,0,128,168,0,0,16,21,0,16,21,0,16,21,0,16,21,0,0,162,2,0,162,2,0,162,2,0,64,84,0,64,
84,0,64,84,0,128,228,21,149,32,8,13,13,103,44,150,34,90,167,21,54,237,18,155,15,23,128,148,179,153,196,139,138,234,229,228,201,19,130,96,86,132,167,54,163,191,101,101,235,14,31,62,50,229,220,103,0,36,
191,205,36,94,84,54,155,189,170,106,11,155,69,147,170,137,205,44,40,138,98,81,81,17,172,7,164,162,205,160,77,5,192,188,22,21,221,123,152,79,167,136,217,110,183,227,242,128,84,180,25,85,82,85,144,213,218,
74,85,67,45,78,90,175,174,222,3,139,1,169,104,51,201,34,42,10,145,39,172,0,144,162,54,131,54,21,0,16,21,0,16,21,0,16,21,0,0,162,2,0,162,2,0,162,2,0,64,84,113,231,210,165,139,187,119,63,205,214,107,107,
143,210,98,177,20,53,52,156,97,155,216,114,242,228,9,246,110,117,76,161,98,176,211,81,25,232,103,77,205,115,219,183,111,149,19,229,114,70,166,176,114,2,136,42,233,168,168,216,164,8,191,70,61,249,141,233,
178,178,117,180,52,53,53,239,221,251,76,172,139,65,167,168,170,218,66,167,19,4,115,101,229,102,57,253,240,225,35,148,72,155,182,109,219,202,222,239,102,41,44,17,151,15,162,74,82,200,88,201,142,27,27,207,
78,185,181,190,254,116,28,190,80,160,179,144,174,200,65,85,87,63,51,185,36,54,155,157,18,89,49,40,27,243,84,148,25,215,46,42,168,80,5,209,133,28,17,25,43,249,171,83,167,78,87,84,108,78,84,49,14,28,56,
200,162,187,218,218,35,228,139,102,200,73,91,143,29,59,142,11,7,79,149,188,180,180,92,216,181,107,39,243,6,83,102,160,173,148,39,214,174,146,125,21,75,106,177,90,219,38,127,15,75,155,168,137,21,235,98,
64,84,32,58,88,173,173,36,39,242,87,83,118,99,208,66,126,108,102,215,17,149,50,144,96,216,71,230,165,165,197,20,10,70,182,181,88,159,68,93,221,9,202,22,25,254,177,23,189,193,221,195,173,94,189,118,14,
187,245,246,118,133,66,33,249,103,94,94,97,228,214,158,158,206,200,159,19,182,70,139,153,207,18,89,66,142,227,114,115,11,112,177,19,78,194,205,38,62,54,3,79,5,0,194,63,0,32,42,0,32,42,0,0,68,5,0,68,5,
0,68,5,0,128,168,0,128,168,0,128,168,0,0,16,21,0,16,21,0,16,21,0,16,21,0,0,162,2,0,162,2,0,162,2,0,64,84,0,64,84,0,64,84,0,0,136,10,0,136,10,0,136,10,0,0,81,1,0,81,1,144,50,96,130,130,88,33,8,66,109,237,
17,54,142,249,177,99,199,15,31,62,194,166,132,98,179,1,212,214,30,173,171,59,206,38,143,98,216,108,246,83,167,78,203,179,236,80,126,171,181,117,215,174,167,171,171,247,40,194,83,13,208,223,71,30,89,31,
57,99,72,85,213,22,54,98,251,246,237,91,105,71,58,163,40,138,251,246,237,103,131,164,215,212,60,87,90,90,188,99,199,78,182,222,218,218,74,25,42,42,54,177,20,86,0,12,167,14,79,149,74,144,149,139,162,131,
205,251,68,74,32,187,159,156,135,77,12,197,86,216,244,80,242,252,81,187,118,237,36,13,76,200,79,2,163,173,164,4,182,194,20,101,177,20,209,185,72,75,148,114,224,192,11,108,70,28,218,183,178,114,19,253,
157,48,109,15,137,92,158,150,14,64,84,41,6,217,52,25,58,115,65,117,117,39,200,201,196,232,68,36,155,198,198,102,230,115,26,27,207,50,113,146,134,173,214,182,201,211,249,176,121,171,38,207,3,2,32,170,249,
236,223,228,89,57,40,150,187,163,125,201,71,177,201,59,200,119,81,152,71,98,163,163,49,127,37,231,177,219,237,228,12,107,106,246,163,170,33,170,212,131,188,199,161,67,47,176,240,140,98,185,243,231,37,
79,34,79,94,74,173,29,10,14,39,239,37,79,22,74,77,47,202,64,217,216,4,193,108,199,41,33,31,69,202,33,9,29,56,112,176,188,124,19,73,145,214,105,47,118,28,242,87,19,34,79,214,168,139,195,108,142,16,21,136,
50,108,18,42,230,118,200,238,41,238,98,243,68,177,20,146,28,155,30,106,6,40,3,101,99,211,76,177,200,109,202,108,20,94,134,157,143,228,166,206,157,107,38,23,87,82,82,34,103,110,106,58,59,89,144,44,46,5,
49,2,243,83,129,248,129,249,169,0,0,16,21,0,16,21,0,16,21,0,0,162,2,0,162,2,0,162,2,0,64,84,0,64,84,0,64,84,119,128,32,8,13,13,103,216,75,110,135,14,189,192,222,10,157,242,91,9,0,146,223,102,18,255,145,
34,213,75,109,237,81,65,48,203,63,217,91,161,176,27,144,162,54,147,120,79,101,179,217,171,170,182,176,87,182,233,246,67,21,116,238,92,51,45,248,230,7,164,168,205,36,87,155,138,110,54,116,203,41,43,91,
183,111,223,254,93,187,118,194,122,64,42,218,76,114,137,138,238,52,39,79,158,144,239,70,176,24,144,138,54,147,92,3,191,88,173,173,86,107,27,181,56,169,118,216,128,39,0,164,156,205,224,123,42,16,63,240,
61,21,0,0,162,2,0,162,2,0,162,2,0,64,84,0,64,84,0,64,84,0,0,136,10,0,136,10,0,136,10,0,136,10,0,0,81,1,0,81,1,0,81,1,0,32,42,0,32,42,0,32,42,0,0,68,5,0,68,5,0,68,5,0,128,168,0,128,168,0,128,168,0,128,
168,0,0,16,21,0,16,21,0,16,21,0,0,162,2,0,162,154,47,92,186,116,113,247,238,167,217,122,109,237,81,90,44,150,162,134,134,51,108,19,91,78,158,60,193,230,213,140,41,84,12,118,58,42,3,253,172,169,121,110,
251,246,173,114,162,92,206,200,20,86,78,0,81,37,29,21,21,155,20,225,57,51,55,108,88,63,97,83,89,217,58,90,154,154,154,247,238,125,38,214,197,160,83,84,85,109,161,211,9,130,185,178,114,179,156,126,248,
240,17,74,164,77,219,182,109,101,83,15,178,20,150,136,203,7,81,37,41,100,172,100,199,141,141,103,167,220,90,95,127,122,178,222,162,14,157,133,116,69,14,170,186,250,153,201,37,177,217,236,148,200,138,65,
217,152,167,162,204,184,118,119,143,10,85,16,117,200,17,145,177,146,191,58,117,234,116,69,197,230,68,21,227,192,129,131,44,186,171,173,61,66,190,104,134,156,180,245,216,177,227,184,112,240,84,201,75,75,
203,5,54,249,236,116,179,101,210,86,202,19,107,87,73,13,36,10,65,73,45,86,107,219,228,25,166,105,19,53,177,98,93,12,136,10,68,7,171,181,149,228,68,254,106,202,110,12,90,200,143,205,236,58,162,82,6,18,
12,233,138,78,87,90,90,76,161,96,100,91,139,245,73,212,213,157,160,108,145,225,31,45,184,124,119,15,166,39,5,241,3,211,147,2,0,32,42,0,32,42,0,32,42,0,0,68,5,0,68,5,0,68,5,0,128,168,0,128,168,0,128,168,
0,128,168,0,0,16,21,0,16,21,0,16,21,0,0,162,2,0,162,2,0,162,2,0,64,84,0,64,84,0,64,84,115,165,180,180,228,220,185,102,121,208,57,54,86,73,120,184,146,18,92,30,144,138,54,147,120,81,237,218,181,243,240,
225,35,229,229,155,42,43,55,177,74,41,43,91,71,41,113,24,110,18,164,40,73,110,51,137,31,76,115,223,190,253,138,240,48,116,162,232,16,4,51,27,43,79,20,197,146,18,120,42,144,146,54,147,20,109,42,170,157,
218,218,163,172,166,0,72,117,155,73,188,168,200,101,31,58,244,2,213,142,213,218,202,110,60,148,40,8,130,221,110,135,233,128,84,180,153,196,135,127,123,247,62,67,97,241,201,147,39,104,189,170,106,11,85,
13,27,39,181,186,122,15,172,7,164,162,205,36,94,84,59,118,236,140,252,137,217,92,64,170,219,12,158,83,1,0,81,1,0,81,1,0,81,1,0,32,42,0,32,42,0,32,42,0,192,172,192,68,218,119,133,209,104,200,205,205,190,
245,59,164,176,217,58,125,126,255,157,30,39,47,55,199,96,212,203,63,221,46,119,87,119,239,116,153,179,179,50,45,150,194,188,188,236,52,65,208,104,53,161,80,200,235,241,58,70,70,250,251,7,187,186,122,122,
122,250,230,80,0,0,81,37,11,75,151,44,250,147,205,143,71,166,252,191,223,52,91,91,47,223,209,65,52,26,245,182,45,85,6,195,45,81,245,244,246,253,244,103,245,147,115,46,90,104,89,247,240,131,11,23,20,241,
252,180,33,198,240,176,104,109,187,124,254,226,219,126,127,0,23,8,225,95,234,161,213,104,130,161,80,228,82,188,114,249,157,30,132,164,162,211,235,34,15,194,241,60,199,113,183,93,39,158,127,252,211,143,
109,219,250,228,194,133,22,5,199,77,56,105,228,98,22,204,84,134,200,169,117,1,60,85,74,137,74,167,9,41,130,145,41,69,150,252,52,193,60,44,58,102,127,144,210,146,21,19,14,162,214,168,148,74,165,63,34,138,
171,172,248,116,73,241,242,200,108,162,99,100,112,112,136,2,63,210,27,121,185,180,52,65,246,117,239,91,219,2,129,32,174,14,68,149,154,162,210,106,201,59,68,166,40,57,158,98,194,119,46,189,63,203,35,152,
205,166,5,150,66,118,16,114,47,204,65,169,120,210,20,47,107,234,193,178,251,139,87,220,39,159,168,187,167,239,252,133,183,109,246,78,159,207,31,89,146,220,156,172,229,247,45,161,179,127,124,245,58,46,
13,68,149,194,225,31,11,180,28,35,163,193,64,128,220,5,173,47,95,190,116,246,162,90,182,116,49,9,136,14,226,116,186,28,35,35,121,185,57,44,216,83,171,213,30,143,151,214,117,58,237,250,181,15,201,225,220,
245,27,29,13,255,222,236,159,212,21,225,241,120,58,108,157,180,188,222,242,38,219,17,160,77,149,146,168,213,170,96,24,167,211,121,163,221,198,214,201,99,228,100,103,206,102,119,242,75,43,151,47,101,123,
117,118,117,15,12,12,177,117,142,231,212,42,149,220,23,162,213,106,198,206,226,114,157,109,62,231,159,177,115,207,237,246,160,65,5,81,165,48,154,176,167,34,200,226,219,59,236,108,93,82,194,210,197,179,
217,61,55,39,59,39,39,139,237,245,241,213,27,20,206,177,117,158,227,84,234,49,81,21,228,231,134,198,233,232,232,28,117,58,81,237,16,213,188,246,84,170,49,79,69,22,223,213,213,235,118,187,217,207,165,139,
23,206,208,235,45,115,223,178,197,44,191,207,231,35,77,82,171,42,56,142,236,169,12,6,189,156,40,58,28,168,115,136,106,94,183,71,9,37,79,58,144,164,16,8,80,108,214,211,211,199,126,166,167,153,243,243,114,
62,113,247,37,139,23,176,252,189,189,55,169,77,165,8,187,60,182,80,107,141,101,147,83,104,209,235,180,168,118,136,106,126,139,74,201,171,120,102,239,236,37,134,235,212,172,26,87,192,178,165,139,102,222,
221,82,84,96,52,234,89,230,143,175,221,160,20,127,32,32,239,174,209,170,89,54,199,232,168,156,152,159,159,171,82,161,111,9,162,154,215,158,138,231,149,204,222,189,94,73,84,212,230,241,251,131,44,101,129,
165,112,102,1,132,99,63,41,167,207,23,184,126,195,70,41,62,105,231,49,1,169,213,99,158,170,179,179,71,78,52,232,245,235,214,150,161,230,33,170,249,219,160,82,147,168,184,113,79,229,163,148,161,97,177,
127,112,128,165,232,13,186,194,194,188,233,246,213,235,105,107,46,203,217,211,215,39,134,31,22,251,124,254,91,158,74,51,230,169,72,111,142,145,17,57,189,180,100,249,163,27,31,150,183,222,245,127,65,173,
211,105,41,212,164,255,139,82,169,156,240,26,7,152,227,221,22,85,112,55,22,73,94,137,173,251,124,62,182,210,222,222,153,145,158,198,214,151,46,89,216,222,62,245,160,89,139,23,89,200,136,217,238,87,175,
222,144,15,34,31,80,61,222,251,71,137,231,47,188,243,248,167,55,202,251,174,92,177,172,32,63,247,189,247,63,188,118,173,125,110,239,206,230,228,100,81,217,10,10,114,205,38,147,146,154,133,161,80,128,90,
133,254,128,215,231,243,122,188,78,151,123,120,88,124,243,173,119,113,137,33,170,120,163,145,30,82,141,189,180,234,245,142,61,111,189,209,110,123,224,254,229,236,150,95,144,159,173,213,106,61,30,207,228,
125,151,46,89,192,246,245,251,253,55,194,177,95,88,63,94,249,128,228,57,228,204,215,174,119,152,76,198,53,15,221,47,167,152,76,134,141,27,30,122,224,254,21,180,233,218,181,14,242,144,179,44,179,96,54,
61,252,240,170,133,11,10,105,125,88,116,216,59,187,2,129,0,201,155,52,76,247,8,250,31,25,141,186,204,204,52,250,171,120,11,87,24,162,74,132,167,10,5,198,30,179,250,188,99,158,106,96,96,104,104,64,76,79,
151,94,173,80,43,213,69,133,121,87,175,181,79,216,145,92,89,102,122,58,219,183,171,179,151,60,195,248,65,252,242,1,213,183,183,199,222,123,191,205,227,246,60,252,208,3,116,210,91,210,50,24,86,149,174,
188,191,120,121,135,173,171,245,242,199,189,189,55,103,46,240,2,75,193,167,54,174,165,35,180,181,125,124,249,163,107,131,67,195,19,50,208,189,32,77,48,127,174,106,115,127,223,32,174,47,68,149,8,79,165,
81,5,67,227,158,106,60,252,163,80,170,221,222,41,164,25,199,195,188,162,201,162,162,196,144,34,200,94,123,184,122,189,67,78,167,131,200,7,84,70,120,42,198,229,43,215,122,122,111,174,94,181,146,252,204,
109,141,31,78,177,96,65,62,45,55,218,237,127,188,212,234,24,25,157,178,180,203,150,46,220,248,200,67,195,195,142,215,207,191,211,223,63,181,102,168,240,58,157,134,202,48,48,56,132,235,155,194,29,21,19,
166,69,57,116,232,5,54,45,202,246,237,91,147,94,84,26,169,41,18,94,188,227,158,74,106,86,117,116,250,41,168,10,167,103,101,101,24,12,186,219,106,156,231,139,44,249,108,235,168,211,101,239,236,150,55,81,
243,73,62,32,175,156,226,210,80,192,118,238,15,111,254,123,227,171,151,175,92,167,125,229,204,108,177,88,10,42,54,127,138,220,209,228,29,201,97,174,95,87,214,119,115,160,177,249,181,233,20,197,72,207,
72,163,67,13,206,58,158,132,205,36,163,167,98,211,162,52,54,54,55,52,156,174,171,59,110,177,20,149,151,111,18,69,49,249,111,72,82,71,197,248,23,22,145,162,26,28,28,30,28,24,102,17,32,207,113,249,121,57,
87,175,221,114,71,36,51,163,94,207,118,236,232,232,138,124,211,220,231,15,200,7,84,114,210,39,85,83,190,197,71,17,230,133,129,33,173,86,83,88,144,71,254,39,43,51,253,86,145,84,42,114,71,210,145,109,93,
114,162,94,175,91,191,182,204,233,116,191,250,218,197,79,124,215,54,93,48,83,25,70,28,163,201,92,243,73,110,51,137,247,84,251,246,237,175,175,63,45,8,102,81,116,208,66,21,68,55,33,90,146,127,210,55,141,
74,37,191,235,32,247,254,177,32,202,102,239,146,55,21,221,222,177,190,160,40,79,222,20,126,53,233,22,126,159,95,222,164,84,242,51,191,232,68,242,184,118,189,227,236,43,127,120,189,229,109,170,55,121,71,
58,253,186,53,15,152,140,6,57,231,170,210,21,106,149,242,237,183,223,115,141,55,222,102,238,201,112,57,93,206,89,228,132,205,36,175,168,20,17,211,162,208,205,134,110,57,101,101,235,104,157,238,70,73,46,
42,165,138,159,50,252,35,108,246,30,57,2,204,204,72,215,141,191,94,164,84,42,243,242,114,88,250,208,176,227,230,237,145,152,207,79,178,242,179,173,228,166,148,202,89,93,29,114,74,205,191,123,195,214,217,
45,23,134,227,249,226,149,203,198,68,34,152,22,44,40,232,189,57,208,97,239,254,228,219,132,90,77,193,234,224,144,40,247,236,39,45,201,108,51,201,53,149,142,60,149,131,100,151,182,100,159,74,71,37,61,104,
26,179,228,72,79,197,26,63,253,3,131,108,19,249,27,249,75,144,204,140,52,157,86,205,210,201,77,5,111,255,192,209,47,225,99,91,41,244,163,227,207,178,36,36,233,243,23,47,13,12,14,201,229,41,200,207,162,
248,80,234,20,89,88,72,63,63,188,124,117,54,199,33,69,113,156,98,112,120,56,201,107,62,201,109,38,233,166,210,177,90,219,168,197,73,181,147,252,83,233,144,39,97,119,116,105,60,35,223,196,135,176,246,206,
158,244,52,51,91,207,207,203,98,141,156,188,188,44,121,23,123,231,196,241,146,72,14,212,196,146,163,62,229,172,69,69,144,91,108,251,240,234,250,181,171,228,238,16,179,201,72,33,98,94,94,182,219,237,233,
237,27,152,205,65,76,38,35,21,111,120,56,217,223,133,79,114,155,73,186,169,116,14,28,56,72,75,242,247,82,72,223,187,243,28,83,136,20,233,5,38,14,93,212,221,115,115,229,138,37,124,184,239,59,35,93,32,183,
67,30,36,39,59,131,237,210,63,48,52,185,239,91,122,221,201,231,147,223,165,152,101,248,119,171,131,100,72,244,250,124,178,127,163,227,232,117,90,157,86,211,221,125,115,114,241,166,105,80,73,162,114,140,
36,251,39,91,73,110,51,120,78,53,119,55,197,73,190,37,252,86,132,215,23,156,52,208,202,200,136,115,160,127,144,226,189,112,167,156,210,108,54,146,23,50,232,180,108,151,14,219,20,45,28,233,195,42,58,148,
86,51,7,79,21,142,30,3,62,143,151,31,223,157,156,161,201,104,160,211,205,254,125,139,244,52,147,223,231,147,62,66,1,16,85,98,68,21,126,155,150,117,48,76,233,10,58,187,251,210,211,199,34,64,90,145,250,
32,198,243,247,244,246,79,206,31,10,41,124,1,63,203,163,8,127,90,114,167,69,226,149,156,188,187,215,235,213,75,35,159,5,221,83,189,39,53,25,114,107,130,96,28,25,117,78,104,31,2,136,42,94,162,146,90,62,
33,166,37,111,248,161,237,228,60,212,146,89,190,108,1,107,35,101,101,8,193,208,88,254,190,190,129,9,189,133,145,93,14,178,62,239,52,252,35,63,19,110,92,5,152,155,26,25,117,25,141,122,233,231,236,70,172,
40,40,200,150,26,84,226,8,70,184,128,168,18,36,42,233,67,250,241,23,255,124,83,191,42,238,114,121,6,7,29,25,25,210,83,224,180,112,167,5,219,197,222,217,55,221,97,195,242,12,69,134,127,211,61,2,158,0,73,
55,220,209,55,150,115,104,216,65,250,100,71,211,233,63,249,123,97,114,83,11,44,249,148,89,76,238,199,190,16,213,188,174,56,169,235,47,48,174,132,105,227,165,174,158,190,180,241,247,0,89,128,231,118,123,
7,6,167,109,228,248,194,93,234,242,41,20,210,139,130,5,122,189,182,163,163,103,134,254,3,141,70,93,188,98,177,209,168,147,247,189,209,222,41,181,235,70,157,148,146,153,97,158,89,153,228,117,75,138,151,
40,165,126,151,192,200,8,68,5,81,37,76,84,74,185,115,194,231,157,246,163,166,254,254,97,218,26,25,200,245,244,14,204,240,104,213,239,245,223,122,83,105,44,110,76,51,25,245,57,153,233,228,67,72,141,244,
215,229,246,80,243,140,52,66,170,211,233,180,89,153,66,126,110,22,233,74,222,177,183,111,176,239,166,244,70,236,232,168,75,20,71,105,247,220,156,12,58,239,148,103,84,171,84,37,43,23,11,38,131,207,235,
35,119,231,116,122,112,113,33,170,68,133,127,188,252,70,185,47,48,173,167,242,120,125,131,195,34,249,138,91,162,234,235,159,225,176,116,40,249,176,28,175,32,31,101,48,104,88,138,217,172,167,133,197,144,
212,82,10,73,170,227,228,30,66,121,175,193,33,199,135,87,110,140,59,198,80,135,189,123,229,242,133,75,23,23,144,163,115,58,221,147,155,97,247,45,179,24,244,218,171,55,236,153,233,102,131,65,231,241,98,
32,78,136,42,9,60,149,223,55,211,231,183,125,125,131,233,194,88,4,56,50,234,26,25,153,169,195,218,239,139,120,167,86,201,147,179,162,134,153,118,210,199,243,202,241,7,196,145,93,249,210,136,156,221,253,
55,58,122,34,35,189,158,222,193,140,52,115,118,86,218,170,210,37,29,182,222,193,161,17,191,244,85,34,47,185,175,236,244,204,12,129,36,250,225,229,246,222,155,67,69,249,217,228,217,48,8,59,68,149,48,56,
158,147,223,162,240,120,102,234,131,238,31,20,115,196,17,214,7,216,221,243,9,111,54,208,49,229,195,82,67,136,68,248,206,187,31,145,163,35,235,39,25,200,207,133,39,64,237,52,114,80,20,245,57,93,83,4,111,
151,63,238,160,99,230,229,102,44,90,152,191,104,225,173,17,219,165,64,241,230,80,135,189,151,116,107,52,232,20,156,164,121,92,89,136,42,97,216,236,189,157,93,99,95,218,206,124,119,167,246,207,251,214,
107,179,60,236,205,254,33,146,135,28,188,177,221,123,251,134,104,33,223,168,213,169,117,210,40,45,42,214,72,163,243,122,188,126,183,199,227,118,121,131,211,247,67,144,47,186,122,189,147,36,151,145,110,
34,241,144,251,243,249,252,228,48,135,196,81,215,184,8,117,58,77,40,20,28,133,168,32,170,4,66,6,29,139,72,41,252,245,198,212,193,36,133,109,254,209,192,232,232,28,63,202,144,34,207,233,53,163,215,73,195,
181,143,58,221,184,178,119,15,134,40,3,18,38,163,142,92,162,203,133,94,10,136,10,68,3,138,39,245,122,141,232,24,245,7,48,163,41,68,5,162,65,122,154,145,218,111,253,3,152,253,0,162,2,81,177,0,158,207,202,
50,187,61,222,97,17,239,82,64,84,32,26,20,228,165,171,148,124,87,247,224,132,207,144,1,68,5,230,66,78,150,144,145,102,24,24,116,12,139,152,75,46,106,160,75,253,30,69,173,86,230,102,11,105,130,65,28,113,
117,118,99,232,76,136,10,204,14,142,227,4,179,206,239,15,134,199,104,146,30,15,243,60,167,213,168,76,70,109,154,160,167,173,131,67,35,221,189,34,230,8,134,168,192,108,49,26,52,5,121,105,83,110,114,186,
188,3,131,163,35,163,120,39,29,162,2,119,130,199,235,167,208,78,173,82,170,194,31,255,43,66,10,114,88,210,155,77,110,191,215,231,71,253,64,84,224,142,241,249,2,180,160,30,226,12,122,255,0,128,168,0,128,
168,102,102,251,246,173,108,30,148,221,187,159,166,159,13,13,103,216,207,228,159,160,0,192,102,146,84,84,245,245,167,203,202,214,85,87,239,169,168,216,196,42,133,126,30,62,124,100,195,134,245,176,30,144,
138,54,147,20,225,31,221,120,106,107,143,182,180,92,16,4,51,27,99,94,20,197,162,162,34,88,15,72,69,155,73,138,222,63,186,241,208,66,78,220,225,152,15,47,74,135,66,65,191,52,166,57,111,48,234,13,122,131,
74,53,199,74,118,57,134,75,236,93,6,142,15,113,209,44,94,128,227,70,56,174,79,201,247,42,213,78,149,138,87,105,120,142,75,185,74,78,102,155,73,188,168,14,29,122,161,169,169,185,177,241,44,221,105,232,
198,67,14,93,33,205,170,36,216,237,246,148,187,210,62,159,71,48,25,203,203,31,171,168,172,40,41,45,205,206,206,214,233,116,220,92,77,246,196,145,163,25,127,255,181,69,6,115,32,218,241,68,72,161,8,42,20,
163,156,187,157,231,94,83,171,46,232,116,62,141,78,201,43,83,165,158,147,220,102,18,47,170,186,186,19,181,181,71,168,154,40,38,182,90,91,169,106,168,197,73,233,201,63,149,78,36,126,191,47,35,205,188,231,
153,191,125,234,115,159,51,153,76,209,50,125,151,66,225,228,21,49,122,210,164,9,41,74,252,161,85,126,223,54,143,255,151,26,247,239,140,6,149,70,159,18,181,157,228,54,147,120,81,81,165,148,151,111,146,
127,86,85,109,73,57,7,229,245,184,62,255,159,183,253,221,179,251,162,37,167,241,48,50,182,175,228,145,179,242,112,10,143,66,145,22,10,253,87,183,111,131,95,252,129,209,239,214,155,184,164,143,6,147,220,
102,240,70,197,93,55,81,252,158,239,125,239,219,159,125,226,137,232,31,58,94,182,237,167,133,83,220,239,15,61,239,112,30,12,6,7,140,2,151,130,173,172,228,1,15,127,239,206,28,189,238,31,254,240,104,76,
20,197,226,191,56,226,226,20,153,193,208,215,70,221,70,39,190,171,135,168,18,23,245,125,235,224,55,63,85,94,30,219,211,196,81,90,20,13,102,5,67,127,227,116,5,60,248,102,17,162,138,59,193,96,176,98,211,
127,220,178,117,107,204,207,20,223,64,140,252,213,74,127,232,201,81,103,32,136,55,113,33,170,248,162,228,130,95,171,249,90,204,79,19,10,133,34,190,209,8,249,253,161,64,32,252,55,24,244,122,229,37,228,
31,19,64,200,231,83,140,119,111,80,54,121,93,58,142,223,47,39,74,127,35,102,30,97,155,164,231,107,110,55,29,193,205,41,62,235,11,24,220,112,86,16,85,124,221,212,147,79,62,145,151,159,63,247,64,235,253,
15,2,253,253,129,222,62,247,59,127,156,65,81,188,94,175,201,203,13,49,1,4,131,234,156,28,117,102,134,58,59,91,149,38,232,151,45,213,47,165,101,9,173,168,115,178,37,253,4,131,154,130,124,142,205,3,18,10,
209,142,10,158,31,211,21,253,204,149,126,106,242,243,57,149,74,157,157,165,80,169,198,54,113,156,38,63,143,54,145,50,205,15,175,209,90,44,126,159,63,45,24,122,220,237,153,97,202,31,0,81,69,91,84,126,239,
231,255,226,47,238,230,8,238,183,222,246,119,117,147,91,8,78,63,201,90,40,224,215,228,228,44,63,242,191,120,141,134,156,9,167,86,223,247,157,127,204,216,244,153,69,207,253,125,206,214,63,91,115,238,183,
107,94,123,69,250,123,238,149,133,95,221,235,119,56,72,45,37,63,249,87,67,241,202,32,233,193,227,89,241,79,63,200,219,241,249,128,99,36,224,116,10,27,55,148,158,60,193,211,17,190,127,72,147,155,179,248,
27,95,43,252,210,110,191,232,80,132,130,180,215,178,67,47,240,58,157,101,239,158,213,47,191,244,224,43,47,235,150,46,241,120,189,143,248,201,37,98,192,90,136,42,94,164,167,167,21,23,175,188,171,122,55,
24,200,177,168,138,10,13,229,143,77,219,152,82,170,92,215,174,147,162,140,37,197,129,81,39,169,133,215,106,221,29,54,114,71,55,95,106,120,247,179,79,117,159,248,183,254,198,166,75,127,250,84,231,143,126,
204,171,84,186,197,139,204,235,214,146,126,72,81,146,151,51,26,23,60,251,21,165,96,86,4,2,11,159,253,10,237,69,30,79,105,208,75,35,87,168,53,11,159,253,170,182,48,63,24,158,174,142,215,104,181,133,5,89,
85,79,188,247,212,159,223,56,248,109,117,122,26,197,136,249,193,80,26,102,212,158,19,120,78,53,23,150,46,91,162,214,104,228,32,205,219,246,161,247,163,43,212,32,209,173,121,72,115,223,178,160,195,225,
239,238,209,44,191,143,109,167,77,170,252,60,222,108,14,185,221,163,77,205,254,222,62,85,78,182,239,70,187,118,245,170,224,176,24,24,232,87,47,89,34,5,132,31,88,221,111,189,163,8,248,213,247,45,51,148,
127,138,5,102,65,239,232,200,165,119,211,30,123,180,191,185,49,237,209,141,35,20,52,146,71,226,121,143,221,238,186,124,153,36,20,244,122,134,94,125,85,157,145,73,109,45,225,209,141,174,143,62,18,214,61,
76,206,135,246,245,245,244,232,23,47,202,217,182,213,117,229,99,10,17,93,87,174,82,100,72,141,49,218,228,31,30,162,29,45,127,189,231,227,103,159,83,154,140,228,6,85,102,51,73,81,60,127,97,248,181,63,40,
77,38,133,86,171,83,40,10,2,254,143,112,177,225,169,226,67,81,225,173,183,161,73,42,62,155,93,251,96,153,254,145,245,226,207,95,12,82,184,117,179,223,249,202,111,229,12,180,30,232,187,25,114,185,6,190,
123,152,76,223,248,248,127,80,21,22,250,108,54,10,231,252,157,157,206,215,222,8,231,249,221,200,175,126,173,43,91,173,127,236,81,175,181,109,248,216,241,176,168,200,254,85,226,235,111,152,214,174,161,
21,243,186,135,197,55,90,184,112,91,136,254,82,115,139,142,32,173,104,165,21,106,20,165,125,234,81,219,145,31,106,10,10,116,11,22,144,120,168,193,212,241,253,255,93,176,251,191,44,61,248,77,251,209,90,
166,198,49,31,168,82,119,124,247,112,214,159,61,101,92,245,64,200,227,225,84,74,183,205,198,27,244,139,246,63,43,119,111,80,214,12,180,169,32,170,184,97,48,220,122,71,142,211,235,141,21,155,212,11,23,
40,211,210,200,46,131,35,35,10,165,82,178,114,57,3,153,190,193,48,122,246,21,205,170,251,205,91,62,167,94,182,84,183,118,13,249,162,144,215,203,70,12,163,150,149,243,213,215,50,255,238,111,181,101,171,
52,43,150,167,87,127,41,48,52,164,176,119,114,26,13,167,214,58,222,122,71,157,149,101,46,123,80,157,155,235,120,243,109,94,246,144,183,181,190,2,154,252,124,77,110,110,247,241,159,186,219,219,133,71,214,
134,188,30,165,94,71,110,199,99,179,41,205,230,222,23,79,81,52,120,235,170,107,53,35,127,188,212,255,82,195,226,154,253,65,143,87,193,241,228,102,175,61,247,141,5,95,253,155,133,251,190,26,112,134,103,
220,9,41,52,184,210,8,255,226,134,203,117,219,68,79,174,150,11,222,214,54,82,142,159,148,160,82,133,38,52,69,194,175,252,144,55,51,61,241,167,183,100,64,138,10,167,83,72,22,24,24,80,230,100,71,234,80,
83,90,162,104,239,80,168,84,180,213,211,217,229,237,234,42,248,242,110,127,127,63,69,125,198,251,75,167,16,149,215,107,88,177,220,176,114,5,57,37,99,105,137,127,104,184,251,196,255,9,247,235,105,218,191,
253,93,117,78,142,212,207,113,251,155,71,74,163,177,253,208,247,30,110,57,151,254,233,242,160,211,169,52,24,6,154,206,182,62,253,165,146,99,63,26,250,253,171,35,239,189,79,17,32,186,41,224,169,226,135,
221,222,41,175,123,222,125,207,125,241,162,249,63,253,185,240,249,237,218,135,202,200,105,80,148,21,154,240,20,136,227,148,105,130,143,116,34,11,77,254,200,42,24,228,77,230,160,40,70,30,63,208,211,163,
200,204,84,72,237,31,218,221,39,182,92,40,252,171,93,244,55,56,205,44,215,65,175,47,237,177,141,190,254,126,99,105,41,41,202,180,122,149,210,100,150,142,172,211,145,71,26,108,254,173,210,104,152,216,11,
162,86,121,236,29,93,63,254,201,226,255,241,117,233,70,16,12,42,245,134,222,159,255,162,247,23,47,166,63,254,105,82,41,253,7,6,121,152,7,68,21,47,174,93,189,230,27,119,71,254,190,62,85,94,30,111,50,81,
83,202,243,222,251,129,238,110,62,35,195,223,221,227,187,118,157,228,228,121,255,3,215,185,63,40,130,1,195,230,77,163,47,55,210,79,105,14,70,81,244,182,125,200,20,69,113,23,111,52,168,23,88,196,147,191,
8,142,58,165,80,240,220,31,252,61,189,138,229,247,81,8,39,89,191,70,35,94,184,168,224,149,226,197,55,121,181,122,170,226,132,120,173,86,216,184,225,202,87,159,253,227,103,42,223,125,82,122,101,219,120,
127,73,48,252,32,152,28,32,5,123,138,169,94,120,87,234,141,157,63,252,145,42,35,221,188,118,141,74,16,50,42,55,7,131,46,239,205,126,78,201,147,83,115,43,20,221,74,4,50,16,85,188,232,31,28,250,240,195,
15,199,218,87,143,61,74,205,146,225,186,19,238,55,223,210,22,175,244,124,208,202,235,180,194,142,207,143,252,234,215,67,63,252,23,223,213,107,194,206,191,228,212,26,85,110,78,250,151,255,202,249,219,223,
15,254,243,143,28,191,252,181,202,98,81,102,103,241,25,233,212,136,162,131,8,127,249,5,146,22,29,100,232,95,126,236,251,248,106,198,127,171,86,144,97,135,167,225,160,70,148,251,250,141,129,198,38,215,
149,143,233,56,20,16,142,185,157,80,136,54,145,47,10,121,125,134,21,247,81,131,106,244,189,15,84,153,153,164,210,209,214,182,204,63,169,224,194,209,163,252,132,151,226,189,177,191,60,47,117,114,144,171,
84,42,125,67,195,29,223,254,174,42,45,141,124,224,178,127,124,254,161,198,179,249,95,252,194,208,239,207,169,213,154,110,158,27,154,90,195,0,109,170,24,160,84,105,94,252,249,255,125,224,249,7,36,115,213,
233,210,190,248,5,242,63,10,229,173,47,103,53,203,150,106,246,62,35,189,10,20,17,65,169,23,45,204,248,235,255,62,33,81,53,254,90,134,233,115,79,50,169,40,38,124,118,193,75,189,8,237,255,243,59,129,145,
17,146,171,187,189,163,251,167,63,147,4,195,113,226,249,11,202,214,86,222,160,163,60,246,163,255,44,245,239,145,95,210,235,123,126,250,111,90,75,145,187,195,238,233,144,250,24,41,28,13,140,140,118,213,
29,167,160,174,251,39,39,2,195,195,55,207,252,202,245,209,21,242,123,156,94,127,243,165,6,222,160,247,118,117,95,249,202,190,252,167,191,120,237,27,223,116,188,253,142,89,171,187,160,82,42,84,232,170,
152,11,220,234,213,107,231,176,91,111,111,87,228,39,116,121,121,133,145,91,123,122,58,35,127,78,216,26,45,102,62,75,100,9,201,254,114,115,11,162,92,113,161,64,227,217,151,115,115,115,99,119,109,126,242,
131,35,134,127,248,250,66,163,57,192,73,93,17,20,7,210,255,132,66,202,160,219,35,57,43,142,147,30,242,82,195,73,175,191,149,24,254,223,178,116,90,56,173,150,117,193,211,18,8,247,70,72,127,245,122,202,
32,137,141,28,17,219,52,58,74,30,140,18,165,247,12,149,188,198,96,240,112,220,62,179,193,99,48,71,247,127,148,112,179,137,143,205,32,252,155,35,129,144,226,224,243,7,227,119,243,99,61,233,212,70,154,20,
254,221,150,24,145,206,27,12,159,16,254,201,155,76,38,250,75,187,40,205,38,18,158,62,164,248,141,90,233,212,25,112,149,33,170,248,86,28,175,252,77,227,217,151,126,245,171,121,246,255,210,133,20,151,149,
220,75,70,67,10,141,3,3,81,205,31,52,90,253,254,127,248,250,27,111,188,17,99,39,21,191,255,145,54,164,24,226,185,239,27,245,188,22,110,42,197,69,213,208,112,198,98,41,170,173,61,186,151,26,247,97,216,
224,56,41,208,99,161,214,126,249,75,213,141,191,105,156,7,166,64,81,223,32,207,125,203,164,27,137,118,83,42,42,200,67,61,159,60,121,130,141,74,75,6,35,15,73,203,134,128,102,25,216,66,249,83,76,84,49,26,
232,135,234,37,90,35,247,70,150,48,166,195,18,241,42,237,222,189,95,249,214,243,207,59,157,209,254,170,47,94,62,74,165,80,24,67,138,54,21,87,99,214,223,52,196,112,212,151,57,95,8,186,231,210,13,183,186,
122,79,89,217,186,166,166,230,67,135,94,152,156,231,216,177,227,108,240,103,90,104,165,190,254,116,162,108,38,185,194,63,170,136,154,154,231,4,65,72,185,56,240,103,39,235,63,91,249,217,250,23,95,28,29,
29,141,158,166,98,171,42,186,246,154,176,156,28,28,87,167,83,125,43,77,112,25,146,116,28,165,202,202,205,100,27,45,45,23,152,120,68,81,76,230,249,43,230,248,156,106,230,238,206,57,119,134,54,53,157,21,
4,243,174,93,59,19,88,134,57,214,163,74,61,228,112,126,227,27,7,190,251,157,239,127,230,51,143,111,174,168,88,190,98,57,27,161,118,238,162,226,56,125,40,100,8,197,96,48,77,78,58,166,147,83,92,229,185,
215,213,170,55,180,58,175,86,167,138,125,207,68,194,47,89,124,10,144,116,15,127,201,119,83,208,156,162,205,18,181,70,235,116,251,94,250,245,111,78,159,249,181,74,201,27,77,6,147,209,164,82,205,209,88,
157,195,195,165,153,233,70,158,15,70,47,122,37,63,20,84,72,99,169,247,42,249,110,165,106,68,173,230,85,106,158,75,246,158,190,198,198,179,100,21,231,207,95,32,103,69,109,4,138,101,172,214,86,242,87,143,
60,178,158,82,200,143,137,183,191,60,153,146,158,42,118,216,108,118,210,21,5,129,169,219,226,231,120,158,212,37,169,194,229,115,186,6,239,230,80,175,103,229,222,91,151,127,70,171,160,166,20,147,211,190,
125,251,21,225,193,159,41,133,77,81,117,224,192,193,36,50,128,185,189,81,1,0,72,141,142,10,0,238,93,81,109,216,176,190,182,246,232,116,91,227,240,184,128,10,64,7,103,253,239,20,18,156,59,215,204,194,128,
72,168,132,145,147,88,130,132,147,88,179,137,155,205,196,202,83,149,149,173,163,133,34,221,138,138,205,177,187,72,212,78,85,72,253,173,155,38,247,194,83,221,89,44,69,84,134,170,170,45,187,118,237,76,185,
110,250,123,147,56,152,77,28,108,38,86,45,85,249,149,136,216,181,32,169,193,74,247,51,106,191,82,53,53,54,158,157,180,181,77,20,197,154,154,231,236,118,123,228,180,43,32,153,137,181,217,196,199,102,98,
232,169,216,132,92,141,141,205,49,58,133,40,58,88,119,106,105,105,73,107,107,219,164,173,226,142,29,59,169,12,69,69,69,13,13,103,224,169,82,197,83,197,212,108,226,99,51,49,236,168,8,63,249,118,196,244,
21,44,170,151,154,154,253,147,111,57,138,240,27,79,20,31,83,53,177,123,94,105,105,49,76,54,37,136,181,217,196,193,102,230,46,42,214,236,155,185,73,71,162,223,187,247,25,138,83,99,84,65,245,245,167,233,
118,210,212,212,60,205,38,51,43,33,221,156,216,27,46,32,25,250,42,18,107,54,113,176,25,60,167,2,32,202,224,57,21,0,16,21,0,16,21,0,16,21,0,0,162,2,0,162,2,0,162,2,0,64,84,0,64,84,0,204,3,254,191,0,3,0,
12,87,199,42,89,90,140,92,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* MainViewComponent::msg_ui_background2_png = (const char*) resource_MainViewComponent_msg_ui_background2_png;
const int MainViewComponent::msg_ui_background2_pngSize = 12070;

// JUCER_RESOURCE: msg_ui_background3_png, 12312, "../../graphic assets/MSg_UI_Background3.png"
static const unsigned char resource_MainViewComponent_msg_ui_background3_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,1,28,0,0,1,159,8,2,0,0,0,2,178,250,193,0,0,0,25,116,69,88,116,83,111,
102,116,119,97,114,101,0,65,100,111,98,101,32,73,109,97,103,101,82,101,97,100,121,113,201,101,60,0,0,3,104,105,84,88,116,88,77,76,58,99,111,109,46,97,100,111,98,101,46,120,109,112,0,0,0,0,0,60,63,120,
112,97,99,107,101,116,32,98,101,103,105,110,61,34,239,187,191,34,32,105,100,61,34,87,53,77,48,77,112,67,101,104,105,72,122,114,101,83,122,78,84,99,122,107,99,57,100,34,63,62,32,60,120,58,120,109,112,109,
101,116,97,32,120,109,108,110,115,58,120,61,34,97,100,111,98,101,58,110,115,58,109,101,116,97,47,34,32,120,58,120,109,112,116,107,61,34,65,100,111,98,101,32,88,77,80,32,67,111,114,101,32,53,46,48,45,99,
48,54,48,32,54,49,46,49,51,52,55,55,55,44,32,50,48,49,48,47,48,50,47,49,50,45,49,55,58,51,50,58,48,48,32,32,32,32,32,32,32,32,34,62,32,60,114,100,102,58,82,68,70,32,120,109,108,110,115,58,114,100,102,
61,34,104,116,116,112,58,47,47,119,119,119,46,119,51,46,111,114,103,47,49,57,57,57,47,48,50,47,50,50,45,114,100,102,45,115,121,110,116,97,120,45,110,115,35,34,62,32,60,114,100,102,58,68,101,115,99,114,
105,112,116,105,111,110,32,114,100,102,58,97,98,111,117,116,61,34,34,32,120,109,108,110,115,58,120,109,112,77,77,61,34,104,116,116,112,58,47,47,110,115,46,97,100,111,98,101,46,99,111,109,47,120,97,112,
47,49,46,48,47,109,109,47,34,32,120,109,108,110,115,58,115,116,82,101,102,61,34,104,116,116,112,58,47,47,110,115,46,97,100,111,98,101,46,99,111,109,47,120,97,112,47,49,46,48,47,115,84,121,112,101,47,82,
101,115,111,117,114,99,101,82,101,102,35,34,32,120,109,108,110,115,58,120,109,112,61,34,104,116,116,112,58,47,47,110,115,46,97,100,111,98,101,46,99,111,109,47,120,97,112,47,49,46,48,47,34,32,120,109,112,
77,77,58,79,114,105,103,105,110,97,108,68,111,99,117,109,101,110,116,73,68,61,34,120,109,112,46,100,105,100,58,48,55,56,48,49,49,55,52,48,55,50,48,54,56,49,49,56,67,49,52,68,69,48,68,65,55,70,69,50,51,
52,57,34,32,120,109,112,77,77,58,68,111,99,117,109,101,110,116,73,68,61,34,120,109,112,46,100,105,100,58,57,69,49,54,65,69,69,54,67,49,66,66,49,49,69,53,65,50,53,51,57,51,53,50,52,70,48,50,70,54,50,51,
34,32,120,109,112,77,77,58,73,110,115,116,97,110,99,101,73,68,61,34,120,109,112,46,105,105,100,58,57,69,49,54,65,69,69,53,67,49,66,66,49,49,69,53,65,50,53,51,57,51,53,50,52,70,48,50,70,54,50,51,34,32,
120,109,112,58,67,114,101,97,116,111,114,84,111,111,108,61,34,65,100,111,98,101,32,80,104,111,116,111,115,104,111,112,32,67,83,54,32,40,77,97,99,105,110,116,111,115,104,41,34,62,32,60,120,109,112,77,77,
58,68,101,114,105,118,101,100,70,114,111,109,32,115,116,82,101,102,58,105,110,115,116,97,110,99,101,73,68,61,34,120,109,112,46,105,105,100,58,48,50,56,48,49,49,55,52,48,55,50,48,54,56,49,49,56,50,50,65,
67,52,50,48,65,66,69,48,67,52,57,49,34,32,115,116,82,101,102,58,100,111,99,117,109,101,110,116,73,68,61,34,120,109,112,46,100,105,100,58,48,55,56,48,49,49,55,52,48,55,50,48,54,56,49,49,56,67,49,52,68,
69,48,68,65,55,70,69,50,51,52,57,34,47,62,32,60,47,114,100,102,58,68,101,115,99,114,105,112,116,105,111,110,62,32,60,47,114,100,102,58,82,68,70,62,32,60,47,120,58,120,109,112,109,101,116,97,62,32,60,63,
120,112,97,99,107,101,116,32,101,110,100,61,34,114,34,63,62,102,159,50,102,0,0,44,70,73,68,65,84,120,218,236,157,11,116,20,215,153,231,187,170,223,221,234,214,11,189,144,120,27,144,100,27,249,193,211,
142,214,196,32,77,98,236,140,25,188,155,144,51,11,139,38,39,156,61,102,15,51,201,224,25,156,40,123,206,144,192,156,48,73,134,13,236,90,201,6,2,179,59,204,73,240,193,137,195,172,45,33,39,49,142,45,132,
19,140,31,146,192,54,47,117,235,137,94,221,82,191,31,251,239,190,162,104,244,66,8,169,213,45,255,127,167,142,168,190,85,117,187,184,245,253,235,251,190,219,85,247,74,203,150,45,87,17,66,38,15,153,77,64,
8,69,69,8,69,69,8,69,69,8,161,168,8,161,168,8,161,168,8,33,20,21,33,211,128,102,2,199,232,116,218,162,162,37,121,121,185,122,189,142,45,56,227,241,122,189,173,173,237,13,13,151,252,126,63,91,99,74,68,
165,213,106,74,75,215,124,244,209,135,191,250,213,73,135,195,193,22,156,241,88,173,214,199,30,123,172,180,116,245,155,111,190,19,8,4,216,32,119,68,157,147,51,251,174,14,128,143,106,105,177,189,246,218,
107,184,129,177,249,62,35,158,234,147,79,62,201,202,202,202,203,203,235,236,236,98,131,76,126,78,149,159,159,91,87,87,199,134,251,172,241,246,219,111,231,231,231,177,29,166,68,84,70,163,177,171,139,183,
171,207,28,221,221,221,70,163,129,237,48,37,162,34,159,77,194,225,176,36,73,108,7,138,138,16,138,138,16,138,138,16,66,81,17,66,81,17,66,81,17,66,81,17,66,40,42,66,40,42,146,212,72,146,20,14,135,217,14,
83,34,42,183,219,157,145,145,193,134,251,172,129,139,238,118,123,216,14,83,34,42,187,189,109,205,154,53,108,184,207,26,184,232,118,123,43,219,97,60,220,245,171,31,189,189,125,143,60,242,144,197,146,210,
209,209,225,243,249,216,130,51,158,148,148,148,181,107,215,22,22,22,157,63,255,126,40,20,98,131,220,57,84,158,192,176,207,122,189,174,184,120,105,110,110,142,78,167,101,11,206,120,124,62,127,75,75,91,
99,227,37,222,67,167,80,84,132,144,201,204,169,8,33,20,21,33,20,21,33,20,21,33,132,162,34,132,162,34,132,162,34,132,162,34,132,76,2,19,25,75,93,146,196,96,85,49,255,40,255,198,172,68,63,220,90,31,254,
241,110,145,229,49,10,229,209,119,147,135,148,68,63,202,163,215,44,223,233,187,38,64,108,107,140,208,56,209,245,33,43,67,63,170,162,227,132,69,159,20,143,249,71,249,55,102,37,250,225,214,250,240,143,119,
75,40,52,70,97,104,244,221,66,67,74,162,31,67,163,215,28,186,211,119,77,128,216,214,24,161,113,162,235,67,86,134,126,164,167,34,36,9,61,149,114,95,100,243,17,66,79,69,8,69,69,8,69,69,8,69,69,8,161,168,
8,161,168,8,161,168,8,33,20,21,33,20,21,33,20,21,25,23,21,21,91,171,170,14,97,229,212,169,87,246,239,223,39,10,11,10,242,47,92,56,39,254,42,203,241,227,199,172,86,107,101,229,139,56,68,57,28,71,61,247,
220,198,216,221,176,196,238,80,92,92,132,3,69,57,118,94,189,122,165,40,199,10,74,148,143,226,52,196,55,42,135,163,102,113,110,132,162,74,86,96,226,229,229,235,135,20,150,148,172,16,139,195,225,132,149,
15,63,202,102,179,139,29,176,190,97,195,179,88,57,124,248,168,216,4,17,86,85,29,172,171,171,23,59,188,252,242,73,232,22,133,216,84,86,182,30,7,110,218,52,66,133,40,132,186,120,57,40,170,153,192,145,35,
199,42,43,119,11,163,31,142,213,106,185,219,10,33,194,134,134,166,3,7,14,138,143,16,91,105,233,58,135,195,129,175,192,166,93,187,118,67,198,195,245,3,237,193,31,242,114,80,84,51,129,134,134,70,161,171,
216,66,37,168,195,250,137,19,39,239,182,78,184,163,33,245,64,72,80,84,117,245,105,124,93,117,117,237,112,223,40,28,93,108,12,73,166,14,13,155,96,170,129,65,35,5,138,53,116,17,215,41,216,237,118,139,229,
46,92,150,226,136,68,61,72,171,148,0,79,124,11,28,151,18,46,42,236,217,179,23,217,20,92,22,175,8,61,213,76,96,207,158,125,59,119,238,24,109,43,52,0,49,8,169,192,225,96,5,1,222,104,59,195,179,21,23,23,
42,177,28,156,15,98,72,17,94,142,157,170,193,191,65,81,99,156,6,161,168,146,44,8,84,178,160,17,117,130,29,224,112,16,200,193,232,225,82,32,179,49,20,184,125,251,14,165,23,17,14,10,53,227,111,172,11,194,
122,89,217,250,17,125,102,93,93,61,47,199,84,147,40,99,169,195,74,68,24,131,27,234,230,205,91,198,176,42,66,18,220,102,18,197,83,33,254,193,13,27,161,11,26,136,157,191,36,169,109,38,129,194,63,228,235,
226,174,131,156,129,22,67,146,215,102,152,83,17,50,115,69,37,186,149,173,86,139,242,59,12,33,201,104,51,9,215,81,129,116,115,195,134,141,236,168,32,201,107,51,156,73,145,16,230,84,132,80,84,132,80,84,
132,16,138,138,16,138,138,16,138,138,16,66,81,17,66,81,17,66,81,17,66,40,42,66,40,42,66,40,42,66,40,42,66,8,69,69,8,69,69,8,69,69,8,161,168,8,161,168,8,161,168,8,33,20,21,33,20,21,33,20,21,33,132,162,
34,132,162,34,132,162,34,132,162,34,132,80,84,132,80,84,132,80,84,132,16,138,138,16,138,42,74,113,113,209,153,51,181,23,46,156,171,170,58,196,171,66,146,218,102,18,110,126,42,180,81,105,233,58,78,250,
70,146,215,102,18,40,252,43,40,200,71,235,52,52,52,82,81,36,169,109,38,129,68,101,179,217,75,74,86,52,52,52,85,84,108,165,185,144,228,181,153,68,17,21,26,101,231,206,29,170,232,252,173,180,21,146,212,
54,147,40,162,58,113,226,228,234,213,43,225,202,145,125,30,62,124,148,22,67,146,215,102,56,145,54,33,51,55,167,34,132,162,34,132,80,84,132,80,84,132,80,84,132,80,84,132,16,138,138,16,138,138,16,138,138,
16,66,81,145,33,20,20,228,31,63,126,236,194,133,115,88,176,130,143,226,161,30,108,170,172,124,81,148,99,57,115,166,22,229,40,172,170,58,164,20,98,193,62,108,67,138,42,174,156,58,245,10,44,207,106,181,
138,143,21,21,91,241,17,214,9,211,196,250,115,207,109,140,53,208,105,121,134,122,211,166,141,226,33,110,241,28,183,120,246,84,225,192,129,131,98,19,86,112,206,144,28,10,247,236,217,43,10,177,96,157,87,
153,162,154,6,32,30,177,82,86,182,110,200,166,186,186,122,97,157,155,55,111,217,182,109,139,178,103,220,112,58,157,144,74,113,113,145,80,203,174,93,187,71,220,237,196,137,147,213,213,167,203,203,215,243,
106,82,84,211,79,67,67,99,81,81,161,42,250,94,183,195,225,28,99,183,35,71,142,173,90,181,50,206,167,119,248,240,209,154,154,90,232,89,132,127,66,93,35,162,156,124,108,88,24,255,187,0,69,69,84,48,89,196,
123,136,0,225,166,206,158,173,31,99,79,135,195,161,4,138,113,214,21,28,20,188,229,203,47,159,172,170,58,56,70,246,37,86,98,195,63,120,48,94,98,138,106,26,60,21,254,66,87,136,157,198,54,65,40,42,254,47,
210,193,59,41,157,13,240,69,163,249,82,120,36,252,23,16,1,242,130,78,22,26,54,193,189,0,45,33,190,26,123,140,4,196,93,216,231,192,129,131,113,62,183,61,123,246,85,86,238,22,221,125,54,155,125,72,199,195,
206,157,59,68,215,5,54,109,223,254,60,254,138,240,79,209,33,114,66,148,243,18,83,84,241,166,177,49,50,58,2,82,166,225,155,148,254,107,85,180,171,45,254,209,20,164,190,121,243,150,33,133,136,235,68,152,
55,188,115,143,18,154,44,248,230,47,33,204,169,8,161,168,8,161,168,8,33,20,21,33,20,21,33,20,21,33,132,162,34,132,162,34,132,162,34,132,80,84,132,80,84,132,80,84,132,80,84,137,129,24,120,228,212,169,87,
148,119,230,8,73,70,155,73,148,87,63,202,203,215,59,28,14,241,98,2,33,73,109,51,137,226,169,148,1,180,142,31,63,54,45,111,158,147,164,35,97,109,38,129,194,191,234,234,90,220,117,234,234,234,203,203,215,
209,98,72,242,218,76,162,136,42,246,117,244,49,70,38,34,36,241,109,38,129,38,210,134,55,23,227,81,226,198,67,139,33,201,107,51,124,157,158,144,153,155,83,17,66,81,17,66,40,42,66,40,42,66,40,42,66,40,42,
66,8,69,69,8,69,69,8,69,69,8,153,40,156,245,99,170,168,168,216,90,86,182,78,204,187,177,127,255,190,242,242,245,88,111,104,104,68,121,81,81,161,213,106,21,211,87,11,78,156,56,137,143,67,94,10,138,125,
169,225,212,169,87,112,184,120,218,45,246,245,33,84,184,107,215,110,155,205,62,228,157,162,3,7,14,226,91,80,46,166,240,193,215,29,63,126,12,235,156,135,138,162,74,98,96,190,59,119,238,16,211,189,65,48,
176,111,252,21,51,154,54,54,54,173,90,181,114,207,158,189,195,231,215,129,228,242,243,243,135,204,115,35,14,140,125,126,116,251,246,231,197,211,110,149,149,47,86,85,29,218,176,225,89,85,116,130,28,81,
97,113,113,17,36,4,17,86,85,29,172,169,169,197,177,219,182,109,193,249,80,81,12,255,146,27,168,8,214,172,76,101,253,242,203,39,197,4,193,19,120,250,19,10,132,14,71,220,4,33,89,173,150,33,243,249,162,68,
53,56,209,219,62,56,73,49,215,227,136,147,104,17,138,42,201,128,120,96,208,66,69,98,93,88,191,152,215,116,252,179,86,143,61,125,168,195,225,20,42,82,42,132,239,66,164,7,207,134,163,240,93,248,136,16,49,
254,243,163,50,252,35,147,15,220,11,210,42,68,128,103,207,214,11,33,109,218,180,81,113,83,35,134,127,195,17,58,20,211,135,14,199,26,193,34,222,38,18,21,66,90,112,143,135,15,31,21,59,192,67,162,6,241,237,
132,158,106,70,121,42,241,17,30,105,180,64,110,12,55,53,70,184,136,180,13,138,138,213,140,200,199,196,124,190,132,162,154,105,32,226,18,153,149,48,122,33,39,69,33,177,225,31,34,180,209,42,65,38,86,83,
83,59,164,80,140,34,132,165,184,184,112,248,92,189,208,21,212,59,36,209,34,113,131,47,41,18,66,79,69,8,69,69,8,69,69,8,161,168,8,161,168,8,161,168,8,33,20,21,33,20,21,33,20,21,33,132,162,34,132,162,34,
132,162,34,132,162,34,132,80,84,132,80,84,132,80,84,132,16,138,138,16,138,138,16,138,138,16,66,81,17,66,81,17,66,81,17,66,40,42,66,40,42,66,40,42,66,40,170,105,196,106,181,42,115,150,97,229,230,128,198,
28,181,152,36,165,205,76,191,168,208,46,199,143,31,19,147,193,136,70,41,41,89,113,224,192,193,216,137,6,9,73,34,155,153,126,81,217,108,246,13,27,158,21,147,193,160,153,196,156,49,14,135,35,63,63,159,214,
67,146,209,102,152,83,17,50,163,69,165,76,10,136,136,217,110,183,243,242,144,100,180,153,196,154,73,177,161,161,17,77,131,140,83,21,157,43,154,22,67,146,209,102,56,63,21,33,204,169,8,161,168,8,161,168,
8,33,20,21,33,20,21,33,20,21,33,132,162,34,132,162,34,132,162,34,132,80,84,132,80,84,132,80,84,132,80,84,132,16,138,138,16,138,138,16,138,138,16,66,81,17,66,81,17,66,81,17,66,40,42,66,226,140,134,77,48,
35,89,189,122,101,101,229,139,98,84,228,234,234,211,187,118,237,174,168,216,186,106,213,202,237,219,159,87,70,75,86,69,135,34,194,38,155,205,94,85,117,40,118,120,215,19,39,78,238,217,179,151,205,72,79,
21,39,96,145,23,46,156,59,126,252,152,82,2,139,20,67,100,225,175,176,102,49,180,55,150,51,103,106,167,101,44,226,157,59,119,188,252,242,201,146,146,21,165,165,235,112,194,80,84,236,86,72,11,155,176,52,
52,52,225,228,69,33,84,36,10,177,80,81,20,213,52,80,92,92,36,70,241,182,90,173,195,101,115,224,192,65,97,157,88,129,213,42,158,33,110,56,28,206,162,162,66,156,155,195,225,216,188,121,203,225,195,71,71,
220,13,226,177,90,45,156,11,130,162,74,8,16,56,9,45,61,247,220,198,186,186,250,209,118,67,28,133,232,171,188,124,125,156,79,15,65,29,116,85,85,117,16,222,114,255,254,125,80,215,24,242,19,35,188,198,58,
88,252,167,120,137,41,170,120,83,83,83,139,20,5,43,101,101,235,206,158,173,31,219,105,196,255,244,224,160,224,133,224,163,224,45,113,2,149,149,187,71,220,205,26,193,34,206,48,54,252,195,189,128,151,152,
162,138,55,240,78,240,84,34,112,130,215,26,59,7,139,243,185,137,97,144,21,111,227,136,224,28,45,245,194,166,177,207,159,80,84,241,11,255,176,192,3,192,101,141,177,27,44,27,218,67,4,24,127,55,181,109,219,
86,17,203,225,4,142,28,185,45,167,18,61,43,209,89,210,10,149,241,199,99,195,63,165,247,130,76,0,142,165,126,215,192,243,156,58,245,10,98,36,220,230,43,42,182,150,150,174,131,105,194,10,81,2,115,132,141,
150,149,173,87,188,132,205,102,135,125,143,145,116,17,138,138,16,194,240,143,16,138,138,16,138,138,16,66,81,17,66,81,17,66,81,17,66,81,17,66,40,42,66,40,42,66,40,42,66,8,69,69,8,69,69,8,69,69,8,161,168,
8,161,168,8,161,168,8,33,20,21,33,20,21,33,20,21,33,20,21,33,132,162,34,132,162,34,132,162,34,132,80,84,132,80,84,132,80,84,132,144,196,21,149,213,106,85,230,204,220,191,127,31,167,72,34,73,109,51,211,
63,231,47,218,165,170,234,144,152,119,76,124,44,45,93,231,112,56,104,55,36,73,109,102,250,61,149,205,102,223,176,225,89,49,129,18,110,63,104,160,51,103,106,177,112,206,76,146,164,54,147,88,57,21,110,54,
184,229,148,148,172,216,181,107,247,182,109,91,146,232,50,43,147,59,225,210,138,89,171,81,18,59,125,53,98,21,4,39,202,4,80,202,52,80,40,143,157,117,27,102,129,221,98,167,135,18,245,12,63,80,217,1,135,
28,63,126,76,148,163,54,101,2,98,88,155,114,50,170,232,124,245,98,182,111,236,131,120,73,185,199,139,194,228,37,1,109,38,177,68,37,236,67,185,27,37,203,117,221,185,115,71,113,113,161,152,11,84,92,218,
17,131,123,252,143,196,228,159,117,117,245,98,46,80,49,225,154,50,87,252,145,35,199,80,213,136,95,49,226,129,66,57,85,85,7,81,46,118,120,249,229,147,202,12,191,229,229,136,136,156,35,218,25,4,22,255,105,
136,63,59,54,147,88,162,138,78,79,216,132,123,39,110,207,176,143,100,185,174,144,208,158,61,251,196,36,159,176,239,3,7,14,110,218,52,145,140,217,98,177,220,109,98,128,175,70,139,225,27,197,199,195,135,
143,42,217,5,206,225,200,145,163,216,58,92,225,80,111,101,229,238,49,102,215,78,34,18,208,102,52,9,210,52,8,145,197,10,238,196,88,146,43,105,134,117,198,78,155,139,251,229,93,217,171,18,203,225,64,56,
58,56,189,187,77,48,196,138,18,200,9,63,134,19,19,243,97,151,149,173,31,50,49,54,206,86,232,74,81,99,50,146,176,54,163,81,145,123,78,154,225,25,16,132,40,186,130,53,163,196,110,183,195,243,140,167,6,104,
32,118,254,82,171,213,162,244,107,141,83,213,74,136,40,82,38,33,36,49,157,182,18,35,13,57,10,62,13,81,211,140,9,2,19,10,254,248,59,9,192,15,224,174,47,140,27,233,10,242,34,196,33,208,21,76,86,20,34,0,
195,10,162,148,113,170,20,26,16,253,13,88,65,106,52,70,170,128,175,134,103,67,228,35,62,86,84,108,141,106,210,138,111,196,141,92,36,90,216,103,196,112,20,33,235,104,41,28,161,167,154,102,162,65,212,14,
225,34,160,37,68,86,34,220,90,181,106,165,82,136,248,100,156,249,18,36,132,10,149,152,16,46,101,140,201,237,81,231,246,237,59,160,13,225,148,196,177,16,48,92,159,34,197,154,154,211,251,247,239,59,123,
182,126,120,54,130,157,169,171,73,135,19,105,19,194,240,143,16,138,138,16,138,138,16,66,81,17,66,81,17,66,81,17,66,40,42,66,40,42,66,40,42,66,8,69,69,8,69,69,8,69,69,8,69,69,8,161,168,8,161,168,8,161,
168,8,33,20,21,33,20,21,33,20,21,33,132,162,34,132,162,34,132,162,34,132,80,84,132,80,84,132,80,84,132,80,84,132,16,138,138,16,138,138,16,138,138,16,66,81,17,66,81,17,66,81,17,66,40,42,66,40,42,66,40,
42,66,8,69,69,8,69,69,8,69,69,8,69,69,8,161,168,8,161,168,8,161,168,8,33,20,21,33,20,21,33,20,21,33,132,162,34,132,162,34,132,162,34,132,80,84,132,80,84,132,80,84,119,160,184,184,232,204,153,218,11,23,
206,85,86,190,136,143,167,78,189,130,117,44,40,231,229,33,201,104,51,211,47,170,109,219,182,28,56,112,176,180,116,93,121,249,58,209,40,37,37,43,80,178,122,245,74,90,15,73,70,155,209,76,251,25,236,218,
181,27,127,11,10,242,29,14,167,213,106,177,217,236,248,232,112,56,138,138,232,169,238,9,52,233,254,253,251,132,205,53,52,52,162,157,81,82,85,117,8,246,135,27,252,115,207,109,20,187,161,169,177,169,174,
174,30,155,98,141,242,196,137,147,123,246,236,77,204,255,90,130,219,140,156,32,151,31,87,84,180,84,178,32,66,14,171,213,42,62,86,84,108,197,71,24,37,254,35,88,135,201,138,128,68,44,40,137,255,25,110,218,
180,17,214,6,9,97,105,104,104,218,185,115,71,236,86,220,215,197,38,172,224,156,113,9,80,8,21,137,66,44,9,171,168,196,183,153,233,23,21,12,17,55,84,180,14,238,166,226,198,131,66,24,171,221,110,79,124,105,
41,247,251,178,178,117,67,54,225,222,47,172,115,243,230,45,8,87,148,61,227,134,211,233,132,229,9,79,5,133,140,102,127,240,72,213,213,167,203,203,215,39,209,29,45,193,109,102,250,69,133,59,40,46,252,241,
227,199,112,71,135,7,71,211,96,5,133,104,175,4,191,180,56,195,162,162,66,145,55,227,210,142,177,219,145,35,199,86,173,138,119,184,127,248,240,209,154,154,90,232,25,237,137,230,29,35,137,87,78,30,97,161,
226,93,227,127,23,152,49,54,51,253,57,21,110,228,177,31,55,108,120,54,89,238,151,194,100,113,69,225,166,206,158,173,31,35,75,22,23,62,254,103,8,93,137,12,4,10,169,170,58,56,154,179,130,67,19,247,120,56,
52,56,174,196,111,249,4,183,25,254,78,117,79,158,74,132,34,136,157,198,182,69,40,10,186,138,243,233,225,70,46,122,156,133,47,26,205,151,66,111,248,47,32,2,228,5,157,57,158,42,169,129,150,224,172,162,145,
253,168,154,65,160,34,186,128,227,124,110,123,246,236,171,172,220,141,184,8,235,54,155,125,72,199,3,130,37,209,117,129,77,219,183,63,47,58,208,32,66,69,135,200,9,81,206,75,76,81,197,155,198,198,166,138,
138,173,72,153,70,76,166,133,65,171,162,93,109,241,15,171,32,245,33,97,146,42,250,123,142,8,243,134,119,238,81,66,147,133,180,108,217,114,182,2,33,204,169,8,161,168,8,161,168,8,33,20,21,33,20,21,33,20,
21,33,228,142,240,119,170,123,194,108,54,101,103,207,186,245,57,172,178,217,90,252,129,192,221,214,147,147,157,101,50,27,149,143,30,183,167,181,173,99,180,157,103,101,102,20,20,204,206,201,153,149,106,
181,234,244,186,112,56,236,243,250,156,253,253,93,93,61,173,173,237,237,237,157,19,56,1,66,81,37,10,11,23,204,251,179,245,107,99,75,254,253,245,218,134,198,75,119,85,137,78,167,221,244,236,6,147,233,150,
168,218,59,58,255,229,95,79,12,223,115,222,220,130,21,143,62,52,119,78,190,44,143,26,98,244,245,57,26,154,46,157,61,247,167,64,32,200,11,196,240,47,249,208,235,116,161,112,56,118,41,92,186,248,110,43,
129,84,12,70,67,108,37,146,44,75,146,116,219,117,146,229,181,79,60,190,105,227,211,115,231,22,168,36,105,200,151,198,46,22,171,5,231,0,247,197,171,67,79,149,156,162,50,232,194,170,80,108,73,126,65,110,
170,213,210,55,250,155,32,195,41,46,90,50,164,18,173,78,163,86,171,3,49,81,92,121,217,19,69,133,139,99,119,115,56,251,123,122,122,17,248,65,111,240,114,169,169,86,197,215,125,216,208,20,12,134,120,117,
40,170,228,20,149,94,15,239,16,91,162,150,100,196,132,231,47,124,56,206,26,44,150,148,57,5,179,69,37,112,47,194,65,105,100,104,74,86,52,245,80,201,253,133,75,238,83,190,168,173,189,243,108,253,159,108,
246,22,191,63,16,123,38,217,89,153,139,239,91,128,111,255,244,242,85,94,26,138,42,137,195,63,17,104,57,251,7,66,193,32,220,5,214,23,47,94,56,126,81,45,90,56,31,2,66,37,46,151,219,217,223,159,147,157,37,
130,61,173,86,235,245,250,176,110,48,232,87,46,127,88,9,231,174,94,107,62,245,255,106,3,195,186,34,188,94,111,179,173,5,203,219,117,239,138,3,9,115,170,164,68,171,213,132,162,184,92,174,107,215,109,98,
29,30,35,107,86,198,120,14,135,95,90,186,120,161,56,170,165,181,173,187,187,87,172,75,178,164,213,104,148,190,16,189,94,55,248,45,110,247,233,218,51,129,49,59,247,60,30,47,19,42,138,42,137,209,69,61,21,
128,197,95,111,182,139,245,136,18,22,206,31,207,225,217,89,179,178,178,50,197,81,159,94,190,134,112,78,172,203,146,164,209,14,138,42,47,55,59,124,147,230,230,150,1,151,139,205,78,81,205,104,79,165,25,
244,84,176,248,214,214,14,143,199,35,62,46,156,63,119,140,94,111,133,251,22,205,23,251,251,253,126,104,18,89,85,232,38,138,167,50,153,140,74,161,195,233,100,155,83,84,51,58,31,5,106,25,58,136,72,33,24,
68,108,214,222,222,41,62,166,165,90,114,115,178,238,120,248,130,249,115,196,254,29,29,55,144,83,169,162,46,79,44,200,214,196,110,74,9,22,163,65,207,102,167,168,102,182,168,212,178,70,22,246,46,30,98,184,
138,180,234,166,2,22,45,156,55,246,225,5,249,121,102,179,81,236,252,233,149,107,40,9,4,131,202,225,58,189,86,236,230,28,24,80,10,115,115,179,53,26,246,45,81,84,51,218,83,201,178,90,216,187,207,23,17,21,
114,158,64,32,36,74,230,20,204,30,91,0,209,216,47,178,167,223,31,188,122,205,134,18,127,228,224,65,1,105,181,131,158,170,165,165,93,41,52,25,141,43,150,151,176,229,41,170,153,155,80,105,33,42,233,166,
167,242,163,164,183,207,209,213,211,45,74,140,38,195,236,217,57,163,29,107,52,98,107,182,216,179,189,179,83,12,117,228,247,7,110,121,42,221,160,167,130,222,156,253,253,74,121,113,209,226,199,214,60,170,
108,189,231,255,130,214,96,208,35,212,196,255,69,173,86,15,121,140,131,76,240,110,203,38,184,23,139,132,87,18,235,126,191,95,172,92,191,222,146,158,150,42,214,23,46,152,123,253,250,200,99,166,206,159,
87,0,35,22,135,95,190,124,77,169,68,169,80,123,179,247,15,133,103,235,207,175,125,98,141,114,236,210,37,139,242,114,179,63,248,240,226,149,43,215,39,246,236,108,86,86,38,206,45,47,47,219,146,146,162,70,
90,24,14,7,145,21,6,130,62,191,223,231,245,185,220,158,190,62,199,187,127,124,159,151,56,89,61,213,144,105,81,246,239,223,151,248,35,164,10,116,145,31,169,130,98,241,249,6,127,111,189,118,221,22,12,6,
68,97,94,238,44,189,126,228,174,133,133,11,230,220,60,208,123,45,26,251,69,245,227,83,42,132,231,80,118,190,114,181,25,38,174,108,194,146,146,98,90,179,250,225,103,158,94,255,240,67,247,167,165,222,197,
48,157,86,75,202,231,215,174,121,234,11,107,11,151,46,84,169,194,246,150,214,43,87,175,55,219,90,58,59,111,192,31,134,67,65,179,217,80,144,159,3,47,154,200,45,159,224,54,51,253,158,74,140,137,87,93,93,
123,234,212,201,35,71,142,22,20,228,151,150,174,139,255,208,147,19,243,84,225,224,224,207,172,126,223,160,167,234,238,238,237,237,118,164,165,69,12,93,171,214,230,207,206,185,124,229,250,144,3,225,202,
50,210,210,196,177,173,45,29,240,12,55,43,9,40,21,106,111,207,199,62,248,176,201,235,241,62,250,240,3,248,82,165,48,197,100,122,176,120,233,253,133,139,155,109,173,141,151,62,237,232,184,49,246,9,207,
41,200,251,220,154,229,168,161,169,233,211,75,31,95,233,233,237,27,178,3,194,191,84,171,229,75,27,214,119,117,246,36,114,203,39,184,205,36,214,84,58,88,176,130,155,16,26,104,251,246,68,31,78,93,167,211,
132,194,131,175,87,248,110,134,127,8,165,174,219,91,172,169,230,155,97,94,254,112,81,161,48,172,10,137,199,30,46,95,109,86,202,81,137,82,161,58,198,83,9,46,125,114,165,189,227,198,178,7,151,206,157,51,
251,182,228,71,82,205,153,147,139,229,218,117,251,123,23,26,157,253,3,35,158,237,162,133,115,215,172,122,184,175,207,249,246,217,243,93,93,35,107,6,39,111,48,232,112,14,221,61,189,137,220,242,9,110,51,
9,145,83,41,211,162,160,93,112,203,81,69,71,162,196,221,40,193,39,215,209,233,116,193,155,41,144,239,166,167,138,164,85,205,45,8,174,132,221,103,102,166,155,76,6,151,203,115,43,224,150,229,252,130,92,
113,160,199,227,181,183,180,41,155,144,62,41,21,202,234,17,34,243,62,135,243,204,31,222,205,200,72,187,111,209,60,248,64,195,237,63,91,21,20,228,33,89,58,247,238,251,112,92,67,14,196,206,43,87,148,116,
222,232,254,221,155,103,199,126,50,48,45,61,21,231,208,211,151,232,145,66,34,219,76,98,77,165,35,166,114,16,229,98,32,226,68,239,168,184,153,230,196,138,170,167,167,175,167,187,79,148,203,146,52,228,87,
96,200,204,108,52,138,173,205,205,173,177,79,154,251,3,65,165,66,181,36,143,214,23,135,8,179,254,220,133,127,127,237,119,117,103,223,235,236,236,142,73,181,34,207,97,192,29,33,204,27,210,211,184,114,121,
9,132,253,230,91,231,238,248,172,109,154,213,130,122,250,157,3,137,220,242,9,110,51,211,239,169,148,105,81,84,209,233,27,26,26,154,144,113,138,1,190,19,189,163,66,163,9,15,235,253,19,65,148,205,222,154,
106,77,81,188,196,229,43,183,98,188,57,249,57,202,81,209,71,147,110,17,240,7,148,77,106,53,92,154,28,12,142,250,246,46,228,113,229,106,51,22,72,232,129,226,197,150,20,179,178,105,197,35,15,64,216,253,
3,131,79,9,62,88,188,68,171,81,191,115,246,188,219,237,25,79,79,134,219,229,118,141,99,79,218,204,104,112,216,231,137,243,248,154,71,20,47,132,168,172,163,179,75,217,132,116,127,221,231,215,8,87,19,8,
4,95,63,125,6,145,94,84,42,234,242,245,159,51,25,13,170,200,164,108,3,167,127,251,135,80,204,235,88,102,179,169,124,221,227,226,161,65,184,62,28,21,235,0,199,12,68,181,203,31,121,32,47,247,86,151,221,
181,235,45,239,254,233,131,136,72,172,41,101,79,62,222,213,221,139,192,111,28,253,153,218,167,190,240,68,87,87,239,153,183,223,229,245,77,226,240,47,121,209,68,126,104,26,12,188,98,61,149,72,126,186,186,
123,196,38,104,68,121,19,36,35,61,213,160,215,138,114,184,169,208,237,47,56,6,34,248,197,86,73,10,163,254,113,158,9,180,119,246,220,133,238,158,94,229,124,242,114,51,245,250,200,51,25,243,231,206,198,
199,139,151,46,143,167,30,164,127,184,15,244,244,245,241,226,82,84,211,3,34,52,241,240,56,130,52,159,127,232,143,176,246,200,227,69,131,228,230,100,138,194,156,156,76,229,16,123,203,208,241,146,32,135,
200,67,21,81,132,91,27,255,201,4,131,161,166,139,151,149,111,132,187,19,1,97,78,206,44,56,201,142,206,238,241,84,146,146,98,198,177,125,125,124,22,158,162,154,30,69,169,35,207,40,137,23,55,16,225,13,75,
126,218,218,111,68,30,144,141,146,158,102,213,68,31,2,202,154,149,46,74,110,116,245,12,239,251,142,60,238,20,125,168,66,188,75,162,86,223,221,213,233,233,117,248,110,30,30,121,121,68,171,49,26,244,6,189,
238,198,141,158,49,114,179,219,19,170,136,168,156,253,124,101,43,201,59,42,146,215,77,73,17,223,18,49,214,128,207,31,26,54,208,74,127,191,171,187,171,7,241,158,42,242,75,174,218,98,49,195,11,153,12,122,
113,72,179,173,109,120,157,17,125,162,42,189,78,209,237,93,157,18,164,237,247,250,228,155,135,67,150,41,102,19,190,174,119,220,253,227,105,169,41,1,191,63,242,18,10,161,168,166,71,84,209,167,105,85,209,
167,203,71,116,5,45,109,157,105,105,150,65,123,77,179,96,47,101,255,246,142,174,225,251,135,195,42,127,48,32,246,81,69,95,45,185,219,83,146,213,146,114,184,207,231,51,70,70,62,11,121,188,222,241,28,14,
183,102,181,154,251,7,92,67,242,67,66,81,197,75,84,145,62,186,176,208,146,47,230,71,219,88,144,201,44,94,52,71,244,230,101,166,91,17,210,137,253,59,59,187,71,235,214,67,185,162,207,187,13,255,224,103,
162,201,85,80,184,169,254,1,183,217,108,140,124,28,223,136,21,121,121,179,34,9,149,163,159,35,92,80,84,211,36,170,200,139,244,55,31,252,243,143,252,168,184,219,237,237,233,113,166,167,71,158,3,76,77,181,
68,3,188,112,180,15,163,115,180,106,163,242,12,199,134,127,200,196,198,51,144,11,164,27,237,232,27,220,179,183,207,9,125,138,218,12,198,59,191,47,12,55,53,167,32,23,59,59,18,251,103,95,138,106,70,55,92,
164,235,47,120,83,9,163,198,75,173,237,157,169,169,230,216,0,207,227,241,117,247,140,154,228,248,163,93,234,202,87,168,34,15,10,230,25,141,250,230,230,246,49,250,15,116,58,109,225,146,249,102,179,65,57,
246,218,245,150,72,94,55,224,66,73,70,186,101,108,101,194,235,22,21,46,80,71,250,93,130,253,253,20,21,69,53,109,162,82,43,157,19,126,223,168,47,53,117,117,245,97,107,108,32,215,222,209,29,10,141,58,124,
108,192,23,80,170,85,15,198,141,169,41,102,99,86,70,26,124,8,212,136,191,110,143,23,233,25,52,2,213,25,12,250,204,12,107,110,118,38,116,165,28,216,209,217,211,121,35,242,68,236,192,128,219,225,24,192,
225,217,89,233,248,222,17,191,81,171,209,20,45,157,111,77,49,249,125,126,184,59,151,203,203,139,75,81,77,87,248,39,43,79,148,251,131,163,122,42,175,207,223,211,231,128,175,184,37,170,206,174,49,170,69,
85,74,181,146,172,130,143,50,153,116,162,196,98,49,98,17,49,36,50,165,112,68,117,146,210,67,168,28,213,211,235,188,248,201,181,155,142,49,220,108,111,91,186,120,238,194,249,121,112,116,177,207,245,42,
105,216,125,139,10,76,70,253,229,107,246,140,52,139,201,100,240,250,56,16,39,69,149,0,158,42,224,31,235,245,219,206,206,158,52,235,96,4,216,63,224,238,239,31,171,195,58,224,15,222,242,84,106,25,206,10,
137,153,126,216,203,243,234,155,227,159,197,118,229,71,70,228,108,235,186,214,220,30,27,233,181,119,244,164,167,90,102,101,166,62,88,188,160,217,214,209,211,219,31,8,6,81,115,196,125,205,74,203,72,183,
66,162,23,47,93,239,184,209,155,159,59,11,158,141,131,176,83,84,211,134,36,75,202,83,20,94,239,88,125,208,93,61,142,44,71,191,232,3,108,107,191,195,147,13,168,83,169,22,137,16,68,120,254,253,143,225,232,
96,253,144,129,242,142,253,16,144,167,193,65,33,234,115,185,71,8,222,46,125,218,140,58,115,178,211,231,205,205,157,55,247,214,136,237,145,64,241,70,111,179,189,3,186,53,155,12,42,41,162,121,94,217,73,
176,13,62,80,59,193,240,47,250,20,185,88,23,15,78,76,74,181,114,76,68,7,235,143,157,99,10,190,81,111,208,26,34,163,180,104,68,146,134,239,245,250,2,30,175,215,227,246,133,238,212,67,8,77,166,167,165,64,
60,112,127,126,127,0,14,179,215,49,224,190,41,66,36,102,139,23,229,95,189,214,214,214,209,195,139,75,79,53,61,192,160,167,34,82,138,142,153,52,114,48,137,176,45,48,16,28,24,152,224,75,25,145,200,115,116,
71,100,52,68,134,107,31,112,121,120,101,39,225,206,200,38,32,81,63,102,128,87,116,187,217,75,65,81,145,201,0,241,164,209,168,115,56,7,2,65,206,104,74,81,145,201,32,45,213,140,252,173,171,155,111,124,80,
84,100,82,44,64,150,51,51,45,30,175,175,207,193,103,41,40,42,50,25,228,229,164,105,212,114,107,91,207,144,215,144,9,69,69,38,66,86,166,53,61,213,212,221,227,236,115,240,197,196,73,131,93,234,159,81,180,
90,117,246,44,107,170,213,228,232,119,183,180,245,178,65,40,42,50,46,36,73,178,90,12,129,64,40,242,126,100,244,231,97,89,150,244,58,77,138,89,159,106,53,98,107,79,111,127,91,135,131,115,4,83,84,100,188,
152,77,186,188,156,212,17,55,185,220,190,238,158,129,254,1,62,147,78,81,145,187,193,235,11,32,180,211,106,212,154,232,203,255,170,176,10,14,43,242,100,147,39,224,243,7,216,62,83,196,244,119,84,60,247,
220,70,49,15,74,69,197,86,124,60,117,234,21,241,177,184,184,136,151,231,30,241,251,131,14,167,167,171,103,160,253,134,19,97,94,91,167,163,179,171,31,37,201,174,168,4,183,25,117,78,206,236,233,61,131,134,
134,166,151,94,250,233,123,239,93,248,234,87,191,210,216,216,84,94,190,190,180,116,157,207,231,43,40,200,63,127,254,2,133,65,146,206,102,18,162,75,29,55,158,170,170,67,117,117,245,86,171,69,140,49,239,
112,56,242,243,243,105,61,36,25,109,38,33,114,170,19,39,78,98,129,19,119,58,103,194,147,50,225,112,40,224,247,35,141,49,153,141,38,163,105,194,243,201,187,157,125,69,246,86,147,36,135,39,117,38,222,160,
36,245,75,82,167,90,238,80,107,93,26,141,172,209,201,73,56,213,111,34,219,204,244,139,106,255,254,125,53,53,181,213,213,167,113,167,193,141,167,172,44,50,215,144,213,106,181,219,237,73,119,165,253,126,
175,53,197,92,90,250,120,89,121,89,81,113,241,172,89,179,12,6,195,132,103,167,62,118,240,80,250,223,125,107,158,201,18,156,236,120,34,172,82,133,84,170,1,201,115,93,150,222,210,106,234,13,6,191,206,160,
150,213,201,210,206,9,110,51,211,47,170,35,71,142,85,85,29,68,51,29,56,112,176,161,161,17,77,131,140,19,229,137,63,149,78,44,129,128,63,61,213,242,252,142,191,121,230,75,95,74,73,73,153,44,211,119,171,
84,46,89,53,69,143,142,235,194,170,162,64,248,193,128,127,147,55,240,43,157,231,119,102,147,70,103,76,138,214,78,112,155,225,155,191,147,128,207,235,254,242,127,218,244,183,47,236,154,44,57,9,126,254,
227,131,166,191,255,246,220,20,203,84,191,143,129,59,171,62,172,250,64,35,253,216,108,242,24,83,164,36,140,6,25,254,205,40,130,1,239,15,127,248,253,47,62,245,212,20,220,241,226,229,102,177,72,170,251,
3,225,239,58,93,123,67,161,110,179,149,186,186,23,248,64,237,189,153,163,207,243,210,75,135,166,68,81,34,254,139,35,110,73,149,17,10,127,107,192,99,118,241,197,42,138,106,250,162,190,239,237,253,135,207,
149,150,78,237,215,196,81,90,94,73,149,25,10,255,181,203,29,244,242,161,117,138,42,238,132,66,161,178,117,159,127,118,227,198,169,79,123,227,237,175,150,6,194,79,15,184,130,33,190,90,79,81,197,23,181,
20,250,86,229,183,166,252,107,194,225,112,204,35,69,225,64,32,28,12,70,255,134,66,62,159,178,132,111,142,100,22,246,251,85,55,31,57,199,110,202,186,24,238,76,41,140,252,141,25,83,77,108,138,252,190,230,
241,160,6,143,164,250,162,63,104,242,208,89,81,84,241,117,83,79,63,253,84,78,110,238,196,3,173,15,63,10,118,117,5,59,58,61,231,223,27,67,81,178,209,168,203,201,30,156,178,62,20,210,102,101,105,51,210,
181,179,102,105,82,173,198,69,11,141,11,177,44,192,138,54,107,86,68,63,161,144,46,47,87,18,195,6,134,195,56,80,37,203,131,186,194,199,236,200,71,93,110,174,164,209,104,103,101,170,52,154,193,77,146,164,
203,205,193,38,40,211,242,232,35,250,130,130,128,63,144,26,10,175,245,120,39,107,48,67,138,138,140,67,84,1,223,151,191,242,149,123,169,193,243,199,63,5,90,219,224,22,66,163,207,178,17,14,6,116,89,89,139,
15,254,179,172,211,193,153,72,90,237,125,255,244,143,233,235,158,156,247,226,223,101,109,252,243,71,206,252,246,145,183,222,136,252,61,243,198,220,111,238,12,56,157,80,75,209,207,255,183,169,112,105,8,
122,240,122,151,252,207,31,231,108,254,114,208,217,31,116,185,172,107,86,23,31,63,38,163,134,31,237,215,101,103,205,255,206,183,102,127,173,34,224,112,170,194,33,28,181,104,255,62,217,96,40,216,249,252,
178,215,94,125,232,141,215,12,11,23,120,125,190,85,1,184,68,142,88,70,81,197,139,180,180,212,194,194,165,247,212,238,38,19,28,139,38,127,182,169,244,241,81,147,41,181,198,125,229,42,20,101,46,42,12,14,
184,160,22,89,175,247,52,219,224,142,110,188,122,234,253,47,62,211,118,236,255,118,85,215,92,248,194,51,45,63,249,153,172,209,24,230,207,179,172,88,14,253,64,81,17,47,103,54,207,121,225,27,106,171,69,
21,12,206,125,225,27,56,10,30,79,109,50,70,94,93,212,234,230,190,240,77,253,236,220,80,116,190,18,89,167,215,207,206,203,220,240,212,7,207,252,197,181,189,223,215,166,165,34,70,204,13,133,83,57,165,226,
132,224,239,84,19,97,225,162,5,90,157,78,9,210,124,77,23,125,31,127,130,132,196,240,200,195,186,251,22,133,156,206,64,91,187,110,241,125,98,59,54,105,114,115,100,139,37,236,241,12,212,212,6,58,58,53,89,
179,252,215,174,235,151,61,24,234,115,4,187,187,180,11,22,68,2,194,143,26,60,127,60,175,10,6,180,247,45,50,149,126,78,4,102,33,223,64,255,133,247,83,31,127,172,171,182,58,245,177,53,253,8,26,225,145,100,
217,107,183,187,47,93,130,132,66,62,111,239,155,111,106,211,51,144,107,89,31,91,227,254,248,99,235,138,71,225,124,112,172,191,189,221,56,127,94,214,166,141,238,79,62,69,136,232,254,228,50,34,67,36,99,
216,20,232,235,197,129,5,255,237,249,79,95,120,81,157,98,134,27,212,88,44,144,162,227,108,125,223,91,127,80,167,164,168,244,122,131,74,149,23,12,124,204,139,77,79,21,31,242,103,223,122,26,26,82,241,219,
236,250,135,74,140,171,86,58,254,237,151,33,132,91,55,186,92,111,252,86,217,1,235,193,206,27,97,183,187,251,7,7,96,250,230,181,255,65,51,123,182,223,102,67,56,23,104,105,113,189,245,78,116,159,223,245,
255,250,55,134,146,101,198,199,31,243,53,52,245,29,62,26,21,21,236,95,227,120,251,157,148,229,143,96,197,178,226,81,199,59,117,82,52,23,194,95,164,91,168,33,178,162,143,172,32,41,74,253,220,99,182,131,
47,233,242,242,12,115,230,64,60,72,152,154,127,244,63,242,42,254,203,194,189,255,96,63,84,37,212,56,232,3,53,218,230,31,28,200,252,243,103,204,15,62,16,246,122,37,141,218,99,179,201,38,227,188,221,47,
40,221,27,216,53,157,57,21,69,21,55,76,166,91,207,200,73,70,163,185,108,157,118,238,28,117,106,42,236,50,212,223,175,82,171,35,86,174,236,0,211,55,153,6,78,191,161,123,240,126,203,179,95,210,46,90,104,
88,254,8,124,81,216,231,19,67,70,32,179,114,189,249,86,198,223,254,141,190,228,65,221,146,197,105,219,191,22,236,237,85,217,91,36,157,78,210,234,157,127,60,175,205,204,180,148,60,164,205,206,118,190,251,
39,89,241,144,183,101,95,65,93,110,174,46,59,187,237,232,191,120,174,95,183,174,90,30,246,121,213,70,3,220,142,215,102,83,91,44,29,191,124,25,209,224,173,171,174,215,245,191,119,161,235,213,83,243,43,
119,135,188,62,149,36,195,205,94,121,241,59,115,190,249,215,115,119,125,51,40,102,167,15,171,116,188,210,12,255,226,134,219,125,219,72,255,238,186,122,95,99,19,148,19,128,18,52,154,240,144,84,36,250,200,
15,188,89,202,83,95,184,37,3,40,42,90,142,144,44,216,221,173,206,154,21,171,67,93,113,145,234,122,179,74,163,193,86,111,75,171,175,181,53,239,235,21,129,174,46,68,125,230,251,139,71,16,149,207,103,90,
178,216,180,116,9,156,146,185,184,40,208,219,215,118,236,255,68,251,245,116,215,191,255,3,109,86,86,164,159,227,246,39,143,212,102,243,245,253,63,124,180,238,76,218,19,165,33,151,75,109,50,117,215,156,
110,220,250,181,162,195,63,233,253,253,155,253,31,124,136,8,144,221,20,244,84,241,195,110,111,81,214,189,239,127,224,57,119,206,242,31,255,194,250,229,231,244,15,151,192,105,32,202,10,15,249,21,72,146,
212,169,86,63,116,162,8,77,121,201,42,20,146,83,44,33,199,109,179,0,7,219,219,85,25,25,170,72,254,131,195,253,142,186,250,217,127,181,13,127,67,163,76,115,24,242,249,83,31,95,227,239,234,50,23,23,67,81,
41,203,30,84,167,88,34,53,27,12,240,72,61,181,191,85,155,77,67,123,65,180,26,175,189,185,245,103,63,159,255,223,191,29,185,17,132,66,106,163,169,227,223,126,209,241,139,95,166,173,125,2,42,197,127,160,
71,166,121,80,84,241,226,202,229,43,202,228,217,129,206,78,77,78,142,156,146,130,84,202,251,193,135,193,182,54,57,61,61,208,214,238,191,114,21,114,242,126,248,145,251,204,31,84,161,160,105,253,186,129,
215,170,241,49,50,9,143,195,225,107,186,40,20,133,184,75,54,155,180,115,10,28,199,127,17,26,112,69,66,193,51,127,8,180,119,168,22,223,135,16,46,98,253,58,157,163,254,156,74,86,59,206,189,43,107,181,35,
157,78,88,214,235,173,107,86,127,242,205,23,222,123,178,252,253,167,159,69,145,249,254,162,80,244,135,96,56,64,4,123,170,145,6,33,83,27,205,45,47,253,68,147,158,102,89,254,136,198,106,77,47,95,31,10,185,
125,55,186,36,181,12,167,230,81,169,218,212,12,100,40,170,120,209,213,211,123,241,226,197,193,252,234,241,199,144,150,244,29,57,230,121,247,143,250,194,165,222,143,26,101,131,222,186,249,203,253,191,254,
77,239,75,63,245,95,190,98,221,242,151,146,86,167,201,206,74,251,250,95,185,126,251,251,158,255,245,19,231,175,126,163,41,40,80,207,202,148,211,211,144,68,161,18,235,95,126,21,210,66,37,189,63,253,153,
255,211,203,233,255,117,187,10,134,29,29,135,25,73,148,231,234,181,238,234,26,247,39,159,162,158,200,156,112,194,237,132,195,216,4,95,20,246,249,77,75,238,67,66,53,240,193,71,154,140,12,168,116,160,177,
41,227,207,202,164,104,244,168,252,194,139,120,111,240,175,44,71,58,57,224,42,213,106,127,111,95,243,247,127,160,73,77,133,15,92,244,143,223,125,184,250,116,238,127,254,106,239,239,207,104,181,186,54,
89,234,29,89,195,228,14,76,255,192,47,201,136,36,201,225,128,239,243,79,62,41,2,57,67,201,131,134,101,15,64,30,134,135,31,210,47,123,0,86,171,206,72,55,174,94,105,92,254,168,174,112,169,110,225,130,200,
175,82,104,235,180,84,227,170,21,40,52,60,180,204,240,112,9,10,225,223,180,5,131,29,137,186,165,75,140,43,151,71,182,62,92,34,233,35,125,4,239,213,215,107,79,191,145,170,55,132,2,1,215,197,75,190,150,
214,72,247,157,36,249,187,186,93,77,23,35,130,145,36,111,179,205,115,245,138,46,39,199,107,179,245,255,233,124,68,42,178,236,239,232,68,20,234,106,188,232,190,120,41,216,223,47,142,10,186,92,174,15,63,
130,228,92,31,53,4,7,92,238,143,63,9,244,244,170,141,6,104,21,57,155,227,236,185,129,247,63,48,21,46,109,61,124,20,2,54,235,13,175,235,52,31,155,82,100,190,3,50,1,243,224,75,138,19,108,184,112,176,250,
244,107,217,217,217,83,247,21,131,47,41,154,45,65,41,210,21,129,56,16,218,64,72,25,242,120,35,206,74,146,34,63,242,34,113,50,26,111,21,70,21,47,202,177,72,122,189,232,130,199,18,140,246,70,68,254,26,141,
216,33,210,39,9,71,36,54,13,12,192,131,161,48,242,156,161,90,214,153,76,94,73,218,101,49,121,77,22,94,104,134,127,241,35,24,86,237,253,238,222,248,105,88,244,164,35,71,26,22,254,221,86,24,83,14,79,120,
135,240,79,217,148,146,18,113,190,6,131,218,146,2,225,25,195,170,215,181,106,151,193,196,171,76,81,197,183,225,100,245,235,213,167,95,253,245,175,103,216,255,203,16,86,93,82,75,175,154,77,73,52,14,12,
69,53,115,208,233,141,187,255,254,219,239,188,243,206,20,59,169,248,253,143,244,97,85,175,44,253,200,108,148,245,116,83,73,46,170,83,167,94,41,40,200,175,170,58,180,115,231,14,81,34,6,199,73,130,126,30,
173,254,235,95,219,94,253,122,245,12,48,5,68,125,61,178,244,189,20,67,127,66,166,82,202,80,207,199,143,31,19,195,59,195,96,86,175,94,169,24,76,69,197,86,177,131,88,176,63,61,85,4,180,139,210,76,73,115,
91,210,232,119,238,252,198,247,190,251,93,151,107,178,223,234,139,151,143,210,168,84,230,176,170,73,35,85,90,140,55,76,137,56,234,11,238,185,184,225,110,223,254,124,73,201,138,154,154,218,253,251,247,
13,223,231,240,225,163,216,122,224,192,65,44,88,57,113,226,36,69,21,1,13,81,89,249,162,213,106,77,186,56,240,95,143,159,248,98,249,23,79,252,242,151,3,3,3,147,167,41,105,170,175,189,46,42,39,167,36,29,
49,104,190,151,106,117,155,18,116,28,165,242,242,245,176,141,186,186,122,33,30,135,195,145,200,243,87,36,214,79,230,53,53,167,173,86,203,182,109,91,146,46,118,210,104,180,189,78,215,119,190,179,231,7,
255,244,163,39,159,92,187,190,172,108,241,146,197,98,132,218,137,139,74,146,140,225,176,41,60,5,131,105,74,145,58,93,146,234,178,44,189,173,213,188,163,55,248,244,6,13,123,38,102,164,168,0,124,55,130,
230,36,109,77,173,78,239,242,248,95,253,205,235,39,95,249,141,70,45,155,83,76,41,230,20,141,102,130,198,234,234,235,43,206,72,51,203,242,36,206,112,13,63,20,82,69,198,82,239,80,203,109,106,77,191,86,43,
107,180,178,148,232,122,170,174,62,13,171,56,123,182,30,206,10,57,2,98,153,134,134,70,248,171,85,171,86,162,4,126,204,113,251,195,147,20,213,109,216,108,118,232,10,65,96,242,222,168,36,89,134,186,34,170,
112,251,93,238,158,123,169,234,237,204,236,207,214,229,31,211,42,144,74,9,57,237,218,181,91,21,29,252,25,37,98,138,170,61,123,246,38,144,1,240,137,10,66,102,114,71,5,33,159,93,81,173,94,189,178,170,234,
208,104,91,227,240,115,1,78,0,149,139,254,119,132,4,103,206,212,138,48,32,22,156,97,236,36,150,100,218,153,94,179,137,155,205,76,149,167,42,41,89,129,5,145,110,89,217,250,169,187,72,200,83,85,145,254,
214,117,195,123,225,209,118,5,5,249,56,135,13,27,158,221,182,109,75,210,117,211,127,54,137,131,217,196,193,102,166,42,83,85,30,137,152,186,12,18,9,43,238,103,200,95,209,76,213,213,167,135,109,109,114,
56,28,149,149,47,218,237,246,210,210,117,180,215,164,96,170,205,38,62,54,51,133,158,74,76,200,85,93,93,59,69,95,225,112,56,69,119,106,113,113,81,99,99,211,176,173,142,205,155,183,224,28,242,243,243,79,
157,122,133,158,42,89,60,213,148,154,77,124,108,102,10,59,42,162,191,124,59,167,244,17,44,180,75,101,229,238,225,183,28,85,244,137,39,196,199,104,38,113,207,43,46,46,164,201,38,5,83,109,54,113,176,153,
137,139,74,164,125,99,167,116,16,253,206,157,59,10,10,166,106,206,240,19,39,78,226,118,82,83,83,59,202,38,139,56,67,220,156,196,19,46,36,17,250,42,166,215,108,226,96,51,252,157,138,144,73,134,191,83,17,
66,81,17,66,81,17,66,81,17,66,40,42,66,40,42,66,40,42,66,8,69,69,8,69,69,200,12,224,255,11,48,0,115,248,128,250,192,242,144,199,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* MainViewComponent::msg_ui_background3_png = (const char*) resource_MainViewComponent_msg_ui_background3_png;
const int MainViewComponent::msg_ui_background3_pngSize = 12312;


//[EndFile] You can add extra defines here...
//[/EndFile]
