#include "Objective.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

UObjective::UObjective(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ObjectiveWidgetClass = nullptr;
    this->CompletionRewardInCredits = 0;
    this->CompletionRewardInXP = 0;
    this->ScaleObjectiveToMission = true;
    this->ShowObjectiveInHUD = true;
    this->ObjectiveCompletedStat = nullptr;
    this->bCompletedStatIncremented = false;
    this->IsPrimaryObjective = -1;
    this->bIsRequiredObjective = false;
    this->MissionScale = 1.00f;
}

void UObjective::SignalObjectiveUpdated() {
}


void UObjective::OnRep_IsPrimaryObjective() {
}

bool UObjective::IsRequiredObjective() const {
    return false;
}

bool UObjective::IsPrimary() const {
    return false;
}

bool UObjective::IsObjectiveResource_Implementation(UResourceData* InResource) const {
    return false;
}

bool UObjective::IsFinalBattle() const {
    return false;
}

bool UObjective::IsCompleted() const {
    return false;
}

bool UObjective::HasReplicated() const {
    return false;
}

TSubclassOf<UObjectiveWidget> UObjective::GetWidgetClassOrDefault(TSubclassOf<UObjectiveWidget> DefaultWidgetClass) {
    return NULL;
}

int32 UObjective::GetRewardXP() const {
    return 0;
}

FCreditsReward UObjective::GetRewardCredits() const {
    return FCreditsReward{};
}

FUsableAccessDeniedInformation UObjective::GetRequiredObjectiveAccessDeniedInformation_Implementation() const {
    return FUsableAccessDeniedInformation{};
}

TSubclassOf<UOptionalObjectiveWidget> UObjective::GetOptionalMissionWidget_Implementation() const {
    return NULL;
}

FText UObjective::GetObjectiveText() const {
    return FText::GetEmpty();
}

UTexture2D* UObjective::GetObjectiveIconFromClass(TSubclassOf<UObjective> objectiveClass) {
    return NULL;
}


FText UObjective::GetObjectiveDescriptionFromClass(TSubclassOf<UObjective> objectiveClass, float missionLength) {
    return FText::GetEmpty();
}


FString UObjective::GetObjectiveAssetName(const TSoftClassPtr<UObjective>& Objective) {
    return TEXT("");
}

int32 UObjective::GetObjectiveAmountFromClass(TSubclassOf<UObjective> objectiveClass, float missionLength) {
    return 0;
}



FText UObjective::GetInMissionText_Implementation() const {
    return FText::GetEmpty();
}

FText UObjective::GetInMissionCounterText_Implementation() const {
    return FText::GetEmpty();
}

UTexture2D* UObjective::GetInMissionCounterIcon_Implementation() const {
    return NULL;
}

void UObjective::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UObjective, IsPrimaryObjective);
}


