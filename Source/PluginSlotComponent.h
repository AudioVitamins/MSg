/*
  ==============================================================================

    PluginSlotComponent.h
    Created: 25 Aug 2015 7:20:43pm
    Author:  Gary Jones

  ==============================================================================
*/

#ifndef PLUGINSLOTCOMPONENT_H_INCLUDED
#define PLUGINSLOTCOMPONENT_H_INCLUDED

#include "../JuceLibraryCode/JuceHeader.h"

//==============================================================================
/*
*/
class PluginSlotComponent    : public Component, public ButtonListener
{
public:
    PluginSlotComponent();
    ~PluginSlotComponent();

    void paint (Graphics&);
    void resized();
    
    void buttonClicked (Button* buttonThatWasClicked);
    
    void setSlotIndex(int i)
    {
        slot_index = i;
    }
    
    void openParameterListBox();
    
    ScopedPointer<ImageButton>   button_onoff;
    ScopedPointer<ImageButton>   button_audition;
    
    ScopedPointer<TextButton>    button_pluginNamePopupMenu;
    
    ScopedPointer<Label>         label_latency;
    
    PopupMenu dropdownMenu;

	struct PluginName {
		String name;
		int Id;
	};

private:
    
    unsigned slot_index;
    ScopedPointer<TextButton>   button_openGUIMid;
    ScopedPointer<TextButton>   button_openGUISide;
    
    ScopedPointer<TextButton>    button_openParamList;
   // ScopedPointer<TextButton>    button_clearPlugin;
    ScopedPointer<PopupMenu>     menu_pluginList;
    
    Image image_button_onoff_on;
    Image image_button_onoff_off;
    Image image_button_openGUI;
    Image image_button_audible_on;
    Image image_button_audible_off;
    Image image_button_pluginSelectBackground;
    
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (PluginSlotComponent)
};


#endif  // PLUGINSLOTCOMPONENT_H_INCLUDED
