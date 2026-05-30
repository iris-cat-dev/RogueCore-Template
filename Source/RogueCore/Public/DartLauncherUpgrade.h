#pragma once
#include "CoreMinimal.h"
#include "AbilityUpgrade.h"
#include "EDartLauncherUpgradeType.h"
#include "DartLauncherUpgrade.generated.h"

class UItemUpgrade;

UCLASS(Blueprintable, EditInlineNew)
class UDartLauncherUpgrade : public UAbilityUpgrade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UItemUpgrade*> ProjectileUpgrades;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EDartLauncherUpgradeType Type;
    
public:
    UDartLauncherUpgrade();

};

