#pragma once
#include "CoreMinimal.h"
#include "TXPlayerUnlock.generated.h"

USTRUCT(BlueprintType)
struct FTXPlayerUnlock {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Rarity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Type;
    
    ROGUECORE_API FTXPlayerUnlock();
};

