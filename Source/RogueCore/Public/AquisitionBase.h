#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "AquisitionBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ROGUECORE_API UAquisitionBase : public UDataAsset {
    GENERATED_BODY()
public:
    UAquisitionBase();

};

