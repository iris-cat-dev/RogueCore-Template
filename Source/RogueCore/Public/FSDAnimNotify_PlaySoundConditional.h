#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify_PlaySound.h"
#include "EAudioCharacterOverrideType.h"
#include "FSDAnimNotify_PlaySoundConditional.generated.h"

class USoundAttenuation;
class USoundClass;

UCLASS(Blueprintable, CollapseCategories)
class UFSDAnimNotify_PlaySoundConditional : public UAnimNotify_PlaySound {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAudioCharacterOverrideType OverrideType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAttenuation* OverrideAttenuation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundClass* OverrideSoundClass;
    
public:
    UFSDAnimNotify_PlaySoundConditional();

};

