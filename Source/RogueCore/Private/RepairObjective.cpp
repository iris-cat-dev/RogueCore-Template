#include "RepairObjective.h"
#include "Net/UnrealNetwork.h"

URepairObjective::URepairObjective(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RepairedObjectives = 0;
    this->ObjectivesToRepair = 3;
    this->RepairObjectiveResource = nullptr;
    this->Positioning = nullptr;
    this->RepairResourcesPerActor = 25;
    this->RepairResourceDistanceFromActor = 2000.00f;
    this->MinRepairObjectiveDistanceToLandingZone = 1000.00f;
    this->UseBXEChunks = false;
}

void URepairObjective::OnRep_RepairedObjectives() {
}

void URepairObjective::OnRep_ObjectivesToRepair() {
}

void URepairObjective::OnObjectiveRepaired(URepairableComponent* Repairable) {
}


void URepairObjective::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(URepairObjective, RepairedObjectives);
    DOREPLIFETIME(URepairObjective, ObjectivesToRepair);
}


