#include "DisplayCase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
#include "Net/UnrealNetwork.h"

ADisplayCase::ADisplayCase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NetDormancy = DORM_DormantAll;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Root = (USceneComponent*)RootComponent;
    this->ContentAttachPoint = nullptr;
    this->ContentMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("ContentMesh"));
    this->RotationSpeed = 15.00f;
    this->BeerMugSpawnChancePercent = 0.00f;
    this->BarrelSpawnChancePercent = 0.10f;
    this->TimeMultiplier = 0.50f;
    this->SizeMultiplier = 1.00f;
    this->ContentIndex = -1;
    this->BeerMugShout = nullptr;
    this->ContentMesh->SetupAttachment(RootComponent);
}

void ADisplayCase::RefreshContent() {
}

void ADisplayCase::PlayReactionAnimation() {
}

void ADisplayCase::OnRep_ContentIndex() {
}

bool ADisplayCase::IsSpecialContent() const {
    return false;
}

void ADisplayCase::InitializeCase() {
}

bool ADisplayCase::GetCurrentContent(FDisplayContent& currentContent) const {
    return false;
}

void ADisplayCase::ChangeContent() {
}

void ADisplayCase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ADisplayCase, ContentIndex);
}


