#pragma once
#include "CoreMinimal.h"
#include "IntelChallengePlayerMonitor.h"
#include "IntelChallengeUseAccessCondition.generated.h"

class UAccessCondition;
class UUsableComponentBase;

UCLASS(Abstract, Blueprintable)
class UIntelChallengeUseAccessCondition : public UIntelChallengePlayerMonitor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAccessCondition* RequiredAccess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequiredUseAmount;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TSet<UUsableComponentBase*> UsableComponentsUsedInThisLevel;
    
public:
    UIntelChallengeUseAccessCondition();

private:
    UFUNCTION(BlueprintCallable)
    void OnUsableTriggered(UUsableComponentBase* usable);
    
};

