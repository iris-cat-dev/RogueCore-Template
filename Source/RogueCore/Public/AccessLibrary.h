#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "AccessLibrary.generated.h"

class AActor;
class UAccessCondition;
class UObject;
class UReward;

UCLASS(Blueprintable)
class ROGUECORE_API UAccessLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAccessLibrary();

    UFUNCTION(BlueprintCallable)
    static void RemoveTemporaryAccessConditionToActor(AActor* Actor, UAccessCondition* Condition);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void RemovePermanentAccessConditionFromLocalPlayer(UObject* WorldContext, UAccessCondition* Condition);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UAccessCondition* FindAccessConditionReward(const TArray<UReward*>& Rewards);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool DoesActorHaveAccessCondition(const AActor* Actor, const UAccessCondition* Condition);
    
    UFUNCTION(BlueprintCallable)
    static void AddTemporaryAccessConditionToActor(AActor* Actor, UAccessCondition* Condition);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void AddPermanentAccessConditionToLocalPlayer(UObject* WorldContext, UAccessCondition* Condition);
    
};

