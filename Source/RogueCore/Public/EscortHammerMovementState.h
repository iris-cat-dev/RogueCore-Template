#pragma once
#include "CoreMinimal.h"
#include "EscortHammerMovementState.generated.h"

USTRUCT(BlueprintType)
struct FEscortHammerMovementState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Velocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetVelocityMultiplier;
    
    ROGUECORE_API FEscortHammerMovementState();
};

