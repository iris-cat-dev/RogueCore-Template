#include "JettyBootSetting.h"

FJettyBootSetting::FJettyBootSetting() {
    this->GateCount = FIRandRange();
    this->GateSpacing = FIRandRange();
    this->GateOpeningSize = FIRandRange();
}

