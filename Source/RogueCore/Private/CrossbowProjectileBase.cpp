#include "CrossbowProjectileBase.h"
#include "Net/UnrealNetwork.h"

ACrossbowProjectileBase::ACrossbowProjectileBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StatusEffectTime = 0.00f;
    this->BansheePulseActive = false;
    this->MagneticComponent = nullptr;
    this->RicochetComponent = nullptr;
    this->BansheeComponent = nullptr;
    this->BansheePulseComponent = nullptr;
    this->BansheeComponentClass = nullptr;
    this->RecallComponentClass = nullptr;
    this->SpawnableStuckProjectile = nullptr;
    this->OnDamageEffect = nullptr;
    this->EffectApplication = ECrossbowEffectApplication::ToDefault;
    this->SelectionPriority = 0;
    this->CanEverBePickedUp = true;
    this->Penetrates = false;
    this->ImpactSound = nullptr;
    this->IsASpecialProjectile = false;
    this->MainDamageComponent = nullptr;
    this->SimpleDamageComponent = nullptr;
    this->ProjectileMesh = nullptr;
    this->KillTrailAfterTime = 3.00f;
    this->OnlyTrailShown = false;
}


void ACrossbowProjectileBase::SetSimpleDamageComponent(UDamageComponent* Component) {
}


void ACrossbowProjectileBase::SetMainDamageComponent(UDamageComponent* Component) {
}

void ACrossbowProjectileBase::Server_HandleImpact_Implementation(const FHitResult& HitResult, const FVector& RelativeLocation) {
}

void ACrossbowProjectileBase::OnRep_OnlyTrailShown() {
}

void ACrossbowProjectileBase::OnRep_BansheePulseActive() {
}

bool ACrossbowProjectileBase::IsLocallyControlled() const {
    return false;
}

bool ACrossbowProjectileBase::GetSpecialArrowEquipped() const {
    return false;
}

float ACrossbowProjectileBase::GetScaledStatusEffectTime() const {
    return 0.0f;
}

void ACrossbowProjectileBase::ApplyDamageEffects(const FHitResult& HitResult, const FVector& RelativeLocation) {
}

void ACrossbowProjectileBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ACrossbowProjectileBase, BansheePulseActive);
    DOREPLIFETIME(ACrossbowProjectileBase, OnlyTrailShown);
}


