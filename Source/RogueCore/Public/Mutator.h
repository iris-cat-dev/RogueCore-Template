#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Mutator.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ROGUECORE_API UMutator : public UDataAsset {
    GENERATED_BODY()
public:
    UMutator();

};

