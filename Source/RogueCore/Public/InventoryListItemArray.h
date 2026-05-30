#pragma once
#include "CoreMinimal.h"
#include "InventoryListItemArray.generated.h"

class UItemID;

USTRUCT(BlueprintType)
struct FInventoryListItemArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UItemID*> Items;
    
    ROGUECORE_API FInventoryListItemArray();
};

