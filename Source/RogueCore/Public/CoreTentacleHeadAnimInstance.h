#pragma once
#include "CoreMinimal.h"
#include "EnemyAnimInstance.h"
#include "CoreTentacleHeadAnimInstance.generated.h"

UCLASS(Abstract, Blueprintable, NonTransient)
class UCoreTentacleHeadAnimInstance : public UEnemyAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool Searching;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool MeleeAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool RangedAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool GrabAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool GrabShake;
    
public:
    UCoreTentacleHeadAnimInstance();

};

