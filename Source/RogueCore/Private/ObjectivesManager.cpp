#include "ObjectivesManager.h"

UObjectivesManager::UObjectivesManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Objective = nullptr;
    this->CompletionRequirement = 100.00f;
    this->ObjectivesInitialized = false;
    this->ObjectivesStarted = false;
    this->bCheatObjectivesCompleted = false;
}

bool UObjectivesManager::ReturnObjectivesCompleted(bool& hasRequiredSecondary) const {
    return false;
}

void UObjectivesManager::OnObjectiveChanged(UObjective* obj) {
}

bool UObjectivesManager::HasRequiredSecondaryObjective() const {
    return false;
}

UObjective* UObjectivesManager::GetSecondaryObjective() const {
    return NULL;
}

UObjective* UObjectivesManager::GetPrimaryObjective() const {
    return NULL;
}

TArray<UObjective*> UObjectivesManager::GetAllSecondaryObjectives() const {
    return TArray<UObjective*>();
}

void UObjectivesManager::ExitPodDescending() {
}

void UObjectivesManager::ExitPodArrived() {
}

void UObjectivesManager::DropPodExited() {
}

bool UObjectivesManager::AreRequiredSecondariesComplete() const {
    return false;
}


