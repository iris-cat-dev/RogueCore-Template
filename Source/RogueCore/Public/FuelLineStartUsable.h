#pragma once
#include "CoreMinimal.h"
#include "TrackBuilderUsable.h"
#include "FuelLineStartUsable.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECORE_API UFuelLineStartUsable : public UTrackBuilderUsable {
    GENERATED_BODY()
public:
    UFuelLineStartUsable(const FObjectInitializer& ObjectInitializer);

};

