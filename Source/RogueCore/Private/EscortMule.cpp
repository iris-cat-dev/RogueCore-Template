#include "EscortMule.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
#include "DeepPathfinderSceneComponent.h"
#include "FriendlyHealthComponent.h"
#include "Net/UnrealNetwork.h"
#include "OutlineComponent.h"
#include "RestrictedResourceBank.h"
#include "SimpleObjectInfoComponent.h"

AEscortMule::AEscortMule(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UDeepPathfinderSceneComponent>(TEXT("SceneComponent"));
    this->HealthComponent = CreateDefaultSubobject<UFriendlyHealthComponent>(TEXT("HealthComponent2"));
    this->ObjectInfo = CreateDefaultSubobject<USimpleObjectInfoComponent>(TEXT("ObjectInfo"));
    this->ResourceBank = CreateDefaultSubobject<URestrictedResourceBank>(TEXT("RestrictedResourceBank"));
    this->State = EEscortMissionState::InGarage;
    this->EscortObjective = nullptr;
    this->SpeedModifier = 1.00f;
    this->mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("mesh"));
    this->OutlineComponent = CreateDefaultSubobject<UOutlineComponent>(TEXT("OutlineComponent"));
    this->HealPerTickNormal = 0.00f;
    this->HealPerTickUnderAttack = 0.00f;
    this->CannisterVisible_Left = false;
    this->CannisterVisible_Right = false;
    this->IsCarvingTunnel = false;
    this->FullCanisters = 0;
    this->mesh->SetupAttachment(RootComponent);
}

bool AEscortMule::TryHeal(APlayerCharacter* User, float Amount) {
    return false;
}

void AEscortMule::SetTargetTransform(FTransform InTransform) {
}

void AEscortMule::SetSpeedModifier(float inSpeedModifier) {
}

void AEscortMule::SetFullExtracterAttached(UInstantUsable* usable) {
}

void AEscortMule::SetExtractorDetached(UInstantUsable* usable) {
}

void AEscortMule::SetExitGaragePath(const TArray<FVector> Path) {
}

void AEscortMule::ResetExtractors() {
}


void AEscortMule::OnRep_SpeedModifier() {
}

void AEscortMule::OnRep_MovementState() {
}


void AEscortMule::OnRep_ExtractorSlots() {
}




void AEscortMule::ObjectiveStateChange(EEscortMissionState NewState) {
}

EEscortExtractorState AEscortMule::GetExtractorState(UInstantUsable* usable) const {
    return EEscortExtractorState::ReadyToGrab;
}

void AEscortMule::ActivateMule() {
}

void AEscortMule::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AEscortMule, State);
    DOREPLIFETIME(AEscortMule, MovementState);
    DOREPLIFETIME(AEscortMule, SpeedModifier);
    DOREPLIFETIME(AEscortMule, CannisterVisible_Left);
    DOREPLIFETIME(AEscortMule, CannisterVisible_Right);
    DOREPLIFETIME(AEscortMule, NextStop);
    DOREPLIFETIME(AEscortMule, IsCarvingTunnel);
    DOREPLIFETIME(AEscortMule, ExtractorSlots);
}


