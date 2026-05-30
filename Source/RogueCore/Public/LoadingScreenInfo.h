#pragma once
#include "CoreMinimal.h"
#include "LoadingScreenInfo.generated.h"

class ULevelSequence;
class UWorld;

USTRUCT(BlueprintType)
struct FLoadingScreenInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> LevelSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> World;
    
    ROGUECORE_API FLoadingScreenInfo();
};

