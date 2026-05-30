#include "VanityCharacter.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ChildActorComponent -FallbackName=ChildActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent

AVanityCharacter::AVanityCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Animation = nullptr;
    this->skinColor = nullptr;
    this->BeardColor = nullptr;
    this->DynamicBeardColor = nullptr;
    this->DefaultHairColor = nullptr;
    this->Head = nullptr;
    this->HeadAccessory = nullptr;
    this->EyeBrows = nullptr;
    this->Sideburns = nullptr;
    this->Moustache = nullptr;
    this->Beard = nullptr;
    this->ArmorMeshType = EArmorMeshType::None;
    this->Armor = nullptr;
    this->ArmorColor = nullptr;
    this->ApplyArmorPaintToUndersuit = false;
    this->ApplyArmorPaintToGauntlets = false;
    this->DefaultUndersuitMaterial = nullptr;
    this->DefaultArmorMaterial = nullptr;
    this->DefaultGauntletMaterial = nullptr;
    this->itemClass = nullptr;
    this->Framework = nullptr;
    this->Paintjob = nullptr;
    this->ChildActorComponent = CreateDefaultSubobject<UChildActorComponent>(TEXT("ItemInstance"));
    this->mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh0"));
    this->GauntletLeftMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("GauntletLeftMesh"));
    this->GauntletRightMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("GauntletRightMesh"));
    this->GauntletLeftMesh->SetupAttachment(mesh);
    this->GauntletRightMesh->SetupAttachment(mesh);
    this->mesh->SetupAttachment(RootComponent);
}

void AVanityCharacter::DisplayVanity() {
}

void AVanityCharacter::Clean() {
}


