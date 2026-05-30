#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ERunDepth.h"
#include "TelemetryWorkbenchPicks.h"
#include "VoteData.h"
#include "TelemetryLibrary.generated.h"

class UBXEUnlockBase;
class UObject;
class UPerkAsset;
class UPlayerCharacterID;

UCLASS(Blueprintable)
class UTelemetryLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UTelemetryLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void NotifyTelemetryWorkbenchPickWeapon(const UObject* WorldContext, const FTelemetryWorkbenchPicks& PickableOptions, const int32 PickIndex);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void NotifyTelemetryWorkbenchPickAttribute(const UObject* WorldContext, const FTelemetryWorkbenchPicks& PickableOptions, const int32 PickIndex);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void NotifyTelemetryWorkbenchPickAbilityUpgrade(const UObject* WorldContext, const FTelemetryWorkbenchPicks& PickableOptions, const int32 PickIndex);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void NotifyTelemetryStageEndElevatorCalled(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void NotifyTelemetryStageEndElevatorArrived(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void NotifyTelemetryRunEndRating(const UObject* WorldContext, const FGuid RunId, const ERunDepth RunDepth, const FString& rating, const FString& PickedQuestionOption);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void NotifyTelemetryRockAndStone(const UObject* WorldContext, const UPlayerCharacterID* PlayerClass);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void NotifyTelemetryPromotionBought(const UObject* WorldContext, const int32 PromotionLevel, const UPlayerCharacterID* PromotedClass);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void NotifyTelemetryPlayerDeath(const UObject* WorldContext, const FString& Cause, const int32 SecondsSinceLastDamageTaken, const int32 SecondsSinceLastRevive);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void NotifyTelemetryPickRiskVector(const UObject* WorldContext, const FVoteData& Vote, const int32 MyVoteIndex);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void NotifyTelemetryLevelLoad(const UObject* WorldContext, const float LoadTimeInSeconds);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void NotifyTelemetryEnhancementBought(const UObject* WorldContext, const UPerkAsset* enhancement);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void NotifyTelemetryBioBoosterPick(const UObject* WorldContext, const TArray<UBXEUnlockBase*>& PickableOptions, const UBXEUnlockBase* PickedOption);
    
};

