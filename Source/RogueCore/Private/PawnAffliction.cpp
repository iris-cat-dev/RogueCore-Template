#include "PawnAffliction.h"

UPawnAffliction::UPawnAffliction() {
    this->Icon = nullptr;
    this->bShowPlayerIcon = true;
    this->bShowOnEnemyHealthbar = true;
    this->AfflictionOverlay = nullptr;
    this->PlayerShoutOnBegin = nullptr;
    this->StartSoundForLocalPlayer = nullptr;
    this->StopSoundForLocalPlayer = nullptr;
}


