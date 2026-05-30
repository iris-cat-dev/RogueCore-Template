#pragma once
#include "CoreMinimal.h"
#include "BXEDiveSaveData.generated.h"

USTRUCT(BlueprintType)
struct FBXEDiveSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsUnLocked;
    
    ROGUECORE_API FBXEDiveSaveData();
};

