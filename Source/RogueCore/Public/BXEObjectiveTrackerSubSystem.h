#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "EObjectiveFailReason.h"
#include "EObjectiveState.h"
#include "BXEObjectiveTrackerSubSystem.generated.h"

class AActor;
class UBXEBlueprintControlledObjective;

UCLASS(Blueprintable)
class UBXEObjectiveTrackerSubSystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UBXEObjectiveTrackerSubSystem();

    UFUNCTION(BlueprintCallable)
    bool UpdateObjectiveState(UBXEBlueprintControlledObjective* InObjective, EObjectiveState InState);
    
    UFUNCTION(BlueprintCallable)
    void UpdateObjectiveFailReason(UBXEBlueprintControlledObjective* InObjective, EObjectiveFailReason InReason);
    
    UFUNCTION(BlueprintCallable)
    void RegisterObjective(UBXEBlueprintControlledObjective* InObjective);
    
    UFUNCTION(BlueprintCallable)
    void RecordExpeniteTarget(UBXEBlueprintControlledObjective* InObjective, float InAmount);
    
    UFUNCTION(BlueprintCallable)
    void RecordExpeniteSpawned(UBXEBlueprintControlledObjective* InObjective, float InAmount);
    
    UFUNCTION(BlueprintCallable)
    void RecordExpeniteReceived(UBXEBlueprintControlledObjective* InObjective, float InAmount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBXEBlueprintControlledObjective* FindObjectiveFromActor(const AActor* InObjectiveActor) const;
    
};

