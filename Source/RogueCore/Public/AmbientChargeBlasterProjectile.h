#pragma once
#include "CoreMinimal.h"
#include "Projectile.h"
#include "AmbientChargeBlasterProjectile.generated.h"

class UDamageAsset;

UCLASS(Blueprintable)
class ROGUECORE_API AAmbientChargeBlasterProjectile : public AProjectile {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDamageAsset* DamageAsset;
    
public:
    AAmbientChargeBlasterProjectile(const FObjectInitializer& ObjectInitializer);

};

