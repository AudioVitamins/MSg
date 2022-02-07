//
//  FilmStripSlider.h
//
//  Created by Gary Jones on 10/05/2014.
//
//

#ifndef __The_Audiolyth__FilmStripSlider__
#define __The_Audiolyth__FilmStripSlider__

#include <iostream>
#include "JuceHeader.h"

#endif /* defined(__The_Audiolyth__FilmStripSlider__) */
#pragma once

class FilmstripSlider : public Slider
{
public:
	/**
     Constructor.
     You need to supply the image file and the number of frames it represents for correct image display.
     Optional arguments show or hide the default number box and if the filmstrip image is horizontal or vertical.
	 */
	FilmstripSlider(const String& componentName = String::empty);
    
	///	Destructor.
	~FilmstripSlider();
    
    /** Sets the image to use, you need to supply the number of frames within the image.
     */
    void setImage (Image image, int numFrames, bool isHorizontal = true);
    
	/** Returns the width of one frame of the filmstrip in pixels.
     */
	int getFrameWidth() const       { return frameWidth;    }
	
	/** Returns the height of one frame of the filmstrip in pixels.
     */
	int getFrameHeight() const      { return frameHeight;   }
    
	/** @interal
     */
	void paint(Graphics& g);
    
    // pop up menu on right click, needs to call functions in processor to add param to macro...
  //  void mouseDown(const MouseEvent& e);
    
    int parameterIndex;
    
    void setParameterIndex(int idx)
    {
        parameterIndex = idx;
    }
    
  //  PopupMenu * menu;
    
    
private:
	Image filmStripImage;
	int numFrames;
	bool isHorizontal;
	int frameWidth, frameHeight;
};

