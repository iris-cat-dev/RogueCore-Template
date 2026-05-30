#pragma once
#include "CoreMinimal.h"
#include "CloudSaveMetadata.generated.h"

USTRUCT(BlueprintType)
struct FCloudSaveMetadata {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerRank;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 playtime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Timestamp;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 Generation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Version;
    
    ROGUECORE_API FCloudSaveMetadata();
};

