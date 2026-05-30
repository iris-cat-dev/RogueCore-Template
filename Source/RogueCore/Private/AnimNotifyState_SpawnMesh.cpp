#include "AnimNotifyState_SpawnMesh.h"

UAnimNotifyState_SpawnMesh::UAnimNotifyState_SpawnMesh() {
    this->mesh = nullptr;
    this->HasOverrideMaterial = false;
    this->OverrideMaterial = nullptr;
    this->OverrideMaterialSlot = 0;
    this->UseFirstPersonComponent = false;
}


