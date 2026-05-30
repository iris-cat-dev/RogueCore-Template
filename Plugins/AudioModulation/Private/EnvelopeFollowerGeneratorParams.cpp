#include "EnvelopeFollowerGeneratorParams.h"

FEnvelopeFollowerGeneratorParams::FEnvelopeFollowerGeneratorParams() {
    bBypass = false;
    bInvert = false;
    AudioBus = nullptr;
    Gain = 0.00f;
    AttackTime = 0.00f;
    ReleaseTime = 0.00f;
}

