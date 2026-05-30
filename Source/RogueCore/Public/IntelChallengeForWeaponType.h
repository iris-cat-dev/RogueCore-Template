#pragma once
#include "CoreMinimal.h"
#include "IntelChallenge.h"
#include "IntelChallengeForWeaponType.generated.h"

class UBXEUnlockBase;

UCLASS(Abstract, Blueprintable)
class UIntelChallengeForWeaponType : public UIntelChallenge {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequiredAmount;
    
public:
    UIntelChallengeForWeaponType();

private:
    UFUNCTION(BlueprintCallable)
    void OnLevelUp(const int32 Level, const TArray<UBXEUnlockBase*>& Unlocks);
    
};

