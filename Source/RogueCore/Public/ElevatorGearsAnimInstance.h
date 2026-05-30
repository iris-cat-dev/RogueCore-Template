#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstance -FallbackName=AnimInstance
#include "ElevatorGearsAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UElevatorGearsAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Velocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsMoving;
    
public:
    UElevatorGearsAnimInstance();

    UFUNCTION(BlueprintCallable)
    void SetIsMoving(bool Moving);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsMoving() const;
    
};

