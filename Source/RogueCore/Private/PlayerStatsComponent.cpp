#include "PlayerStatsComponent.h"
#include "Net/UnrealNetwork.h"

UPlayerStatsComponent::UPlayerStatsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TotalKills = 0;
    this->TotalRevived = 0;
    this->TotalDeaths = 0;
    this->TotalGoldMined = 0.00f;
    this->TotalMOMsMined = 0.00f;
    this->TotalMineralsMined = 0.00f;
    this->TotalXPGained = 0.00f;
    this->TotalHealthRestored = 0.00f;
    this->LastPlayedClass = nullptr;
    this->CauseOfDeathClass = nullptr;
    this->TotalDamageDealt = 0.00f;
    this->TotalDamageTaken = 0.00f;
}

void UPlayerStatsComponent::SendEndMissionResult_Implementation(const FEndMissionResult& Result) {
}

void UPlayerStatsComponent::OnResourceMined(UCappedResource* Resource, float Amount) {
}

bool UPlayerStatsComponent::IsEndMissionResultReady() const {
    return false;
}

FEndMissionResult UPlayerStatsComponent::GetEndMissionResult() const {
    return FEndMissionResult{};
}

void UPlayerStatsComponent::AddRevived() {
}

void UPlayerStatsComponent::AddKill() {
}

void UPlayerStatsComponent::AddHealthRestored(float Amount) {
}

void UPlayerStatsComponent::AddDeath(UClass* CauseOfDeath) {
}

void UPlayerStatsComponent::AddDamageTaken(const double Damage) {
}

void UPlayerStatsComponent::AddDamageDealt(const double Damage) {
}

void UPlayerStatsComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPlayerStatsComponent, TotalKills);
    DOREPLIFETIME(UPlayerStatsComponent, TotalRevived);
    DOREPLIFETIME(UPlayerStatsComponent, TotalDeaths);
    DOREPLIFETIME(UPlayerStatsComponent, TotalGoldMined);
    DOREPLIFETIME(UPlayerStatsComponent, TotalMOMsMined);
    DOREPLIFETIME(UPlayerStatsComponent, TotalMineralsMined);
    DOREPLIFETIME(UPlayerStatsComponent, TotalXPGained);
    DOREPLIFETIME(UPlayerStatsComponent, TotalHealthRestored);
    DOREPLIFETIME(UPlayerStatsComponent, LastPlayedClass);
    DOREPLIFETIME(UPlayerStatsComponent, EndMissionResult);
    DOREPLIFETIME(UPlayerStatsComponent, CauseOfDeathClass);
    DOREPLIFETIME(UPlayerStatsComponent, TotalDamageDealt);
    DOREPLIFETIME(UPlayerStatsComponent, TotalDamageTaken);
}


