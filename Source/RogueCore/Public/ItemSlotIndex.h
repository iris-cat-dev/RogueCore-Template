#pragma once
#include "CoreMinimal.h"
#include "ItemSlotIndex.generated.h"

USTRUCT(BlueprintType)
struct FItemSlotIndex {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SlotIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SlotSubIndex;
    
    ROGUECORE_API FItemSlotIndex();
};

