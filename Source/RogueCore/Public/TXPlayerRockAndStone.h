#pragma once
#include "CoreMinimal.h"
#include "TXPlayerRockAndStone.generated.h"

USTRUCT(BlueprintType)
struct FTXPlayerRockAndStone {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString player_class;
    
    ROGUECORE_API FTXPlayerRockAndStone();
};

