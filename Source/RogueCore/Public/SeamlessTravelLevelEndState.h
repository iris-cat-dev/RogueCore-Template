#pragma once
#include "CoreMinimal.h"
#include "SeamlessTravelLevelEndState.generated.h"

USTRUCT(BlueprintType)
struct FSeamlessTravelLevelEndState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasLevelEnded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsMissionSuccess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsMissionAborted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsTutorialMission;
    
    ROGUECORE_API FSeamlessTravelLevelEndState();
};

