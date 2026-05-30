#pragma once
#include "CoreMinimal.h"
#include "DamageBonusBase.h"
#include "RecoverAmmoBonus.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class URecoverAmmoBonus : public UDamageBonusBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Amount;
    
    URecoverAmmoBonus();

};

