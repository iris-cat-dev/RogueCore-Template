#pragma once
#include "CoreMinimal.h"
#include "EDamageMethod.h"
#include "EDamageUpgrade.h"
#include "StandardItemUpgrade.h"
#include "Templates/SubclassOf.h"
#include "UpgradeValues.h"
#include "DamageUpgrade.generated.h"

class AActor;
class AFSDPlayerState;
class UDamageAsset;
class UDamageClass;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UDamageUpgrade : public UStandardItemUpgrade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDamageUpgrade upgradeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDamageClass* DamageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDamageMethod DamageMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> RequiredClass;
    
public:
    UDamageUpgrade();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUpgradeValues GetUpgradedValue(const TSubclassOf<AActor> Item, const TSubclassOf<AActor> upgradedItem, AFSDPlayerState* Player, const EDamageUpgrade NewUpgradeType, const UDamageAsset* DamageAsset, const UDamageClass* NewDamageType, const EDamageMethod NewDamageMethod);
    
};

