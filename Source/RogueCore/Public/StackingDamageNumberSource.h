#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "EUpdateDamageNumberColor.h"
#include "StackingDamageNumberSource.generated.h"

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class UStackingDamageNumberSource : public UInterface {
    GENERATED_BODY()
};

class IStackingDamageNumberSource : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual float GetStackingTimeLimit() const PURE_VIRTUAL(GetStackingTimeLimit, return 0.0f;);
    
    UFUNCTION(BlueprintCallable)
    virtual int32 GetMaxCombinationsPerentry() const PURE_VIRTUAL(GetMaxCombinationsPerentry, return 0;);
    
    UFUNCTION(BlueprintCallable)
    virtual EUpdateDamageNumberColor GetColorBehaviour() const PURE_VIRTUAL(GetColorBehaviour, return EUpdateDamageNumberColor::ENormal;);
    
};

