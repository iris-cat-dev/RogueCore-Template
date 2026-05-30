#pragma once
#include "CoreMinimal.h"
#include "PerkEffectComponent.h"
#include "PerkEffectComponentBerserk.generated.h"

class UPawnStat;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPerkEffectComponentBerserk : public UPerkEffectComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPawnStat* BoostedStat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AmountPerValue;
    
public:
    UPerkEffectComponentBerserk(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnHealthChanged(float Health);
    
};

