#pragma once
#include "CoreMinimal.h"
#include "ItemUpgradeElement.h"
#include "MuzzleEffectUpgradeElement.generated.h"

class UNiagaraSystem;

UCLASS(Blueprintable, EditInlineNew)
class UMuzzleEffectUpgradeElement : public UItemUpgradeElement {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UNiagaraSystem> FPMuzzleFlash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UNiagaraSystem> TPMuzzleFlash;
    
public:
    UMuzzleEffectUpgradeElement();

};

