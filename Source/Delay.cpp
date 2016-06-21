//
//  Delay.cpp
//  AudioVitamins
//
//  Created by Gary Jones on 28/12/2015.
//
//

#include "Delay.h"

// Constructor
Delay::Delay(
             int size	// Size of delay (expressed in samples)
)
{
    //Initialize values
    m_size = size;
    m_read = 0;
    m_write = size - 1;
    
    //Ensure that initial sample values at buffer are 0.0f
    m_buffer = new float[m_size];
    for(int i=0; i<size; i++)
    {
        m_buffer[i] = 0.0f;
    }
}

//Destructor
Delay::~Delay()
{
    delete[] m_buffer;
}

//Writes a sample into buffer
void Delay::WriteSample(
                        float sample	// Sample Value
)
{
    //write sample
    m_buffer[m_write] = sample;
    
    //update write position
    m_write = (m_write + 1) % m_size;
}

//Reads a sample from buffer
float Delay::ReadSample()
{
    float retVal;
    //read sample
    retVal = m_buffer[m_read];
    
    //update read position
    m_read = (m_read + 1) % m_size;
    return retVal;
}

//Process a given sample
void Delay::Process(
                    float* sample		// Address to store processed sample value
)
{
    //Write sample into delay's buffer
    WriteSample(*sample);
    
    //Update current value of sample with delayed value
    *sample = ReadSample();
}

//Reads a delayed sample from buffer
float Delay::GetDelayedSample(
                              int delay			// Delay expressed in samples
)
{
    int sampleIndex = (m_read - delay) % m_size;
    return sampleIndex >= 0 ? m_buffer[sampleIndex] : m_buffer[m_size + sampleIndex];
}
