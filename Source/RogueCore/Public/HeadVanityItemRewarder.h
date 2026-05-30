#pragma once
#include "CoreMinimal.h"
#include "VanityItemRewarder.h"
#include "HeadVanityItemRewarder.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UHeadVanityItemRewarder : public UVanityItemRewarder {
    GENERATED_BODY()
public:
    UHeadVanityItemRewarder(const FObjectInitializer& ObjectInitializer);

};

