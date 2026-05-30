#include "ShockBlaster.h"
#include "HitscanComponent.h"

AShockBlaster::AShockBlaster(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HitscanComponent = CreateDefaultSubobject<UHitscanComponent>(TEXT("HitscanComponent"));
    this->ImpactEffect = nullptr;
    this->BeamEffect = nullptr;
    this->ImpactSound = nullptr;
    this->BounceDelay = 0.15f;
    this->RicochetRange = 500.00f;
    this->AmmoCostPerBounce = 30.00f;
    this->AttitudeQuery = 0;
}


void AShockBlaster::Server_RegisterHit_Implementation(AActor* Hit, float Damage, UPhysicalMaterial* PhysMaterial, int32 clipAmount) {
}

void AShockBlaster::Server_OnHitScan_Hit_Implementation(const FHitResult& InHitResult, const float InDamage, const uint32 InRicochetCount) {
}

void AShockBlaster::OnHitScan_Hit(const FHitResult& InHitResult, const bool InAlwaysPenetrate) {
}

void AShockBlaster::DoBounce() {
}

void AShockBlaster::All_ShowHit_Implementation(AActor* Hit) {
}

void AShockBlaster::All_OnHitScan_Hit_Implementation(FVector_NetQuantize InHitLocation) {
}


