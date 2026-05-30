#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "ObjectiveActor.generated.h"

class UBXEBlueprintControlledObjective;

UINTERFACE(Blueprintable)
class UObjectiveActor : public UInterface {
    GENERATED_BODY()
};

class IObjectiveActor : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetObjective(UBXEBlueprintControlledObjective* Objective);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetExpenitePayout(float playout);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetExpenitePayout();
    
};

