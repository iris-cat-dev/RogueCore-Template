#pragma once
#include "CoreMinimal.h"
#include "SaveGameStageIndexes.generated.h"

USTRUCT(BlueprintType)
struct FSaveGameStageIndexes {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> StageIndexesDepth1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> StageIndexesDepth2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> StageIndexesDepth3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> StageIndexesDepth4;
    
    ROGUECORE_API FSaveGameStageIndexes();
};

