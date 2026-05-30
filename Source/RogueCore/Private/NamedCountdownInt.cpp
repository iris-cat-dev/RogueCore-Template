#include "NamedCountdownInt.h"

FNamedCountdownInt::FNamedCountdownInt() {
    this->State = ENamedCountdownState::NotStarted;
    this->SecondsRemaining = 0;
    this->Name = FName();
}

