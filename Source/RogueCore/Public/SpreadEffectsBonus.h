#pragma once
#include "CoreMinimal.h"
#include "DamageBonusBase.h"
#include "Templates/SubclassOf.h"
#include "SpreadEffectsBonus.generated.h"

class UStatusEffect;

UCLASS(Blueprintable, EditInlineNew)
class USpreadEffectsBonus : public UDamageBonusBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UStatusEffect>> StatusEffectsToSpread;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RadiusName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    USpreadEffectsBonus();

};

