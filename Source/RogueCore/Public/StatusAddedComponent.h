#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "StatusAddedComponent.generated.h"

class AActor;
class UStatusEffect;

UINTERFACE(Blueprintable, MinimalAPI)
class UStatusAddedComponent : public UInterface {
    GENERATED_BODY()
};

class IStatusAddedComponent : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitializeEffect(UStatusEffect* effect, AActor* EffectOwner);
    
};

