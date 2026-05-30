#include "Magazine.h"

AMagazine::AMagazine(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ImpactGroundSound = nullptr;
}


void AMagazine::ActorWasHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit) {
}


