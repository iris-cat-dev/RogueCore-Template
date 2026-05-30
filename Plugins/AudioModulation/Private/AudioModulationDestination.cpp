#include "AudioModulationDestination.h"

UAudioModulationDestination::UAudioModulationDestination() {
    Modulator = nullptr;
}

bool UAudioModulationDestination::SetModulator(const USoundModulatorBase* InModulator) {
    return false;
}

float UAudioModulationDestination::GetValue() const {
    return 0.0f;
}

USoundModulatorBase* UAudioModulationDestination::GetModulator() const {
    return nullptr;
}

bool UAudioModulationDestination::ClearModulator() {
    return false;
}


