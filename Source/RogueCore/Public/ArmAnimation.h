#pragma once
#include "CoreMinimal.h"
#include "ArmAnimation.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FArmAnimation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Montage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Arm;
    
    ROGUECORE_API FArmAnimation();
};

