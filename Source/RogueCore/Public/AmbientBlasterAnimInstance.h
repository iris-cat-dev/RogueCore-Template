#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstance -FallbackName=AnimInstance
#include "AmbientBlasterAnimInstance.generated.h"

class APlayerCharacter;
class UNiagaraComponent;
class UNiagaraSystem;

UCLASS(Blueprintable, NonTransient)
class UAmbientBlasterAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* RechargeParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RechargeParticleSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* SpawnedRechargeParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APlayerCharacter* Character;
    
public:
    UAmbientBlasterAnimInstance();

    UFUNCTION(BlueprintCallable)
    void SpawnRechargeParticle();
    
    UFUNCTION(BlueprintCallable)
    void DestroyRechargeParticle();
    
};

