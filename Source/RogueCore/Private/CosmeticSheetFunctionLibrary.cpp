#include "CosmeticSheetFunctionLibrary.h"

UCosmeticSheetFunctionLibrary::UCosmeticSheetFunctionLibrary() {
}

bool UCosmeticSheetFunctionLibrary::IsPerClassRewardBought(const UObject* InWorldContext, const UCosmeticSheet* InCosmeticSheet, int32 InRewardTreeNodeID, const UPlayerCharacterID* InPlayerCharacterID) {
    return false;
}

bool UCosmeticSheetFunctionLibrary::IsNodeUnlocked(const UObject* InWorldContext, const UCosmeticSheet* InCosmeticSheet, int32 InRewardTreeNodeID) {
    return false;
}

bool UCosmeticSheetFunctionLibrary::IsNodeBought(const UObject* InWorldContext, const UCosmeticSheet* InCosmeticSheet, int32 InRewardTreeNodeID) {
    return false;
}

int32 UCosmeticSheetFunctionLibrary::GetNumberOfPerClassBought(const UObject* InWorldContext, const UCosmeticSheet* InCosmeticSheet, int32 InRewardTreeNodeID) {
    return 0;
}

bool UCosmeticSheetFunctionLibrary::BuyCosmeticTreeNode(UObject* InWorldContext, const UCosmeticSheet* InCosmeticSheet, int32 InRewardTreeNodeID, UPlayerCharacterID* InOptionalPerClassUnlockPlayerCharacterID) {
    return false;
}


