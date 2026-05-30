#pragma once
#include "CoreMinimal.h"
#include "SpawnLogSection.h"
#include "SpawnLog.generated.h"

USTRUCT(BlueprintType)
struct FSpawnLog {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpawnLogSection> LogSections;
    
    ROGUECORE_API FSpawnLog();
};

