//
//  AudiolythLookAndFeel.cpp
//  The Audiolyth
//
//  Created by Gary Jones on 10/05/2014.
//
//

#include "MSGLookAndFeel.h"

//==============================================================================
AudiolythLookAndFeel::AudiolythLookAndFeel()
{
   // sliderThumb = ImageCache::getFromMemory (BinaryData::SliderThumb_png, BinaryData::SliderThumb_pngSize);
}


void AudiolythLookAndFeel::drawLinearSliderBackground (Graphics& g, int x, int y, int width, int height,
                                 float /*sliderPos*/,
                                 float /*minSliderPos*/,
                                 float /*maxSliderPos*/,
                                 const Slider::SliderStyle /*style*/, Slider& slider)
{
    
}

int AudiolythLookAndFeel::getSliderThumbRadius (Slider& slider)
{
   // return jmin (7, slider.getHeight() / 2, slider.getWidth() / 2) + 2;
    return sliderThumb.getHeight() / 2;
}
void AudiolythLookAndFeel::drawLinearSliderThumb (Graphics& g, int x, int y, int width, int height,
                            float sliderPos, float minSliderPos, float maxSliderPos,
                            const Slider::SliderStyle style, Slider& slider)
{
    float kx, ky;

     kx = x + width * 0.5f;
     ky = sliderPos;
     
     
  /*   drawGlassSphere (g,
     kx - sliderRadius,
     ky - sliderRadius,
     sliderRadius * 2.0f,
     knobColour, outlineThickness);
   */

        g.drawImageAt(sliderThumb,kx - sliderThumb.getWidth()/2 , ky - sliderThumb.getHeight()/2);
    
          g.setOpacity(1.0);
     //   int centerX = x + width /2;
     //   int centerY = sliderPos;
       // float widht = sliderThumb.getWidth();
       // g.drawImageAt(sliderThumb,centerX - sliderThumb.getWidth()/2, centerY - sliderThumb.getHeight()/2);
    
  //  g.drawImageAt(sliderThumb,centerX - sliderThumb.getWidth()/2, centerY + sliderThumb.getHeight()/2 - sliderThumb.getHeight()*2.0);
    
  //  g.drawImageAt(sliderThumb,centerX - sliderThumb.getWidth()/2, centerY - sliderThumb.getHeight());

    
    
    
    
}

void AudiolythLookAndFeel::drawRotarySlider (Graphics& g,
                               int x, int y, int width, int height,
                               float sliderPosProportional,
                               float rotaryStartAngle,
                               float rotaryEndAngle,
                               Slider & slider)
{
    // This is the binary image data that uses very little CPU when rotating
/*	Image myStrip = ImageCache::getFromMemory (BinaryData::Knob_Background_png, BinaryData::Knob_Background_pngSize);

	const double fractRotation = (slider.getValue() - slider.getMinimum())  /   (slider.getMaximum() - slider.getMinimum()); //value between 0 and 1 for current amount of rotation
	const int nFrames = myStrip.getHeight()/myStrip.getWidth(); // number of frames for vertical film strip
	const int frameIdx = (int)ceil(fractRotation * ((double)nFrames-1.0) ); // current index from 0 --> nFrames-1
    
	const float radius = jmin (width / 2.0f, height / 2.0f) ;
    const float centreX = x + width * 0.5f;
    const float centreY = y + height * 0.5f;
    const float rx = centreX - radius - 1.0f;
    const float ry = centreY - radius - 1.0f;
    
	g.drawImage(myStrip,
				(int)rx,
                (int)ry,
                2*(int)radius,
                2*(int)radius,   //Dest
				0,
                frameIdx*myStrip.getWidth(),
                myStrip.getWidth(),
                myStrip.getWidth()); //Source
 */
    
}


