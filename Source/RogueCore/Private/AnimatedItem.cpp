#include "AnimatedItem.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
#include "FirstPersonSkeletalMeshComponent.h"
#include "SkinnableComponent.h"

AAnimatedItem::AAnimatedItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    //this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Skinnable = CreateDefaultSubobject<USkinnableComponent>(TEXT("Skinnable"));
    this->FPAnimInstance = nullptr;
    this->TPAnimInstance = nullptr;
    this->FPMesh = CreateDefaultSubobject<UFirstPersonSkeletalMeshComponent>(TEXT("FPMesh"));
    this->TPMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("TPMesh"));
    this->FP_EquipAnimation = nullptr;
    this->FP_IdleAnimation = nullptr;
    this->TP_EquipAnimation = nullptr;
    this->TP_IdleAnimation = nullptr;
    this->EquipDuration = 0.25f;
    this->CharacterAnimationSet = nullptr;
    this->UpperBodyCharacterAnimationSet = nullptr;
    this->UnHideOnEquip = true;
    this->HideOnUnequip = true;
    this->FPMesh->SetupAttachment(RootComponent);
    this->TPMesh->SetupAttachment(RootComponent);
}


FTransform AAnimatedItem::GetMuzzle() const {
    return FTransform{};
}

USkeletalMeshComponent* AAnimatedItem::GetItemMesh() const {
    return NULL;
}


