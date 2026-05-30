#include "ProjectileExplosion.h"

UProjectileExplosion::UProjectileExplosion(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayImpactFXFromMaterial = false;
    this->ExplosionSound = nullptr;
    this->ForceFeedbackEffect = nullptr;
    this->ForceFeedbackAttanuation = nullptr;
}

void UProjectileExplosion::SpawnEffectsFromHit(const FHitResult& Hit) {
}

void UProjectileExplosion::SpawnEffects(FVector Location, FVector Normal) {
}


