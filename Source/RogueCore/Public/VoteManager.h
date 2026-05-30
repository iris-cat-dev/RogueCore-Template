#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "DelegateDelegate.h"
#include "VoteData.h"
#include "VoteManager.generated.h"

class URunManager;
class UVoteOptionAction;
class UVoteOptionPool;

UCLASS(Blueprintable)
class ROGUECORE_API UVoteManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegate OnVoteDone;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URunManager* RunManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVoteData VoteData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UVoteOptionAction*> ExcludeVoteOption;
    
public:
    UVoteManager();

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContext"))
    void StartVote(UObject* WorldContext, UVoteOptionPool* InVotePool, int32 Seed);
    
};

