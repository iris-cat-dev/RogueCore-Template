#pragma once
#include "CoreMinimal.h"
#include "ItemSlotArgs.generated.h"

class UItemID;

USTRUCT(BlueprintType)
struct FItemSlotArgs {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemID* ItemID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsRestoringState;
    
    ROGUECORE_API FItemSlotArgs();
};

