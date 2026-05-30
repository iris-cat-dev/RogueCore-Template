#pragma once
#include "CoreMinimal.h"
#include "SimpleNameStrategy.h"
#include "ContainsNameStrategy.generated.h"

UCLASS(Blueprintable)
class ROGUECORE_API UContainsNameStrategy : public USimpleNameStrategy {
    GENERATED_BODY()
public:
    UContainsNameStrategy();

};

