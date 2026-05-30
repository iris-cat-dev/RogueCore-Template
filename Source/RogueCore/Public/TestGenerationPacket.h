#pragma once
#include "CoreMinimal.h"
#include "TestGenerationPacket.generated.h"

USTRUCT(BlueprintType)
struct FTestGenerationPacket {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> TerrainLogs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartIndexOffset;
    
    ROGUECORE_API FTestGenerationPacket();
};

