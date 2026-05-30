#pragma once
#include "CoreMinimal.h"
#include "SpiderAnimInstance.h"
#include "BoomerAnimInstance.generated.h"

class UBallisticMovementComponent;

UCLASS(Blueprintable, NonTransient)
class ROGUECORE_API UBoomerAnimInstance : public USpiderAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UBallisticMovementComponent> BallisticMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsJumping;
    
    UBoomerAnimInstance();

};

