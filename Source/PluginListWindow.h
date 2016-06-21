/*
  ==============================================================================

    PluginListWindow.h
    Created: 26 Aug 2015 12:43:29am
    Author:  Gary Jones

  ==============================================================================
*/

#ifndef PLUGINLISTWINDOW_H_INCLUDED
#define PLUGINLISTWINDOW_H_INCLUDED

#include "../JuceLibraryCode/JuceHeader.h"

//==============================================================================
/*
*/
class MainViewComponent;

class PluginListWindow : public DocumentWindow
{
public:
   /**
    * Create the plugin list window. Should only be instantiated/owned by the
    * MainAppWindow and have its lifecycle controlled using that class' 
    * `ViewPlugins()` method.
    */
   PluginListWindow(MainViewComponent& owner_, AudioPluginFormatManager& formatManager);

   /**
    * Destroy the window.
    */
   ~PluginListWindow();

   /**
    * User wants to close this window.
    */
   void closeButtonPressed();


private:   
   JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(PluginListWindow);
    
    MainViewComponent& owner;

};


#endif  // PLUGINLISTWINDOW_H_INCLUDED
