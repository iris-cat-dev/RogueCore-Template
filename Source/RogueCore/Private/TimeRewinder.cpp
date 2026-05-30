#include "TimeRewinder.h"

ATimeRewinder::ATimeRewinder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FoVModulation = nullptr;
    this->ActivationSound = nullptr;
    this->AciveSoundLoop = nullptr;
    this->DeactivateSound = nullptr;
    this->Item_SaveRewindPoint = nullptr;
    this->Item_RewindToPoint = nullptr;
    this->Item_Equip_Active = nullptr;
    this->FP_Equip_Active = nullptr;
    this->FP_RewindToPoint = nullptr;
    this->TP_Equip_Active = nullptr;
    this->TP_Recall = nullptr;
    this->PostProcessMaterial = nullptr;
    this->ActiveOverlayMaterial = nullptr;
    this->TP_ActiveOverlayMaterial = nullptr;
    this->ActiveTrail = nullptr;
    this->DurationUpgradeKey = nullptr;
    this->HologramClass = nullptr;
    this->ActiveAnimationSet = nullptr;
    this->WarntAtTimeRemaining = 1.00f;
    this->TimePerChargeDrain = 30.00f;
    this->RewindDelay = 0.00f;
}

void ATimeRewinder::Terminate() {
}

void ATimeRewinder::Server_ShowTPRecall_Implementation() {
}

void ATimeRewinder::Server_ShowTPActivation_Implementation() {
}

void ATimeRewinder::Server_SavedRewindSpot_Implementation(FRewindData Data) {
}

void ATimeRewinder::Server_RewindStarted_Implementation(FRewindData Data) {
}

void ATimeRewinder::Server_Rewind_Implementation(FRewindData Data) {
}

void ATimeRewinder::Server_DeactivateEffects_Implementation() {
}








void ATimeRewinder::OnDeath(UHealthComponentBase* Health) {
}

void ATimeRewinder::InvalidatePositioningAbilities() {
}

bool ATimeRewinder::GetIsDraining() const {
    return false;
}

float ATimeRewinder::GetDrainingProgress() const {
    return 0.0f;
}

void ATimeRewinder::DrainTick() {
}

void ATimeRewinder::DeactivateAfterRewind() {
}

void ATimeRewinder::Client_OnDeath_Implementation() {
}

void ATimeRewinder::All_ShowTPRecall_Implementation() {
}

void ATimeRewinder::All_ShowTPActivation_Implementation() {
}

void ATimeRewinder::All_ShowEndExplosion_Implementation(FVector_NetQuantize Location) {
}

void ATimeRewinder::All_DeactivateEffects_Implementation() {
}


