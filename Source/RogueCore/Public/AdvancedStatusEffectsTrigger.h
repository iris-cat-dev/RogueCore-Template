#pragma once
#include "CoreMinimal.h"
#include "EffectState.h"
#include "StatusEffectTriggerComponent.h"
#include "AdvancedStatusEffectsTrigger.generated.h"

class UEffectTriggerCondition;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UAdvancedStatusEffectsTrigger : public UStatusEffectTriggerComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UEffectTriggerCondition*> Conditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FEffectState> Inside;
    
public:
    UAdvancedStatusEffectsTrigger(const FObjectInitializer& ObjectInitializer);

};

