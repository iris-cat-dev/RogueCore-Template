#pragma once
#include "CoreMinimal.h"
#include "ChargedWeapon.h"
#include "AmbientChargeBlaster.generated.h"

class UAnimMontage;
class UChargedProjectileLauncherComponent;
class UCurveFloat;
class UNiagaraSystem;

UCLASS(Blueprintable)
class AAmbientChargeBlaster : public AChargedWeapon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChargeProgressForOtherFireAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* OtherFireAnimFP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* OtherFireAnimTP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* ChargeRecoilCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* MuzzleParticlesWeak;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChargedProjectileLauncherComponent* LauncherComponent;
    
public:
    AAmbientChargeBlaster(const FObjectInitializer& ObjectInitializer);

};

