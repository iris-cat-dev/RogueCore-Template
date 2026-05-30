#pragma once
#include "CoreMinimal.h"
#include "CosmeticSheetNodeBoughtSave.h"
#include "PerClassUnlockSave.h"
#include "CosmeticSheetSave.generated.h"

USTRUCT(BlueprintType)
struct FCosmeticSheetSave {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FCosmeticSheetNodeBoughtSave> NodeBought;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FPerClassUnlockSave> PerClassUnlockedRewardsBought;
    
    ROGUECORE_API FCosmeticSheetSave();
};

