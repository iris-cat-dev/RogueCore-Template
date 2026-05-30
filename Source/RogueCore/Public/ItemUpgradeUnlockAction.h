#pragma once
#include "CoreMinimal.h"
#include "BXEAttributeUnlockAction.h"
#include "ItemUpgradeUnlockAction.generated.h"

class UItemUpgrade;

UCLASS(Blueprintable, EditInlineNew)
class UItemUpgradeUnlockAction : public UBXEAttributeUnlockAction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UItemUpgrade> Attribute;
    
public:
    UItemUpgradeUnlockAction();

};

