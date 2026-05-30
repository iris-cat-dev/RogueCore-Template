#pragma once
#include "CoreMinimal.h"
#include "EMissionControlID.h"
#include "MissionShoutQueueItem.generated.h"

class USoundBase;

USTRUCT(BlueprintType)
struct FMissionShoutQueueItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundBase> AudioPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* LoadedAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMissionControlID ControllerId;
    
    ROGUECORE_API FMissionShoutQueueItem();
};

