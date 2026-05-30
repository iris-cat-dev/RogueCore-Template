#include "GymActivityProperties.h"

UGymActivityProperties::UGymActivityProperties() {
    this->AnimStart = nullptr;
    this->AnimGoingUp = nullptr;
    this->AnimGoingDown = nullptr;
    this->AnimEnd = nullptr;
    this->AnimAdditiveStruggleUp = nullptr;
    this->AnimAdditiveStruggleDown = nullptr;
    this->PointSound = nullptr;
    this->SuccessSound = nullptr;
    this->FailSound = nullptr;
    this->CurrencyType = nullptr;
    this->BaseDifficulty = 50;
    this->MaxDifficulty = 10;
    this->GymIcon = nullptr;
    this->GymIconRAW = nullptr;
    this->SingleMotion = false;
    this->ConstantSpeed = true;
    this->AlternativeVersion = false;
    this->GymActivityStats = nullptr;
}


