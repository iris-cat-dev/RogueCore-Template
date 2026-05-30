#include "MasterySubsystem.h"

UMasterySubsystem::UMasterySubsystem() {
}

FTimespan UMasterySubsystem::TimeToNewDeployment() {
    return FTimespan{};
}

void UMasterySubsystem::RerollDeployment(int32 Index) {
}

void UMasterySubsystem::OnSaveGameLoaded(UFSDSaveGame* InSaveGame) {
}

void UMasterySubsystem::OnResourceAmountChanged(const UResourceData* Resource, float previousAmount, float newAmount) {
}

void UMasterySubsystem::OnDeploymentStatChanged(UObject* WorldContext, UMissionStat* Stat, float Value, float change) {
}

bool UMasterySubsystem::IsDeploymentClaimable(const FDeploymentInfo& InDeploymentInfo) const {
    return false;
}

void UMasterySubsystem::InitializeDeployments() {
}

int32 UMasterySubsystem::GetNumberOfUnlockedDeploymentSlots(const UObject* InWorldContext) {
    return 0;
}

TArray<FDeploymentInfo> UMasterySubsystem::GetAndAddNewActiveDeployments(bool canGenerateNewDeployment) {
    return TArray<FDeploymentInfo>();
}

UResourceData* UMasterySubsystem::GetActiveCosmeticToken() const {
    return NULL;
}

UCosmeticSheet* UMasterySubsystem::GetActiveCosmeticSheet() const {
    return NULL;
}

void UMasterySubsystem::ClaimDeployment(const FDeploymentInfo& InDeploymentInfo) {
}

bool UMasterySubsystem::CanRerollDeployment() const {
    return false;
}

void UMasterySubsystem::BuyDeploymentSlot(const UObject* InWorldContext) {
}

bool UMasterySubsystem::AllCosmeticTokensRewardedForSheet() const {
    return false;
}


