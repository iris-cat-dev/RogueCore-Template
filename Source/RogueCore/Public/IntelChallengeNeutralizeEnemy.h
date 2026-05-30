#pragma once
#include "CoreMinimal.h"
#include "IntelChallenge.h"
#include "IntelChallengeNeutralizeEnemy.generated.h"

class UEnemyID;

UCLASS(Abstract, Blueprintable)
class UIntelChallengeNeutralizeEnemy : public UIntelChallenge {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnemyID* RequiredEnemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequiredAmount;
    
public:
    UIntelChallengeNeutralizeEnemy();

};

