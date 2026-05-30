#pragma once
#include "CoreMinimal.h"
#include "BXEMissionStatContext.h"
#include "OpsComTaskAsset.h"
#include "BXEChallenge.generated.h"

class UObject;

UCLASS(Blueprintable)
class ROGUECORE_API UBXEChallenge : public UOpsComTaskAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBXEMissionStatContext Context;
    
public:
    UBXEChallenge();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    bool IsChallengeCompleted(const UObject* WorldContext) const;
    
};

