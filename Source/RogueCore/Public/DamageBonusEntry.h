#pragma once
#include "CoreMinimal.h"
#include "DamageBonusEntry.generated.h"

class UDamageBonusBase;

USTRUCT(BlueprintType)
struct FDamageBonusEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDamageBonusBase* Bonus;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Rank;
    
    ROGUECORE_API FDamageBonusEntry();
};

