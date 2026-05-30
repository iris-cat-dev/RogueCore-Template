#pragma once
#include "CoreMinimal.h"
#include "AfflictionEffect.h"
#include "CameraParticleAfflictionEffect.generated.h"

class UNiagaraSystem;

UCLASS(Blueprintable)
class UCameraParticleAfflictionEffect : public UAfflictionEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* ParticleEffect;
    
public:
    UCameraParticleAfflictionEffect();

};

