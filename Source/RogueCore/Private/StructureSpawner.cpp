#include "StructureSpawner.h"

AStructureSpawner::AStructureSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->StructureInstance = nullptr;
    this->DebrisPositioning = nullptr;
    this->CostCurve = nullptr;
    this->MaxSpawnLocationTries = 10;
    this->ShouldRotateTowardsCenterOfRoom = true;
}

void AStructureSpawner::TrySpawnStructure() {
}


