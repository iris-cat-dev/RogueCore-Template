#pragma once
#include "CoreMinimal.h"
#include "IntelChallenge.h"
#include "IntelChallengeForResource.generated.h"

class UCappedResource;
class UPlanetZone;
class UResourceData;

UCLASS(Abstract, Blueprintable)
class UIntelChallengeForResource : public UIntelChallenge {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UResourceData* RequiredResource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequiredAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlanetZone* RequiredZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RequireMutator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AllowCollectionOverMultipleRuns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanTeammatesDeposit;
    
public:
    UIntelChallengeForResource();

private:
    UFUNCTION(BlueprintCallable)
    void OnResourceIncreased(UCappedResource* Resource, const float ChangeAmount);
    
    UFUNCTION(BlueprintCallable)
    void OnResourceDeposited(UResourceData* Resource, const float change);
    
};

