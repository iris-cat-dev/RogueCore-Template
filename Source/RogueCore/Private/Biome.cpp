#include "Biome.h"

UBiome::UBiome() {
    this->BiomeIndex = 0;
    this->IsTutorialBiome = false;
    this->ExtraCaveSize = 0.00f;
    this->RockMaterial = nullptr;
    this->DirtMaterial = nullptr;
    this->BurnedMaterialOverride = nullptr;
    this->CompletedStat = nullptr;
    this->CeilingNoise = nullptr;
    this->CeilingDetailNoise = nullptr;
    this->WallNoise = nullptr;
    this->WallDetailNoise = nullptr;
    this->FloorNoise = nullptr;
    this->FloorDetailNoise = nullptr;
    this->PillarNoise = nullptr;
    this->PillarDetailNoise = nullptr;
    this->PillarSettings = nullptr;
    this->TunnelCeilingNoise = nullptr;
    this->TunnelWallNoise = nullptr;
    this->TunnelFloorNoise = nullptr;
    this->Use3DAmbient = false;
    this->SmallCaveReverbVolume = 1.00f;
    this->SmallCaveReverb = nullptr;
    this->MediumCaveReverbVolume = 1.00f;
    this->MediumCaveReverb = nullptr;
    this->LargeCaveReverbVolume = 1.00f;
    this->LargeCaveReverb = nullptr;
    this->PlanetZoneSelectionWeight = 1.00f;
    this->FloorAndWallSmoothingDistance = 0.00f;
}

void UBiome::StartPreload(UObject* WorldContext) const {
}

UTerrainMaterial* UBiome::GetRockMaterial() const {
    return NULL;
}

TSoftClassPtr<AActor> UBiome::GetPostProcessActorClass_Soft() const {
    return NULL;
}

UMaterialInstance* UBiome::GetFlavorMaterial() const {
    return NULL;
}

UTerrainMaterial* UBiome::GetDirtMaterial() const {
    return NULL;
}

TSoftClassPtr<ADebrisDataActor> UBiome::GetDebrisActorSoftClass() {
    return NULL;
}

UTexture2D* UBiome::GetBiomeWorldMap() const {
    return NULL;
}

UTexture2D* UBiome::GetBiomePicture() const {
    return NULL;
}

FText UBiome::GetBiomeName() const {
    return FText::GetEmpty();
}

UTexture2D* UBiome::GetBiomeMissionBar() const {
    return NULL;
}

TArray<FSoftObjectPath> UBiome::GetBiomeMapAssetList() const {
    return TArray<FSoftObjectPath>();
}

UTexture2D* UBiome::GetBiomeLargeImage() const {
    return NULL;
}

int32 UBiome::GetBiomeIndex() const {
    return 0;
}

UTexture2D* UBiome::GetBiomeIconSimple() const {
    return NULL;
}

UTexture2D* UBiome::GetBiomeIcon() const {
    return NULL;
}

UFXSystemAsset* UBiome::GetAtmosphericParticles() const {
    return NULL;
}

USoundCue* UBiome::GetAmbientSounds() const {
    return NULL;
}


