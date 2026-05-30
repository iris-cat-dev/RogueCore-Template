#include "DeepPathfinderCharacter.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
#include "DeepPatherFinderCharacterAfflictionComponent.h"
#include "DeepPathfinderMovement.h"
#include "DeepPathfinderSceneComponent.h"

ADeepPathfinderCharacter::ADeepPathfinderCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UDeepPathfinderSceneComponent>(TEXT("SceneComponent"));
    this->PathfinderMovement = CreateDefaultSubobject<UDeepPathfinderMovement>(TEXT("PathfinderMovement"));
    this->mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("mesh"));
    this->Affliction = CreateDefaultSubobject<UDeepPatherFinderCharacterAfflictionComponent>(TEXT("Affliction"));
    this->AnimationOffset = 0.00f;
    this->CanPlayerStandOn = false;
    this->UseDormancy = false;
    this->StaggerDurationMultiplier = 1.00f;
    this->StaggerImunityWindow = 0.00f;
    this->StaggerPauseLogic = false;
    this->IsHidden = false;
    this->IsStaggered = false;
    this->FrozenPauseLogic = false;
    this->MeshDecalIndex = 0;
    this->CurrentStaggerAffliction = nullptr;
    this->AttackerRadius = 65.00f;
    this->AllowedInFormationChance = 0.75f;
    this->AIPlayerControlComponentCache = nullptr;
    this->mesh->SetupAttachment(RootComponent);
}

bool ADeepPathfinderCharacter::TryJoinFormation() {
    return false;
}

void ADeepPathfinderCharacter::Stagger(const FStaggerParams& StaggerParams) {
}

void ADeepPathfinderCharacter::SetStaggerImmunity(bool InImmune, const UObject* InStaggerImmunitySource) {
}

void ADeepPathfinderCharacter::SetHidden(bool shouldHide) {
}

void ADeepPathfinderCharacter::OnPausedMovementElapsed() {
}


void ADeepPathfinderCharacter::Multicast_SetActorRotation_Implementation(const FRotator& Rotator) {
}

void ADeepPathfinderCharacter::LeaveFormation() {
}

bool ADeepPathfinderCharacter::GetCanStagger() const {
    return false;
}


