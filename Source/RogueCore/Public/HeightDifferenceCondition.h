#pragma once
#include "CoreMinimal.h"
#include "DamageCondition.h"
#include "EHeightDiffrenceTargetingMode.h"
#include "HeightDifferenceCondition.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UHeightDifferenceCondition : public UDamageCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TargetDifferenceName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetDifference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHeightDiffrenceTargetingMode Mode;
    
    UHeightDifferenceCondition();

};

