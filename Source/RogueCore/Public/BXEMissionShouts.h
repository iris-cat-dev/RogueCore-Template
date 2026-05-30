#pragma once
#include "CoreMinimal.h"
#include "BXEMissionShouts.generated.h"

class UDialogDataAsset;

USTRUCT(BlueprintType)
struct FBXEMissionShouts {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* FirstStageStarted;
    
    ROGUECORE_API FBXEMissionShouts();
};

