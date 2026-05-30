#include "DebrisStaticMesh.h"

FDebrisStaticMesh::FDebrisStaticMesh() {
    this->mesh = nullptr;
    this->Material = nullptr;
    this->CollisionProfile = EDebrisMeshCollisionProfile::NoCollision;
    this->Probablity = 0.00f;
    this->DestroyedSound = nullptr;
    this->DestroyedParticles = nullptr;
    this->Fragile = false;
    this->ExtraClearRadius = 0.00f;
    this->CastShadows = EDebrisMeshShadows::Never;
    this->Durable = false;
    this->SpecialDebrisType = 0;
    this->SpawnWhenCarving = false;
    this->OnlySpawnWhenCarving = false;
    this->Decal = FDecalData();
}

