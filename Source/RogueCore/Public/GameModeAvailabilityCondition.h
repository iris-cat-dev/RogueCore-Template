#pragma once
#include "CoreMinimal.h"
#include "BXEUnlockConditionBase.h"
#include "EGameModeAvailability.h"
#include "GameModeAvailabilityCondition.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UGameModeAvailabilityCondition : public UBXEUnlockConditionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGameModeAvailability GameModeAvailability;
    
public:
    UGameModeAvailabilityCondition();

};

