#include "NamedCountdownFloat.h"

FNamedCountdownFloat::FNamedCountdownFloat() {
    this->State = ENamedCountdownState::NotStarted;
    this->SecondsRemaining = 0.00f;
    this->HaveQuickFinish = false;
    this->Name = FName();
}

