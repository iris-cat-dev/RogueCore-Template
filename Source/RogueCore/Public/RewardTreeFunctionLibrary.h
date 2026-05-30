#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "RewardTreeFunctionLibrary.generated.h"

class AFSDPlayerController;
class UObject;

UCLASS(Blueprintable)
class URewardTreeFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URewardTreeFunctionLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void UnlockAllTreeNodes(UObject* WorldContextObject, AFSDPlayerController* Player);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static bool IsNodeUnlocked(UObject* WorldContext, int32 RewardTreeNodeID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static bool IsNodeBought(UObject* WorldContext, int32 RewardTreeNodeID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static bool IsNodeBehindLock(UObject* WorldContext, int32 RewardTreeNodeID);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="InWorldContextObject"))
    static bool IsLockUnlocked(UObject* InWorldContextObject, int32 InLockIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="InWorldContextObject"))
    static int32 GetNumberOfNodesBought(const UObject* InWorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="InWorldContextObject"))
    static void EnhancementTreeUnlockLock(UObject* InWorldContextObject, int32 InLockIndex);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool BuyTreeNode(UObject* WorldContextObject, int32 RewardTreeNodeID);
    
};

