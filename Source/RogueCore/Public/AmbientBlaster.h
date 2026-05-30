#pragma once
#include "CoreMinimal.h"
#include "ProjectileWeapon.h"
#include "AmbientBlaster.generated.h"

UCLASS(Blueprintable)
class AAmbientBlaster : public AProjectileWeapon {
    GENERATED_BODY()
public:
    AAmbientBlaster(const FObjectInitializer& ObjectInitializer);

};

