#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstance -FallbackName=AnimInstance
#include "ElevatorJunctionAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class ROGUECORE_API UElevatorJunctionAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UElevatorJunctionAnimInstance();

};

