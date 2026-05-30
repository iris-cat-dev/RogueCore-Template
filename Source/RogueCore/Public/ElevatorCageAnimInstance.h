#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstance -FallbackName=AnimInstance
#include "ElevatorCageAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UElevatorCageAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CageOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool NextCageOpen;
    
public:
    UElevatorCageAnimInstance();

    UFUNCTION(BlueprintCallable)
    void SetIsOpen(const bool Open);
    
};

