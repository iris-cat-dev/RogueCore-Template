#pragma once
#include "CoreMinimal.h"
#include "VoteOptionAction.h"
#include "WarningVoteOptionAction.generated.h"

class URiskVector;

UCLASS(Blueprintable, EditInlineNew)
class UWarningVoteOptionAction : public UVoteOptionAction {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URiskVector* RiskVector;
    
public:
    UWarningVoteOptionAction();

private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URiskVector* GetRiskVector() const;
    
};

