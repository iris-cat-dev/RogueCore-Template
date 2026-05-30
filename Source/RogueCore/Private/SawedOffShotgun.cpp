#include "SawedOffShotgun.h"

ASawedOffShotgun::ASawedOffShotgun(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ShockwaveDamage = nullptr;
    this->FearFactorOnFire = 0.00f;
    this->FearFactorOnFireRadius = 500.00f;
    this->ShotgunJumpEnabled = false;
    this->ShotgunJumpForce = 4000.00f;
    this->ShockwaveEnabled = false;
    this->ShockWaveDistance = 250.00f;
}

void ASawedOffShotgun::SetShockWaveDamageComponent(UDamageComponent* Component) {
}


