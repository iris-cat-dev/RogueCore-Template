#include "LaserPointerItem.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent

ALaserPointerItem::ALaserPointerItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MarkerType = nullptr;
    this->SecondaryMarkerType = nullptr;
    this->WaypointType = nullptr;
    this->MaxWaypoints = 3;
    this->NextWaypointIndex = 0;
    this->MarkerLifeTime = 4.00f;
    this->DefaultLookAtShout = nullptr;
    this->DefaultEnemyShout = nullptr;
    this->PointerComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Pointer"));
    this->LookAtDistance = 0.00f;
    this->LookAtShout = nullptr;
    this->MissionControlLookAtShout = nullptr;
}

void ALaserPointerItem::UnlockToMinersManual(UObject* WorldContextObject, FGuid ObjectId) {
}

void ALaserPointerItem::ToggleLaserVisible_Implementation(bool aVisible) {
}

void ALaserPointerItem::ServerPlaceMarker_Implementation(FVector Location, AActor* Actor, UPrimitiveComponent* Cmponent, UTerrainMaterial* TerrainMaterial, ELaserPointerMarkerType eMarkerType) {
}

void ALaserPointerItem::Server_SecondaryUse_Implementation() {
}

void ALaserPointerItem::Server_AddTerrainScannerMeshesToAlwaysShow_Implementation(AActor* InActor) {
}


void ALaserPointerItem::GetPointTransform_Implementation(FTransform& PointTransform) {
}

FVector ALaserPointerItem::GetActiveMarkerLocation() const {
    return FVector{};
}


