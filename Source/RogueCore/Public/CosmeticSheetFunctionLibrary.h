#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "CosmeticSheetFunctionLibrary.generated.h"

class UCosmeticSheet;
class UObject;
class UPlayerCharacterID;

UCLASS(Blueprintable)
class ROGUECORE_API UCosmeticSheetFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UCosmeticSheetFunctionLibrary();

private:
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="InWorldContext"))
    static bool IsPerClassRewardBought(const UObject* InWorldContext, const UCosmeticSheet* InCosmeticSheet, int32 InRewardTreeNodeID, const UPlayerCharacterID* InPlayerCharacterID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="InWorldContext"))
    static bool IsNodeUnlocked(const UObject* InWorldContext, const UCosmeticSheet* InCosmeticSheet, int32 InRewardTreeNodeID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="InWorldContext"))
    static bool IsNodeBought(const UObject* InWorldContext, const UCosmeticSheet* InCosmeticSheet, int32 InRewardTreeNodeID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="InWorldContext"))
    static int32 GetNumberOfPerClassBought(const UObject* InWorldContext, const UCosmeticSheet* InCosmeticSheet, int32 InRewardTreeNodeID);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="InWorldContext"))
    static bool BuyCosmeticTreeNode(UObject* InWorldContext, const UCosmeticSheet* InCosmeticSheet, int32 InRewardTreeNodeID, UPlayerCharacterID* InOptionalPerClassUnlockPlayerCharacterID);
    
};

