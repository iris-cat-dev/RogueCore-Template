#include "FrozenPawnImpactComponent.h"

UFrozenPawnImpactComponent::UFrozenPawnImpactComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FrozenMaterial = nullptr;
    this->FrozenAsset = nullptr;
    this->FrozenDeathSound = nullptr;
    this->FrozenDeathParticles = nullptr;
}

void UFrozenPawnImpactComponent::TriggerFrozenRagdoll() {
}

void UFrozenPawnImpactComponent::OnFrozen(bool frozen) {
}

void UFrozenPawnImpactComponent::OnFreezeImpact(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}


