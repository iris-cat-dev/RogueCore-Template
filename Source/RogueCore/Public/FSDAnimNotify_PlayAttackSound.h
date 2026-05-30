#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify_PlaySound.h"
#include "Animation/AnimNotifies/AnimNotify_PlaySound.h"
#include "FSDAnimNotify_PlayAttackSound.generated.h"

class USoundAttenuation;

UCLASS(Blueprintable, CollapseCategories)
class UFSDAnimNotify_PlayAttackSound : public UAnimNotify_PlaySound {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAttenuation* LocalPlayerAttenuationOverride;
    
public:
    UFSDAnimNotify_PlayAttackSound();

};

