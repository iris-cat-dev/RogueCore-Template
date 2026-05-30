#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "PerkEffect.generated.h"

class APlayerCharacter;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UPerkEffect : public UDataAsset {
    GENERATED_BODY()
public:
    UPerkEffect();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_ActivatePerk(APlayerCharacter* Character, float Value);
    
};

