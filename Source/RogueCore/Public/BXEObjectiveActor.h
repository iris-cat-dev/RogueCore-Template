#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "BXEObjectiveActor.generated.h"

class UBXEBlueprintControlledObjective;

UINTERFACE(Blueprintable)
class UBXEObjectiveActor : public UInterface {
    GENERATED_BODY()
};

class IBXEObjectiveActor : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SpawnedFromObjective(UBXEBlueprintControlledObjective* InObjective);
    
};

