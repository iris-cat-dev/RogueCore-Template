#pragma once
#include "CoreMinimal.h"
#include "EStatusEffectPopSetting.h"
#include "StatChangeStatusEffectItem.h"
#include "DynamicStatChangeStatusEffectItem.generated.h"

class UDynamicStatChangeStatusEffectItem;
class UObject;
class UPawnStat;
class UStatusEffect;

UCLASS(Blueprintable, EditInlineNew)
class UDynamicStatChangeStatusEffectItem : public UStatChangeStatusEffectItem {
    GENERATED_BODY()
public:
    UDynamicStatChangeStatusEffectItem();

    UFUNCTION(BlueprintCallable)
    static UStatusEffect* CreateDynamicStatSTE(UObject* Owner, UPawnStat* PawnStat, float StartingValue, UDynamicStatChangeStatusEffectItem*& outSTEItem, const EStatusEffectPopSetting PopSetting);
    
};

