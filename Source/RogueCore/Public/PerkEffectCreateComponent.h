#pragma once
#include "CoreMinimal.h"
#include "PerkEffect.h"
#include "PerkEffectCreateComponent.generated.h"

class UPerkEffectComponent;

UCLASS(Blueprintable, EditInlineNew)
class UPerkEffectCreateComponent : public UPerkEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UPerkEffectComponent> ComponentClass;
    
public:
    UPerkEffectCreateComponent();

};

