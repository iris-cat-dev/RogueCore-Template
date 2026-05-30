#include "FacilityTurret.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
#include "Net/UnrealNetwork.h"

AFacilityTurret::AFacilityTurret(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Root = (USceneComponent*)RootComponent;
    this->mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("TurretMesh"));
    this->IndicatorActivationDelay = 2.00f;
    this->FinishAttackIgnoreLoS = false;
    this->InvulnerableOnInactive = true;
    this->FoldOutTime = 1.67f;
    this->EngagedAudio = nullptr;
    this->Offset = 0.00f;
    this->AimAcceleration = 0.00f;
    this->CurrentTarget = nullptr;
    this->TurretEngaged = false;
    this->AlwaysActive = false;
    this->mesh->SetupAttachment(RootComponent);
}

void AFacilityTurret::TurnOffMesh() {
}

void AFacilityTurret::SetIsAttacking(bool IsAttacking) {
}

void AFacilityTurret::OnRep_TurretEngaged() {
}




FRotator AFacilityTurret::GetLookingDirection() const {
    return FRotator{};
}

void AFacilityTurret::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFacilityTurret, CurrentTarget);
    DOREPLIFETIME(AFacilityTurret, TurretEngaged);
}


