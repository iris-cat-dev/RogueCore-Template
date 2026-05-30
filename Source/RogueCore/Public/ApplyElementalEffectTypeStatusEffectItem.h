#pragma once
#include "CoreMinimal.h"
#include "StatusEffectItem.h"
#include "ApplyElementalEffectTypeStatusEffectItem.generated.h"

class AItem;
class UElementType;

UCLASS(Blueprintable, EditInlineNew)
class UApplyElementalEffectTypeStatusEffectItem : public UStatusEffectItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UElementType* ElementalType;
    
public:
    UApplyElementalEffectTypeStatusEffectItem();

private:
    UFUNCTION(BlueprintCallable)
    void OnItemUnequipped(AItem* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnItemEquipped(AItem* Item);
    
};

