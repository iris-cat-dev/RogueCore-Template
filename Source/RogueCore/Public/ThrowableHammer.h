#pragma once
#include "CoreMinimal.h"
#include "ChargedWeapon.h"
#include "ThrowableHammer.generated.h"

class AHammerProjectile;
class URecallableProjectileComponent;

UCLASS(Blueprintable)
class AThrowableHammer : public AChargedWeapon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHammerProjectile* ThrownHammer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HoldingUse;
    
public:
    AThrowableHammer(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetThrownHammerProjectile(AHammerProjectile* Projectile);
    
    UFUNCTION(BlueprintCallable)
    void CollectRecallable(URecallableProjectileComponent* RecallComponent);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_CollectRecallable(URecallableProjectileComponent* RecallComponent);
    
};

