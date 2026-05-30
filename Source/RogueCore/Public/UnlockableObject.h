#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "EUnlockableState.h"
#include "UnlockableObject.generated.h"

class UObject;

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class UUnlockableObject : public UInterface {
    GENERATED_BODY()
};

class IUnlockableObject : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    virtual bool Unlock(const UObject* WorldContext) PURE_VIRTUAL(Unlock, return false;);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    virtual TEnumAsByte<EUnlockableState> GetUnlockableState(const UObject* WorldContext) const PURE_VIRTUAL(GetUnlockableState, return Unlockable;);
    
};

