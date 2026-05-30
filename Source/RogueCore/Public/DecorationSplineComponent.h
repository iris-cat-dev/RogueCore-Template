#pragma once
#include "CoreMinimal.h"
#include "Components/SplineComponent.h"
#include "DecorationSplineComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UDecorationSplineComponent : public USplineComponent {
    GENERATED_BODY()
public:
    UDecorationSplineComponent(const FObjectInitializer& ObjectInitializer);

};

