#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EPauseReason.h"
#include "GameModeFunctionLibrary.generated.h"

class AActor;
class AFSDGameState;
class UObject;
class USeamlessTravelEventKey;

UCLASS(Blueprintable)
class UGameModeFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGameModeFunctionLibrary();

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void SetGamePausedWithReason(const UObject* WorldContext, EPauseReason pauseReason);
    
private:
    UFUNCTION(BlueprintCallable)
    static bool IsCloseToImportantLocation(AFSDGameState* GameState, const FVector& Location);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FTransform FindEscapePodLocationAtDistance(UObject* WorldContextObject, float Distance, float AboveDistanceBias, AActor* OptionalFrom);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void ClearGamePausedWithReason(const UObject* WorldContext, EPauseReason pauseReason);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static bool AreAllMissionEndResultsReceived(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AddSeamlessTravelEventKey(UObject* WorldContextObject, USeamlessTravelEventKey* Key);
    
};

