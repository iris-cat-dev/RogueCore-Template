#pragma once
#include "CoreMinimal.h"
#include "TXWaveEnd.generated.h"

USTRUCT(BlueprintType)
struct FTXWaveEnd {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString wave_type;
    
    ROGUECORE_API FTXWaveEnd();
};

