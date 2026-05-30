#include "UseAnimationSetting.h"

UUseAnimationSetting::UUseAnimationSetting() {
    this->BeginFP = nullptr;
    this->EndFP = nullptr;
    this->BeginTP = nullptr;
    this->EndTP = nullptr;
    this->CompletedFP = nullptr;
    this->CompletedTP = nullptr;
    this->IsManuallyControlled = false;
    this->BlockUseWhileActive = false;
    this->BlockUseWhileActiveDuration = 0.00f;
}


