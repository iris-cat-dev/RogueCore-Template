#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstance -FallbackName=AnimInstance
#include "WallMouthAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UWallMouthAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsPuking;
    
public:
    UWallMouthAnimInstance();

    UFUNCTION(BlueprintCallable)
    void SetIsPuking(bool InIsPuking);
    
};

