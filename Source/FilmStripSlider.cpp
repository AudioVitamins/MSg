//
//  FilmStripSlider.cpp
//  The Audiolyth
//
//  Created by Gary Jones on 10/05/2014.
//
//

#include "FilmStripSlider.h"
// #include "MainComponent.h"



FilmstripSlider::FilmstripSlider (const String &componentName)
:   Slider(componentName),
numFrames (0),
isHorizontal (true),
frameWidth (0),
frameHeight (0)
{
    parameterIndex = 0;
    
    /* oringal code
    menu = new PopupMenu();
    menu->addItem (1, "add to Macro 1");
    menu->addItem (2, "add to Macro 2");
    menu->addItem (3, "add to Macro 3");
    menu->addItem (4, "add to Macro 4");
    menu->addSeparator();
     */
  /*
    menu = new PopupMenu();
    menu->addSectionHeader("Assign");
    menu->addSeparator();
    
    PopupMenu macroMenu1;
    macroMenu1.addItem(1, "Slot 1");
    macroMenu1.addItem(2, "Slot 2");
    macroMenu1.addItem(3, "Slot 3");
    macroMenu1.addItem(4, "Slot 4");
    menu->addSubMenu("Macro 1", macroMenu1);
    
    PopupMenu macroMenu2;
    macroMenu2.addItem(5, "Slot 1");
    macroMenu2.addItem(6, "Slot 2");
    macroMenu2.addItem(7, "Slot 3");
    macroMenu2.addItem(8, "Slot 4");
    menu->addSubMenu("Macro 2", macroMenu2);
    
    PopupMenu macroMenu3;
    macroMenu3.addItem(9, "Slot 1");
    macroMenu3.addItem(10, "Slot 2");
    macroMenu3.addItem(11, "Slot 3");
    macroMenu3.addItem(12, "Slot 4");
    menu->addSubMenu("Macro 3", macroMenu3);
    
    PopupMenu macroMenu4;
    macroMenu4.addItem(13, "Slot 1");
    macroMenu4.addItem(14, "Slot 2");
    macroMenu4.addItem(15, "Slot 3");
    macroMenu4.addItem(16, "Slot 4");
    menu->addSubMenu("Macro 4", macroMenu4);
*/
    
    
}

void FilmstripSlider::setImage (Image image, int numFrames_, bool isHorizontal_)
{
    filmStripImage = image;
    
	if(filmStripImage.isValid())
	{
        numFrames = numFrames_;
        isHorizontal = isHorizontal_;
        
        if(isHorizontal)
        {
            frameHeight = filmStripImage.getHeight();
            frameWidth = filmStripImage.getWidth() / numFrames;
        }
        else
        {
            frameHeight = filmStripImage.getHeight() / numFrames;
            frameWidth = filmStripImage.getWidth();
        }
	}
    else
    {
        numFrames = 0;
    }
    
    repaint();
}

FilmstripSlider::~FilmstripSlider()
{
}
/*
void FilmstripSlider::mouseDown(const MouseEvent& e)
{
    if (e.mods.isRightButtonDown())
    {
        const int result = menu->show();

        if (result == 0)
        {
            // user dismissed the menu without picking anything
        }
        else if (result == 1)
        {
            MainComponent * parent = (MainComponent*)getParentComponent();
            parent->processor->setDestinationToMacro2(1, 1, parameterIndex);
        }
        else if (result == 2)
        {
            MainComponent * parent = (MainComponent*)getParentComponent();
            parent->processor->setDestinationToMacro2(1, 2, parameterIndex);
        }
        else if (result == 3)
        {
            MainComponent * parent = (MainComponent*)getParentComponent();
            parent->processor->setDestinationToMacro2(1, 3, parameterIndex);
        }
        else if (result == 4)
        {
            MainComponent * parent = (MainComponent*)getParentComponent();
            parent->processor->setDestinationToMacro2(1, 4, parameterIndex);
        }
        else if (result == 5)
        {
            MainComponent * parent = (MainComponent*)getParentComponent();
            parent->processor->setDestinationToMacro2(2, 1, parameterIndex);
        }
        else if (result == 6)
        {
            MainComponent * parent = (MainComponent*)getParentComponent();
            parent->processor->setDestinationToMacro2(2, 2, parameterIndex);
        }
        else if (result == 7)
        {
            MainComponent * parent = (MainComponent*)getParentComponent();
            parent->processor->setDestinationToMacro2(2, 3, parameterIndex);
        }
        else if (result == 8)
        {
            MainComponent * parent = (MainComponent*)getParentComponent();
            parent->processor->setDestinationToMacro2(2, 4, parameterIndex);
        }
        else if (result == 9)
        {
            MainComponent * parent = (MainComponent*)getParentComponent();
            parent->processor->setDestinationToMacro2(3, 1, parameterIndex);
        }
        else if (result == 10)
        {
            MainComponent * parent = (MainComponent*)getParentComponent();
            parent->processor->setDestinationToMacro2(3, 2, parameterIndex);
        }
        else if (result == 11)
        {
            MainComponent * parent = (MainComponent*)getParentComponent();
            parent->processor->setDestinationToMacro2(3, 3, parameterIndex);
        }
        else if (result == 12)
        {
            MainComponent * parent = (MainComponent*)getParentComponent();
            parent->processor->setDestinationToMacro2(3, 4, parameterIndex);
        }
        else if (result == 13)
        {
            MainComponent * parent = (MainComponent*)getParentComponent();
            parent->processor->setDestinationToMacro2(4, 1, parameterIndex);
        }
        else if (result == 14)
        {
            MainComponent * parent = (MainComponent*)getParentComponent();
            parent->processor->setDestinationToMacro2(4, 2, parameterIndex);
        }
        else if (result == 15)
        {
            MainComponent * parent = (MainComponent*)getParentComponent();
            parent->processor->setDestinationToMacro2(4, 3, parameterIndex);
        }
        else if (result == 16)
        {
            MainComponent * parent = (MainComponent*)getParentComponent();
            parent->processor->setDestinationToMacro2(4, 4, parameterIndex);
        }
    }
    else
    {
        Slider::mouseDown(e);
    }
    
}
*/

/*
void FilmstripSlider::mouseDown(const MouseEvent& e)
{
    if (e.mods.isRightButtonDown())
    {
        const int result = menu->show();
    
        
        if (result == 0)
        {
            // user dismissed the menu without picking anything
        }
        else if (result == 1)
        {
            MainComponent * parent = (MainComponent*)getParentComponent();
            parent->processor->setDestinationToMacro(1, parameterIndex);
           // printf("assign to macro1");
        }
        else if (result == 2)
        {
            MainComponent * parent = (MainComponent*)getParentComponent();
            parent->processor->setDestinationToMacro(2, parameterIndex);
        }
        else if (result == 3)
        {
            MainComponent * parent = (MainComponent*)getParentComponent();
            parent->processor->setDestinationToMacro(3, parameterIndex);
        }
        else if (result == 4)
        {
            MainComponent * parent = (MainComponent*)getParentComponent();
            parent->processor->setDestinationToMacro(4, parameterIndex);
        }
    }
    else
    {
        Slider::mouseDown(e);
    }
    
}
 */


void FilmstripSlider::paint(Graphics& g)
{
	if (filmStripImage.isValid())
	{
		int value = (int) ((getValue() - getMinimum()) / (getMaximum() - getMinimum()) * (numFrames - 1));
        
		int imageHeight;
		int imageWidth;
        
		if (getTextBoxPosition() == TextBoxBelow)
        {
			imageWidth = getWidth() - getTextBoxHeight();
			imageHeight = getHeight() - getTextBoxHeight();
		}
		else
        {
			imageWidth = getWidth();
			imageHeight = getHeight();
		}
		
		if(isHorizontal)
        {
			g.drawImage(filmStripImage, (getWidth() - imageWidth) * 0.5, 0, imageWidth, imageHeight,
						value * frameWidth, 0, frameWidth, frameHeight);
        }
		else
        {
			g.drawImage(filmStripImage, 0, 0, imageWidth, imageHeight,
						0, value * frameHeight, frameWidth, frameHeight);
        }
	}
    
    /*
    g.setColour(Colours::black);
    g.setFont(10);
    var value = (int)this->getValue();
    
    String valText = value.toString();
    
    g.drawText(valText, 0, 0, getWidth(), getHeight(), Justification::centred, true);
     */
   // g.drawSingleLineText("1200hz", <#int startX#>, <#int baselineY#>)
}
