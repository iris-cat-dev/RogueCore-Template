#pragma once
#include "CoreMinimal.h"
#include "AbilityItemAnimInstance.h"
#include "GuardianGloveAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UGuardianGloveAnimInstance : public UAbilityItemAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsAuraActive;
    
    UGuardianGloveAnimInstance();

};

