#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstance -FallbackName=AnimInstance
#include "ECoreCrusherState.h"
#include "CoreCrusherAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class ROGUECORE_API UCoreCrusherAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ECoreCrusherState CoreCrusherState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float BootingTimeLeft;
    
    UCoreCrusherAnimInstance();

};

