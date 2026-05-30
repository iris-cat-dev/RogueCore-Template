#include "HitscanComponent.h"

UHitscanComponent::UHitscanComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CanHitInstigator = false;
    this->BulletsCanCarve = false;
    this->CarveDiameter = 50.00f;
    this->CarveNoise = 25.00f;
    this->CarveDebrisSize = 0.25f;
    this->GeneralImpactAudioVolume = 1.00f;
    this->ImpactDelay = 0.02f;
    this->OnlyUseImpactEffects = false;
    this->ImpactParticles = nullptr;
    this->ImpactSound = nullptr;
    this->IgnoreAlwaysPenetrate = false;
}

void UHitscanComponent::Server_ShowRicochetHit_Terrain_Implementation(FVector_NetQuantize Origin, FVector_NetQuantize Location, FVector_NetQuantizeNormal Normal, uint8 MaterialID, UFSDPhysicalMaterial* PhysMaterial) {
}

void UHitscanComponent::Server_ShowRicochetHit_Destructible_Implementation(FVector_NetQuantize Origin, FVector_NetQuantize Location, FVector_NetQuantizeNormal Normal, UPrimitiveComponent* Target, UFSDPhysicalMaterial* PhysMaterial, uint8 BoneIndex) {
}

void UHitscanComponent::Server_ShowRicochetHit_Implementation(FVector_NetQuantize Origin, FVector_NetQuantize Location, FVector_NetQuantizeNormal Normal, bool SpawnDecal, UFSDPhysicalMaterial* PhysMaterial) {
}

void UHitscanComponent::Server_ShowHit_Terrain_Implementation(FVector_NetQuantize Location, FVector_NetQuantizeNormal Normal, uint8 MaterialID, UFSDPhysicalMaterial* PhysMaterial) {
}

void UHitscanComponent::Server_ShowHit_Destructible_Implementation(FVector_NetQuantize Location, FVector_NetQuantizeNormal Normal, UPrimitiveComponent* Target, UFSDPhysicalMaterial* PhysMaterial, uint8 BoneIndex) {
}

void UHitscanComponent::Server_ShowHit_Implementation(FVector_NetQuantize Location, FVector_NetQuantizeNormal Normal, bool SpawnDecal, UFSDPhysicalMaterial* PhysMaterial) {
}

void UHitscanComponent::Server_RegisterRicochetHit_Terrain_Implementation(FVector_NetQuantize Origin, FVector_NetQuantize Location, FVector_NetQuantizeNormal Normal, UFSDPhysicalMaterial* PhysMaterial, int32 ClipCount) {
}

void UHitscanComponent::Server_RegisterRicochetHit_Destructable_Implementation(FVector_NetQuantize Origin, FVector_NetQuantize Location, FVector_NetQuantizeNormal Normal, UPrimitiveComponent* Target, UFSDPhysicalMaterial* PhysMaterial, uint8 BoneIndex, int32 ClipCount) {
}

void UHitscanComponent::Server_RegisterRicochetHit_Implementation(FVector_NetQuantize Origin, FVector_NetQuantize Location, FVector_NetQuantizeNormal Normal, UPrimitiveComponent* Target, UFSDPhysicalMaterial* PhysMaterial, int32 ClipCount, int32 BoneIndex) {
}

void UHitscanComponent::Server_RegisterHit_Terrain_Implementation(FVector_NetQuantize Location, FVector_NetQuantizeNormal Normal, UFSDPhysicalMaterial* PhysMaterial, int32 ClipCount) {
}

void UHitscanComponent::Server_RegisterHit_Destructable_Implementation(FVector_NetQuantize Location, FVector_NetQuantizeNormal Normal, UPrimitiveComponent* Target, UFSDPhysicalMaterial* PhysMaterial, uint8 BoneIndex, int32 ClipCount) {
}

void UHitscanComponent::Server_RegisterHit_Implementation(FVector_NetQuantize Location, FVector_NetQuantizeNormal Normal, UPrimitiveComponent* Target, UFSDPhysicalMaterial* PhysMaterial, int32 ClipCount, int32 BoneIndex) {
}

void UHitscanComponent::All_ShowRicochetHit_Terrain_Implementation(FVector_NetQuantize Origin, FVector_NetQuantize Location, FVector_NetQuantizeNormal Normal, uint8 MaterialID, UFSDPhysicalMaterial* PhysMaterial) {
}

void UHitscanComponent::All_ShowRicochetHit_Destructable_Implementation(FVector_NetQuantize Origin, FVector_NetQuantize Location, FVector_NetQuantizeNormal Normal, UPrimitiveComponent* Target, UFSDPhysicalMaterial* PhysMaterial, uint8 BoneIndex) {
}

void UHitscanComponent::All_ShowRicochetHit_Implementation(FVector_NetQuantize Origin, FVector_NetQuantize Location, FVector_NetQuantizeNormal Normal, bool SpawnDecal, UFSDPhysicalMaterial* PhysMaterial) {
}

void UHitscanComponent::All_ShowHit_Terrain_Implementation(FVector_NetQuantize Location, FVector_NetQuantizeNormal Normal, uint8 MaterialID, UFSDPhysicalMaterial* PhysMaterial) {
}

void UHitscanComponent::All_ShowHit_Destructable_Implementation(FVector_NetQuantize Location, FVector_NetQuantizeNormal Normal, UPrimitiveComponent* Target, UFSDPhysicalMaterial* PhysMaterial, uint8 BoneIndex) {
}

void UHitscanComponent::All_ShowHit_Implementation(FVector_NetQuantize Location, FVector_NetQuantizeNormal Normal, bool SpawnDecal, UFSDPhysicalMaterial* PhysMaterial) {
}


