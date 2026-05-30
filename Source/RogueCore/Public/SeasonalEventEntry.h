#pragma once
#include "CoreMinimal.h"
#include "SeasonalEventEntry.generated.h"

class UMutator;
class USpecialEvent;
class UStageTemplate;

USTRUCT(BlueprintType)
struct FSeasonalEventEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USpecialEvent* SpecialEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UStageTemplate*> BannedMissions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMutator*> BannedMutators;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequiredMainCampaignProgress;
    
    ROGUECORE_API FSeasonalEventEntry();
};

