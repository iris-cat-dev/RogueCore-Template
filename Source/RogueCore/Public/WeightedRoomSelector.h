#pragma once
#include "CoreMinimal.h"
#include "WeightedRoomSelectorItem.h"
#include "WeightedRoomSelector.generated.h"

USTRUCT(BlueprintType)
struct FWeightedRoomSelector {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FWeightedRoomSelectorItem> Items;
    
    ROGUECORE_API FWeightedRoomSelector();
};

