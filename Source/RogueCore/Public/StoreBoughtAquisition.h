#pragma once
#include "CoreMinimal.h"
#include "AquisitionBase.h"
#include "StoreBoughtAquisition.generated.h"

class UResourceData;

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API UStoreBoughtAquisition : public UAquisitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UResourceData*, float> ResourceCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequiredPlayerRank;
    
public:
    UStoreBoughtAquisition();

};

