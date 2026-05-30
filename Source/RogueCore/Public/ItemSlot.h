#pragma once
#include "CoreMinimal.h"
#include "InventoryId.h"
#include "ItemSlot.generated.h"

USTRUCT(BlueprintType)
struct FItemSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInventoryId> InventoryIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentIndex;
    
    ROGUECORE_API FItemSlot();
};

