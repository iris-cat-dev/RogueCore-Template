#pragma once
#include "CoreMinimal.h"
#include "FSDPhysicalMaterial.h"
#include "MockPhysicalMaterial.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UMockPhysicalMaterial : public UFSDPhysicalMaterial {
    GENERATED_BODY()
public:
    UMockPhysicalMaterial();

};

