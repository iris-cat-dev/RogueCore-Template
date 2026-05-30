#include "DualAnimatedItem.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
#include "FirstPersonSkeletalMeshComponent.h"

ADualAnimatedItem::ADualAnimatedItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->FPAnimInstance = nullptr;
    this->TPAnimInstance = nullptr;
    this->FPRMesh = CreateDefaultSubobject<UFirstPersonSkeletalMeshComponent>(TEXT("FPRMesh"));
    this->FPLMesh = CreateDefaultSubobject<UFirstPersonSkeletalMeshComponent>(TEXT("FPLMesh"));
    this->TPRMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("TPRMesh"));
    this->TPLMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("TPLMesh"));
    this->FP_EquipAnimation = nullptr;
    this->TP_EquipAnimation = nullptr;
    this->EquipDuration = 0.25f;
    this->CharacterAnimationSet = nullptr;
    this->FPLMesh->SetupAttachment(RootComponent);
    this->FPRMesh->SetupAttachment(RootComponent);
    this->TPLMesh->SetupAttachment(RootComponent);
    this->TPRMesh->SetupAttachment(RootComponent);
}

USkeletalMeshComponent* ADualAnimatedItem::GetRItemMesh() const {
    return NULL;
}

USkeletalMeshComponent* ADualAnimatedItem::GetLItemMesh() const {
    return NULL;
}


