#pragma once
#include "CoreMinimal.h"
#include "EElementSourceIntensity.h"
#include "StatusEffectItem.h"
#include "ElementSourceStatusEffectItem.generated.h"

class UElementType;

UCLASS(Blueprintable, EditInlineNew)
class UElementSourceStatusEffectItem : public UStatusEffectItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UElementType* ElementType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EElementSourceIntensity Intensity;
    
public:
    UElementSourceStatusEffectItem();

};

