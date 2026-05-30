#include "BXEBlueprintControlledObjective.h"
#include "Net/UnrealNetwork.h"

UBXEBlueprintControlledObjective::UBXEBlueprintControlledObjective(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DBAAvoidCostCurve = nullptr;
    this->BaseExpenitePayout = 150.00f;
    this->SeenRange = 2000.00f;
    this->SeenUpdateRateSeconds = 5.00f;
    this->ObjectiveCompleted = false;
    this->ObjectiveShouldSpawnXP = true;
    this->AllowDecoration = false;
}

void UBXEBlueprintControlledObjective::SetObjectiveCompleted() {
}


void UBXEBlueprintControlledObjective::OnRep_ObjectiveCompleted() {
}

TArray<AActor*> UBXEBlueprintControlledObjective::GetSpawnedObjectiveActors() const {
    return TArray<AActor*>();
}

float UBXEBlueprintControlledObjective::GetExpenitePayout() const {
    return 0.0f;
}

void UBXEBlueprintControlledObjective::AddSpawnedObjectiveActors(const TArray<AActor*>& InSpawned) {
}

void UBXEBlueprintControlledObjective::AddSpawnedObjectiveActor(AActor* InSpawned) {
}

void UBXEBlueprintControlledObjective::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UBXEBlueprintControlledObjective, ObjectiveCompleted);
}


