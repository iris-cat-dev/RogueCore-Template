#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimaryDataAsset -FallbackName=PrimaryDataAsset
#include "VoteOptionPool.generated.h"

class UVoteOptionAction;

UCLASS(Blueprintable)
class UVoteOptionPool : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TSet<UVoteOptionAction*> VoteOptionActions;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool LockTelemetryIdentifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TelemetryIdentifier;
    
public:
    UVoteOptionPool();

protected:
    UFUNCTION(BlueprintCallable)
    TArray<UVoteOptionAction*> GetVoteOptionActions();
    
};

