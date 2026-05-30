#include "SoundModulationLFOParams.h"

FSoundModulationLFOParams::FSoundModulationLFOParams() {
    Shape = ESoundModulationLFOShape::Sine;
    ExponentialFactor = 0.00f;
    Width = 0.00f;
    Amplitude = 0.00f;
    Frequency = 0.00f;
    Offset = 0.00f;
    Phase = 0.00f;
    bLooping = false;
    bBypass = false;
}

