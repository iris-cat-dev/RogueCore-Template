#pragma once
#include "CoreMinimal.h"
#include "ClipBasedItemAggregator.h"
#include "GrenadeCountAggregator.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECORE_API UGrenadeCountAggregator : public UClipBasedItemAggregator {
    GENERATED_BODY()
public:
    UGrenadeCountAggregator(const FObjectInitializer& ObjectInitializer);

};

