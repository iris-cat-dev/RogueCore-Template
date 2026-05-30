#include "PlayerTransformInterp.h"

FPlayerTransformInterp::FPlayerTransformInterp() {
    this->InterpSpeed = 0.00f;
    this->Player = nullptr;
    this->ToTransform = FTransform::Identity;
}

