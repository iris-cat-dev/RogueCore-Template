#pragma once
#include "CoreMinimal.h"
#include "MissionStatCounter.h"
#include "MissionStatSave.generated.h"

USTRUCT(BlueprintType)
struct FMissionStatSave {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMissionStatCounter> Counters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCharacterLevelUpFixed;
    
public:
    ROGUECORE_API FMissionStatSave();
};

