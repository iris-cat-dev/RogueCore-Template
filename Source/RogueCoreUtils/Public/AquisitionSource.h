#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "GameplayTagContainer.h"
#include "AquisitionSource.generated.h"

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class UAquisitionSource : public UInterface {
    GENERATED_BODY()
};

class IAquisitionSource : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual FGameplayTag GetAquisitionSourceTag() const PURE_VIRTUAL(GetAquisitionSourceTag, return FGameplayTag{};);
    
};

