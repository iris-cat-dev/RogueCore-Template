#pragma once
#include "CoreMinimal.h"
#include "IntelChallenge.h"
#include "IntelChallengeForStat.generated.h"

class UMissionStat;
class UObject;
class UPlanetZone;

UCLASS(Abstract, Blueprintable)
class UIntelChallengeForStat : public UIntelChallenge {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMissionStat* RequiredStat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMissionStat*> ExtraStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequiredAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlanetZone* RequiredZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RequireMutator;
    
public:
    UIntelChallengeForStat();

private:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    void OnStatUpdated(UObject* WorldContext, UMissionStat* ChangedStat, float Value, float change);
    
};

