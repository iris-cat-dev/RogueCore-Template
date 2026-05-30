#include "ResourcePouch.h"
#include "CarriableInstantUsable.h"

AResourcePouch::AResourcePouch(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->usable = CreateDefaultSubobject<UCarriableInstantUsable>(TEXT("usable"));
    this->ImpactGroundSound = nullptr;
}

void AResourcePouch::ActorWasHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit) {
}


