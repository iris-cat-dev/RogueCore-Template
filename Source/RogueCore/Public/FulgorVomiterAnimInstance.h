#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "EnemyAnimInstance.h"
#include "FulgorVomiterAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class ROGUECORE_API UFulgorVomiterAnimInstance : public UEnemyAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsExtended;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsAiming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D AimDirection;
    
    UFulgorVomiterAnimInstance();

};

