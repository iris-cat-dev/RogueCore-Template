#pragma once
#include "CoreMinimal.h"
#include "Projectile.h"
#include "DartLauncherProjectile.generated.h"

UCLASS(Blueprintable)
class ADartLauncherProjectile : public AProjectile {
    GENERATED_BODY()
public:
    ADartLauncherProjectile(const FObjectInitializer& ObjectInitializer);

};

