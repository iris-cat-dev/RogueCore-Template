#include "SpawnEffectsComponent.h"

USpawnEffectsComponent::USpawnEffectsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BiomeMaterialOverride = nullptr;
}

void USpawnEffectsComponent::All_AddEffects_Implementation(const TArray<FSpawnEffectItem>& NewEffects) {
}


