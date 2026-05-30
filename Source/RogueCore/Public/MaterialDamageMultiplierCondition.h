#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatInterval -FallbackName=FloatInterval
#include "DamageCondition.h"
#include "MaterialDamageMultiplierCondition.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UMaterialDamageMultiplierCondition : public UDamageCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval MultiplierRangeRequired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Invert;
    
public:
    UMaterialDamageMultiplierCondition();

};

