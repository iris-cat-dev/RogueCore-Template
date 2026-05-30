#pragma once
#include "CoreMinimal.h"
#include "EUnlockType.h"
#include "IntelChallenge.h"
#include "IntelChallengeForUpgrade.generated.h"

class UBXEUnlockBase;

UCLASS(Abstract, Blueprintable)
class UIntelChallengeForUpgrade : public UIntelChallenge {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUnlockType RequiredType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequiredAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AllowCollectionOverMultipleRuns;
    
public:
    UIntelChallengeForUpgrade();

private:
    UFUNCTION(BlueprintCallable)
    void OnLevelUp(const int32 Level, const TArray<UBXEUnlockBase*>& Unlocks);
    
};

