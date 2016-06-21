/*
  ==============================================================================

    PluginBrowser_Component.h
    Created: 26 Aug 2015 1:46:44am
    Author:  Gary Jones

  ==============================================================================
*/

#ifndef PLUGINBROWSER_COMPONENT_H_INCLUDED
#define PLUGINBROWSER_COMPONENT_H_INCLUDED

#include "../JuceLibraryCode/JuceHeader.h"

//==============================================================================
/*
*/
class PluginBrowser_Component : public ListBoxModel, public Component
{
    
    
public:
    
    PluginBrowser_Component(KnownPluginList &list, AudioPluginFormatManager &formatManager);
    ~PluginBrowser_Component();
    
    // component
    void paint (Graphics& g);
    void resized();
    
    //listboxmodel
    virtual int getNumRows();
    virtual void paintListBoxItem(int rowNumber, Graphics &g, int width, int height, bool rowIsSelected);
    virtual var getDragSourceDescription(const SparseSet<int> &currentlySelectedRows);
    
    ScopedPointer<ListBox> listBox;
    
    KnownPluginList &list;
    AudioPluginFormatManager &formatManager;
 
};

#endif  // PLUGINBROWSER_COMPONENT_H_INCLUDED
