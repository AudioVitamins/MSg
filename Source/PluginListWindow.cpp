/*
  ==============================================================================

    PluginListWindow.cpp
    Created: 26 Aug 2015 12:43:29am
    Author:  Gary Jones

  ==============================================================================
*/

#include "../JuceLibraryCode/JuceHeader.h"
#include "PluginListWindow.h"
#include "MainViewComponent.h"

//==============================================================================
PluginListWindow::PluginListWindow(MainViewComponent& owner_, AudioPluginFormatManager& formatManager)
:  DocumentWindow("Available Plugins", Colours::white, DocumentWindow::closeButton),
owner (owner_)

{
    // logic lifted directly from the JUCE sample app 'Audio Plugin Host', rewritten
    // to make me happier stylistically.
    
    PropertiesFile* userSettings = owner.processor->gAppProperties->getUserSettings();
    const File crashFile(userSettings->getFile().getSiblingFile("RecentlyCrashedPluginsList"));
    
    setContentOwned(new PluginListComponent(formatManager,
                                            *owner.processor->knownPluginList, crashFile, userSettings), true);
    
    this->setResizable(true, false);
    this->setResizeLimits(200, 200, 400, 400);
    this->setTopLeftPosition(60, 60);
    this->restoreWindowStateFromString(userSettings->getValue("listWindowPos"));
    this->setVisible(true);
}


PluginListWindow::~PluginListWindow()
{
    // PropertiesFile* userSettings = owner->processor->gAppProperties->getUserSettings();
    // userSettings->setValue("listWindowPos", this->getWindowStateAsString());
    
    
}


void PluginListWindow::closeButtonPressed()
{
    // delete this window.
    // fOwner->ViewPlugins(false);
}
