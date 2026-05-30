#pragma once
#include "CoreMinimal.h"
#include "ERunDepth.h"
#include "IntelChallengePlayerMonitor.h"
#include "IntelChallengeUseDataTerminal.generated.h"

class AActor;

UCLASS(Abstract, Blueprintable)
class UIntelChallengeUseDataTerminal : public UIntelChallengePlayerMonitor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequiredUseAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERunDepth RequiredRunDepth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RequireMutator;
    
public:
    UIntelChallengeUseDataTerminal();

private:
    UFUNCTION(BlueprintCallable)
    void OnActivatedTerminal(AActor* TerminalActor);
    
};

