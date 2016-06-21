/*
  ==============================================================================

    PluginWindow.h
    Created: 27 Aug 2015 1:00:39pm
    Author:  Gary Jones

  ==============================================================================
*/

#ifndef PLUGINWINDOW_H_INCLUDED
#define PLUGINWINDOW_H_INCLUDED


#include <iostream>
#include "JuceHeader.h"

/** A desktop window containing a plugin's UI. */
class PluginWindow  : public DocumentWindow
{
    PluginWindow (Component* const uiComp,
                  AudioProcessor * owner_,
                  const bool isGeneric_);
    
public:
  //  static PluginWindow* getWindowFor (AudioProcessorGraph::Node* node,
  //                                     bool useGenericView);
    
    static PluginWindow* openWindowFor (AudioProcessor * node,
                                       bool useGenericView, bool isMid);
    
    static void closeCurrentlyOpenWindowsFor (const uint32 nodeId);
    
    static void closeAllCurrentlyOpenWindows();
    
    ~PluginWindow();
    
    void moved();
    void closeButtonPressed();

private:
    AudioProcessor * owner;
    bool isGeneric;
};


#endif  // PLUGINWINDOW_H_INCLUDED
