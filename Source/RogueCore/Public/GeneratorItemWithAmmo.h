#pragma once
#include "CoreMinimal.h"
#include "ThrowableItem.h"
#include "UpgradableGear.h"
#include "GeneratorItemWithAmmo.generated.h"

class UCapacityHoldingItemAggregator;

UCLASS(Blueprintable)
class AGeneratorItemWithAmmo : public AThrowableItem, public IUpgradableGear {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapacityHoldingItemAggregator* HeldAmmoCapacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapacityHoldingItemAggregator* MaxAmmoCapacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SupplyStatusWeight;
    
public:
    AGeneratorItemWithAmmo(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

