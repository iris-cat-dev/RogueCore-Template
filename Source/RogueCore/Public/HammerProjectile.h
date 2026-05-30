#pragma once
#include "CoreMinimal.h"
#include "Projectile.h"
#include "HammerProjectile.generated.h"

UCLASS(Blueprintable)
class AHammerProjectile : public AProjectile {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Returning;
    
public:
    AHammerProjectile(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StartReturnToPlayer();
    
};

