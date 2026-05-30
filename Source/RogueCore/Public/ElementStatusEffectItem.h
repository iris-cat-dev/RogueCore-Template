#pragma once
#include "CoreMinimal.h"
#include "ElementParams.h"
#include "RandRange.h"
#include "StatusEffectItem.h"
#include "ElementStatusEffectItem.generated.h"

class UElementType;

UCLASS(Blueprintable, EditInlineNew)
class UElementStatusEffectItem : public UStatusEffectItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UElementType* ElementType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRandRange ValueChangeAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FElementParams Params;
    
public:
    UElementStatusEffectItem();

};

