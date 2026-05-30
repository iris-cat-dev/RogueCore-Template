#pragma once
#include "CoreMinimal.h"
#include "TXWaveStart.generated.h"

USTRUCT(BlueprintType)
struct FTXWaveStart {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString wave_type;
    
    ROGUECORE_API FTXWaveStart();
};

