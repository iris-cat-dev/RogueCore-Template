#pragma once
#include "CoreMinimal.h"
#include "BXEMissionStatRecord.h"
#include "BXEMissionStats.generated.h"

USTRUCT(BlueprintType)
struct FBXEMissionStats {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBXEMissionStatRecord> Records;
    
public:
    ROGUECORE_API FBXEMissionStats();
};

