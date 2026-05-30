#include "SalvageObjective.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

USalvageObjective::USalvageObjective(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SalvageActorCount = 2;
    this->LegResource = nullptr;
    this->LegCountPerActor = 25;
    this->LegDistanceToActor = 2000.00f;
    this->Positioning = nullptr;
    this->DamagedPodPositioning = nullptr;
    this->DamagedPodMinDistanceToDropZone = 2000.00f;
    this->DamagedPod = nullptr;
    this->ActorsToSalvage = 0;
    this->ActorsSalvaged = 0;
    this->RepairPoints = 3;
    this->PointsRepaired = 0;
    this->MinSalvageActorDistanceToLandingZone = 1000.00f;
    this->HasMuleReturnedToPod = false;
}

void USalvageObjective::PointRepaired() {
}

void USalvageObjective::OnRep_PointsRepaired() {
}

void USalvageObjective::OnRep_ActorsToSalvage(int32 prevAmount) {
}

void USalvageObjective::OnRep_ActorsSalvaged(int32 prevAmount) {
}

void USalvageObjective::OnActorRepaired(URepairableComponent* Repairable) {
}

FTransform USalvageObjective::FindRepairPointLocation(AProceduralSetup* setup, const FVector& podLocation, float Radius, float maxVerticalDistance, UDebrisPositioning* DebrisPositioning, TSubclassOf<AActor> terrainPlacement, const TArray<FVector>& LocationsToAvoid, UCurveFloat* AvoidCostCurve) {
    return FTransform{};
}

FTransform USalvageObjective::FindDamagedMiningPodLocation(AProceduralSetup* setup, UDebrisPositioning* DebrisPositioning, TSubclassOf<AActor> terrainPlacement, float blockDistFromLandingZone) {
    return FTransform{};
}


void USalvageObjective::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USalvageObjective, ActorsToSalvage);
    DOREPLIFETIME(USalvageObjective, ActorsSalvaged);
    DOREPLIFETIME(USalvageObjective, PointsRepaired);
}


