#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstance -FallbackName=AnimInstance
#include "ExpeniteProcessingMachineAnimInstance.generated.h"

class UCurveVector;

UCLASS(Blueprintable, NonTransient)
class UExpeniteProcessingMachineAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExpenitePotZOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExpenitePotScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* ShrinkCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldStartShrinking;
    
public:
    UExpeniteProcessingMachineAnimInstance();

    UFUNCTION(BlueprintCallable)
    void SetMaxTime(const float Time);
    
};

