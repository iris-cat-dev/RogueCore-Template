#include "FSDReverbVolume.h"
#include "Components/SphereComponent.h"

AFSDReverbVolume::AFSDReverbVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USphereComponent>(TEXT("Collision"));
    this->Collision = static_cast<USphereComponent*>(RootComponent);
    this->Reverb = nullptr;
    this->Priority = 0.00f;
}


