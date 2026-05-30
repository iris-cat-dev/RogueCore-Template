#pragma once
#include "CoreMinimal.h"
#include "ERunDepth.h"
#include "IntelChallenge.h"
#include "IntelChallengeForBossSummon.generated.h"

class AActor;

UCLASS(Abstract, Blueprintable)
class UIntelChallengeForBossSummon : public UIntelChallenge {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<AActor>> AllowedBosses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequiredSummonAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERunDepth RequiredRunDepth;
    
public:
    UIntelChallengeForBossSummon();

private:
    UFUNCTION(BlueprintCallable)
    void OnBossSummoned(AActor* Boss);
    
};

