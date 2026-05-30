#pragma once
#include "CoreMinimal.h"
#include "InventoryId.generated.h"

USTRUCT(BlueprintType)
struct FInventoryId {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsSelectable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    ROGUECORE_API FInventoryId();
};

