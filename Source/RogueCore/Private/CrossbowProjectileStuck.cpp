#include "CrossbowProjectileStuck.h"
#include "Components/SphereComponent.h"
#include "Net/UnrealNetwork.h"

ACrossbowProjectileStuck::ACrossbowProjectileStuck(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USphereComponent>(TEXT("Root"));
    this->BansheePulseEnabled = false;
    this->StuckProjectileEffect = ECrossbowStuckType::Default;
    this->RecallComponent = nullptr;
    this->BansheeComponent = nullptr;
    this->IsPlayingElectricRangeEffect = true;
    this->AppliedEffect = nullptr;
    this->StatusEffectTime = 0.00f;
    this->AttachmentRoot = (USphereComponent*)RootComponent;
    this->BansheePulseComponent = nullptr;
    this->LaserCollider = nullptr;
    this->BaseProjectile = nullptr;
}

void ACrossbowProjectileStuck::UsableChanged(bool CanUse) {
}

void ACrossbowProjectileStuck::OnRep_BansheePulseEnabled() {
}

void ACrossbowProjectileStuck::MatchParentDestroy(UHealthComponentBase* destroyed) {
}

bool ACrossbowProjectileStuck::IsLocallyControlled() const {
    return false;
}

bool ACrossbowProjectileStuck::GetSpecialArrowEquipped() const {
    return false;
}

void ACrossbowProjectileStuck::CollectRecallable(URecallableProjectileComponent* NewRecallComponent) {
}

void ACrossbowProjectileStuck::All_OnCavePointRemoved_Implementation(USceneComponent* Point) {
}

void ACrossbowProjectileStuck::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ACrossbowProjectileStuck, BansheePulseEnabled);
    DOREPLIFETIME(ACrossbowProjectileStuck, StatusEffectTime);
    DOREPLIFETIME(ACrossbowProjectileStuck, BaseProjectile);
}


