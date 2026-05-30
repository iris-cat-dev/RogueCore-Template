#pragma once
#include "CoreMinimal.h"
#include "MissionTemplateItem.generated.h"

class UStageTemplate;

USTRUCT(BlueprintType)
struct FMissionTemplateItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStageTemplate* Template;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Rarity;
    
public:
    ROGUECORE_API FMissionTemplateItem();
};

