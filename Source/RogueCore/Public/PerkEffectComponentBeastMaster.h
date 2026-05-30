#pragma once
#include "CoreMinimal.h"
#include "PerkEffectComponent.h"
#include "Templates/SubclassOf.h"
#include "PerkEffectComponentBeastMaster.generated.h"

class AFSDPawn;
class APlayerCharacter;
class UActorComponent;
class UDamageComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPerkEffectComponentBeastMaster : public UPerkEffectComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowCanCharmIcon;
    
    UPerkEffectComponentBeastMaster(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetDamage(UDamageComponent* cmp, float dmg);
    
    UFUNCTION(BlueprintCallable)
    static UActorComponent* AddPetComponent(TSubclassOf<UActorComponent> ComponentClass, AFSDPawn* targetPet, APlayerCharacter* petOwner);
    
};

