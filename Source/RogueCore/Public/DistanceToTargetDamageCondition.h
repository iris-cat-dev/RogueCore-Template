#pragma once
#include "CoreMinimal.h"
#include "DamageCondition.h"
#include "EDamageConditionDistanceMode.h"
#include "DistanceToTargetDamageCondition.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UDistanceToTargetDamageCondition : public UDamageCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MinimumDistanceName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MaxDistanceName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDamageConditionDistanceMode Mode;
    
public:
    UDistanceToTargetDamageCondition();

};

