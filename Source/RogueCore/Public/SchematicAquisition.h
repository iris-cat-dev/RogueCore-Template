#pragma once
#include "CoreMinimal.h"
#include "AquisitionBase.h"
#include "SchematicAquisition.generated.h"

class USchematic;
class USchematicPricingTier;
class USchematicRarity;

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API USchematicAquisition : public UAquisitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USchematicPricingTier* PricingTier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USchematicRarity* Rarity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USchematic*> Schematics;
    
public:
    USchematicAquisition();

};

