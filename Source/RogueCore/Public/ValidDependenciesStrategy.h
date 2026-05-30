#pragma once
#include "CoreMinimal.h"
#include "ValidatorStrategy.h"
#include "ValidDependenciesStrategy.generated.h"

UCLASS(Blueprintable)
class ROGUECORE_API UValidDependenciesStrategy : public UValidatorStrategy {
    GENERATED_BODY()
public:
    UValidDependenciesStrategy();

};

