//
//  Delay.h
//  AudioVitamins
//
//  Created by Gary Jones on 28/12/2015.
//
//

#ifndef __AudioVitamins__Delay__
#define __AudioVitamins__Delay__

#include <stdio.h>
// Audio delay class
class Delay
{
    
public:
    
    // Constructor
    Delay(
          int size	// Size of delay (expressed in samples)
    );
    
    //Destructor
    ~Delay();
    
    //Process one sample
    void Process(
                 float* sample			// Address to store processed sample value
				);
    
    //Get sample delayed
    float GetDelayedSample(
                           int delay	// Delay expressed in samples
    );
    
    //Reads a sample
    float ReadSample();
    
    //Writes a sample
    void  WriteSample(float sample);
    
    int m_size;			// Size of delay in samples
    
private:
    
    
    int m_read;			// Read position
    int m_write;		// Write position, always will be (read + size) % size
    float* m_buffer;	// Samples buffer
    
};


#endif /* defined(__AudioVitamins__Delay__) */
