#pragma once
#include "CoreMinimal.h"
#include "Objective.h"
#include "BXEObjective.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBXEObjective : public UObjective {
    GENERATED_BODY()
public:
    UBXEObjective(const FObjectInitializer& ObjectInitializer);

};

