#pragma once
#include "CoreMinimal.h"
#include "EscortHammerMovementSetup.generated.h"

USTRUCT(BlueprintType)
struct FEscortHammerMovementSetup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetLocationPerc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Acceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PathfinderCollisionEnabled;
    
    ROGUECORE_API FEscortHammerMovementSetup();
};

