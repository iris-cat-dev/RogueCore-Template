#pragma once
#include "CoreMinimal.h"
#include "SeasonalEventEntryChance.generated.h"

class UMutator;
class USpecialEvent;
class UStageTemplate;

USTRUCT(BlueprintType)
struct FSeasonalEventEntryChance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USpecialEvent* SpecialEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UStageTemplate*> BannedMissions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMutator*> BannedMutators;
    
    ROGUECORE_API FSeasonalEventEntryChance();
};

