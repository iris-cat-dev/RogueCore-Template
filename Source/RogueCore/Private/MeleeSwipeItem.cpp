#include "MeleeSwipeItem.h"
#include "Components/AudioComponent.h"

AMeleeSwipeItem::AMeleeSwipeItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SlicerSounds = CreateDefaultSubobject<UAudioComponent>(TEXT("SlicerSound"));
    this->CarveMesh = nullptr;
    this->MagmaMaterial = nullptr;
    this->HitEffect = nullptr;
    this->BeamEffect = nullptr;
    this->ImpactSound = nullptr;
    this->SwipeHitConfirmSond = nullptr;
    this->FP_AttackAnim = nullptr;
    this->TP_AttackAnim = nullptr;
    this->Damage = nullptr;
    this->RangeUpgradeKey = nullptr;
    this->MinRange = 0.00f;
    this->MaxRange = 0.00f;
    this->Width = 100.00f;
    this->AttackThickness = 10.00f;
    this->AngleLimit = 90.00f;
    this->VerticalOffset = 0.00f;
    this->VerticalCarveOffset = 0.00f;
    this->ShowDebugBox = false;
    this->ShowDebugDugTime = 3.00f;
    this->RequireFullyEquipped = true;
}

void AMeleeSwipeItem::Server_RegisterHits_Implementation(const FMeleeSwipeData& HitData) {
}

void AMeleeSwipeItem::Server_PerformSwipe_Implementation(FVector Origin, FVector carveOffset, FVector cameraDirection) {
}



void AMeleeSwipeItem::AttackAnimEnded() {
}

void AMeleeSwipeItem::All_ShowSwipe_Implementation(FVector Origin, FVector cameraDirection) {
}

void AMeleeSwipeItem::All_ShowHits_Implementation(const FMeleeSwipeData& HitData) {
}


