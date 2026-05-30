#pragma once
#include "CoreMinimal.h"
#include "BXEUnlockAction.h"
#include "BXEAmmoUpgradeAction.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UBXEAmmoUpgradeAction : public UBXEUnlockAction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AmmoModifier;
    
public:
    UBXEAmmoUpgradeAction();

};

