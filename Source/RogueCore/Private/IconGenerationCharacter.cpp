#include "IconGenerationCharacter.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent

AIconGenerationCharacter::AIconGenerationCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OrigBaseMaterial = nullptr;
    this->mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh0"));
    this->ArmorMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("ArmorMesh"));
    this->GauntletLeftMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("GauntletLeftMesh"));
    this->GauntletRightMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("GauntletRightMesh"));
    this->HairColor = nullptr;
    this->ArmorMaterial = nullptr;
    this->UndersuitMaterial = nullptr;
    this->GauntletMaterial = nullptr;
    this->ArmorMesh->SetupAttachment(mesh);
    this->GauntletLeftMesh->SetupAttachment(mesh);
    this->GauntletRightMesh->SetupAttachment(mesh);
    this->mesh->SetupAttachment(MeshRoot);
}


