#pragma once
#include "CoreMinimal.h"
#include "AmmoDrivenWeapon.h"
#include "ProjectileWeapon.generated.h"

class UProjectileLauncherComponent;

UCLASS(Blueprintable)
class AProjectileWeapon : public AAmmoDrivenWeapon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProjectileLauncherComponent* LauncherComponent;
    
public:
    AProjectileWeapon(const FObjectInitializer& ObjectInitializer);

};

