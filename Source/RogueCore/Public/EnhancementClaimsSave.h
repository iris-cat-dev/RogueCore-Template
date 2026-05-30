#pragma once
#include "CoreMinimal.h"
#include "EnhancementClaimEntry.h"
#include "EnhancementClaimsSave.generated.h"

USTRUCT(BlueprintType)
struct ROGUECORE_API FEnhancementClaimsSave {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEnhancementClaimEntry> EnhancementClaimEntries;
    
public:
    FEnhancementClaimsSave();
};

