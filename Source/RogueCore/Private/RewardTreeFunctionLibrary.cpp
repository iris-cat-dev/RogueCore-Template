#include "RewardTreeFunctionLibrary.h"

URewardTreeFunctionLibrary::URewardTreeFunctionLibrary() {
}

void URewardTreeFunctionLibrary::UnlockAllTreeNodes(UObject* WorldContextObject, AFSDPlayerController* Player) {
}

bool URewardTreeFunctionLibrary::IsNodeUnlocked(UObject* WorldContext, int32 RewardTreeNodeID) {
    return false;
}

bool URewardTreeFunctionLibrary::IsNodeBought(UObject* WorldContext, int32 RewardTreeNodeID) {
    return false;
}

bool URewardTreeFunctionLibrary::IsNodeBehindLock(UObject* WorldContext, int32 RewardTreeNodeID) {
    return false;
}

bool URewardTreeFunctionLibrary::IsLockUnlocked(UObject* InWorldContextObject, int32 InLockIndex) {
    return false;
}

int32 URewardTreeFunctionLibrary::GetNumberOfNodesBought(const UObject* InWorldContextObject) {
    return 0;
}

void URewardTreeFunctionLibrary::EnhancementTreeUnlockLock(UObject* InWorldContextObject, int32 InLockIndex) {
}

bool URewardTreeFunctionLibrary::BuyTreeNode(UObject* WorldContextObject, int32 RewardTreeNodeID) {
    return false;
}


