#pragma once
#include "CoreMinimal.h"
#include "GameActivityType.h"
#include "GameActivityMissionType.generated.h"

class UStageTemplate;

UCLASS(Blueprintable)
class UGameActivityMissionType : public UGameActivityType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStageTemplate> ActivityMission;
    
    UGameActivityMissionType();

};

