#include "ExtruderPlant.h"
#include "Components/AudioComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent

AExtruderPlant::AExtruderPlant(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("mesh"));
    this->ExtrudeAnimation = nullptr;
    this->RetractAnimation = nullptr;
    this->Audio = CreateDefaultSubobject<UAudioComponent>(TEXT("Audio"));
}


