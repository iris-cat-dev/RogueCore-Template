#pragma once
#include "CoreMinimal.h"
#include "EUnlockRarityType.h"
#include "UnlockWithRarityIdentifier.generated.h"

class UBXEUnlockBase;

USTRUCT(BlueprintType)
struct FUnlockWithRarityIdentifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBXEUnlockBase* Unlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUnlockRarityType Rarity;
    
    ROGUECORE_API FUnlockWithRarityIdentifier();
};

