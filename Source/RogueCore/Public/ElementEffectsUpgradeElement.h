#pragma once
#include "CoreMinimal.h"
#include "ItemUpgradeElement.h"
#include "ElementEffectsUpgradeElement.generated.h"

class UElementType;

UCLASS(Blueprintable, EditInlineNew)
class UElementEffectsUpgradeElement : public UItemUpgradeElement {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UElementType* ElementType;
    
public:
    UElementEffectsUpgradeElement();

};

