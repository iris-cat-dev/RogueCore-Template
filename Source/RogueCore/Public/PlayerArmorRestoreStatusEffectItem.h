#pragma once
#include "CoreMinimal.h"
#include "RandRange.h"
#include "StatusEffectItem.h"
#include "PlayerArmorRestoreStatusEffectItem.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UPlayerArmorRestoreStatusEffectItem : public UStatusEffectItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRandRange ChangeAmount;
    
public:
    UPlayerArmorRestoreStatusEffectItem();

};

