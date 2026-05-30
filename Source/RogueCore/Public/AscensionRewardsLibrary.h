#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ClaimableRewardEntry.h"
#include "AscensionRewardsLibrary.generated.h"

class APlayerController;
class UObject;

UCLASS(Blueprintable)
class UAscensionRewardsLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAscensionRewardsLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static bool HasPendingAscensionRewards(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static bool ClaimAscensionRewards(UObject* WorldContext, APlayerController* PlayerController, TArray<FClaimableRewardEntry>& OutRewards, bool& OutFirstAscension);
    
};

