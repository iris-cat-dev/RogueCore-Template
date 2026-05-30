#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RuntimeFloatCurve -FallbackName=RuntimeFloatCurve
#include "HealthModifier.h"
#include "HealthCurveModifier.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UHealthCurveModifier : public UHealthModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve Curve;
    
    UHealthCurveModifier();

};

