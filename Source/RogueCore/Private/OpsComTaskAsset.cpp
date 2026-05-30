#include "OpsComTaskAsset.h"

UOpsComTaskAsset::UOpsComTaskAsset() {
    this->FormattedTitle = FText::FromString(TEXT("Parameters: {value} {float_value} {character}"));
    this->FormattedValueOffset = 0;
    this->CountValueAsTotal = false;
    this->TrackingStat = nullptr;
    this->MeritReward = 500.00f;
    this->TrackingCharacterID = nullptr;
    this->LastTierOnTierReachedBroadcast = 0;
}

TArray<UOpsComTaskAsset*> UOpsComTaskAsset::SortTasksByProgress(UObject* WorldContext, TArray<UOpsComTaskAsset*>& InTasks) {
    return TArray<UOpsComTaskAsset*>();
}

void UOpsComTaskAsset::OnStatChanged(UObject* WorldContext, UMissionStat* Stat, float Value, float change) {
}

bool UOpsComTaskAsset::IsCompleted(const UObject* WorldContext) const {
    return false;
}

bool UOpsComTaskAsset::IsClaimable(const UObject* WorldContext) const {
    return false;
}

FText UOpsComTaskAsset::GetTitleForTier(int32 InTier) const {
    return FText::GetEmpty();
}

FText UOpsComTaskAsset::GetTitle(const UObject* WorldContext) const {
    return FText::GetEmpty();
}

UReward* UOpsComTaskAsset::GetRewardForTier(int32 InTier) const {
    return NULL;
}

int32 UOpsComTaskAsset::GetCurrentTier(const UObject* WorldContext) const {
    return 0;
}

void UOpsComTaskAsset::GetCurrentProgress(const UObject* WorldContext, int32& OutTier, float& OutProgress, float& OutCurrentCount, float& OutTargetCount) const {
}

int32 UOpsComTaskAsset::GetClaimedTier(const UObject* WorldContext) const {
    return 0;
}

bool UOpsComTaskAsset::GetClaimedProgress(const UObject* WorldContext, int32& OutTier, float& OutProgress, float& OutCurrentCount, float& OutTargetCount) const {
    return false;
}

UTexture2D* UOpsComTaskAsset::GetCategoryIcon() const {
    return NULL;
}

int32 UOpsComTaskAsset::ClaimNextTier(UObject* WorldContext) {
    return 0;
}


