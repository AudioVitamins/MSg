//
//  AudiolythLookAndFeel.h
//  The Audiolyth
//
//  Created by Gary Jones on 10/05/2014.
//
//

#ifndef __The_Audiolyth__AudiolythLookAndFeel__
#define __The_Audiolyth__AudiolythLookAndFeel__

#include <iostream>
#include "JuceHeader.h"

#endif /* defined(__The_Audiolyth__AudiolythLookAndFeel__) */

class AudiolythLookAndFeel : public LookAndFeel_V3
{
    
    
public:
    
    AudiolythLookAndFeel();
    
    ~AudiolythLookAndFeel() {}
    
    virtual void drawRotarySlider (Graphics&,
                                   int x, int y, int width, int height,
                                   float sliderPosProportional,
                                   float rotaryStartAngle,
                                   float rotaryEndAngle,
                                   Slider& slider);
    
    virtual void drawLinearSliderThumb (Graphics& g, int x, int y, int width, int height,
                           float sliderPos, float minSliderPos, float maxSliderPos,
                                        const Slider::SliderStyle style, Slider& slider);
    
    virtual void drawLinearSliderBackground (Graphics& g, int x, int y, int width, int height,
                                float /*sliderPos*/,
                                float /*minSliderPos*/,
                                float /*maxSliderPos*/,
                                const Slider::SliderStyle /*style*/, Slider& slider);
    
    virtual int getSliderThumbRadius (Slider& slider);
    
   
    
    
private:
    //==============================================================================
    Image sliderThumb;
    
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (AudiolythLookAndFeel);

};
