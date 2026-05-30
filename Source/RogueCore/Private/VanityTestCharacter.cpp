#include "VanityTestCharacter.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent

AVanityTestCharacter::AVanityTestCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GauntletLeftMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("GauntletLeftMesh"));
    const FProperty* p_mesh_Parent = GetClass()->FindPropertyByName("mesh");
    this->GauntletRightMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("GauntletRightMesh"));
    this->ArmorThickness = 0.00f;
    this->BeardThickness = 0.00f;
    this->ArmorCoversBeard = false;
    this->WeaponMesh = nullptr;
    this->GauntletLeftMesh->SetupAttachment(p_mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->GauntletRightMesh->SetupAttachment(p_mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
}

void AVanityTestCharacter::SetupVanity() {
}


