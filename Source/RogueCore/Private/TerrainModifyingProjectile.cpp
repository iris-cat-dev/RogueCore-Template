#include "TerrainModifyingProjectile.h"

ATerrainModifyingProjectile::ATerrainModifyingProjectile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Terrain = nullptr;
    this->OriginalGroundMaterial = nullptr;
    this->CarveMesh = nullptr;
    this->Radius = 1.00f;
    this->Revert = true;
    this->TimeOnGround = 0.00f;
    this->ExpensiveCarveNoise = 0.00f;
}

void ATerrainModifyingProjectile::Tick(float DeltaSeconds) {
}

float ATerrainModifyingProjectile::GetRadius() const {
    return 0.0f;
}

void ATerrainModifyingProjectile::BeginPlay() {
}


