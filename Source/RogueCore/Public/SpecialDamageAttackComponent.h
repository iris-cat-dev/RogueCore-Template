#pragma once
#include "CoreMinimal.h"
#include "SpecialAttackComponent.h"
#include "SpecialDamageAttackComponent.generated.h"

class UDamageAsset;
class UDamageComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USpecialDamageAttackComponent : public USpecialAttackComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDamageAsset* AttackDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDamageComponent* Damage;
    
public:
    USpecialDamageAttackComponent(const FObjectInitializer& ObjectInitializer);

};

