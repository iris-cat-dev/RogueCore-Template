#pragma once
#include "CoreMinimal.h"
#include "IntelChallenge.h"
#include "IntelChallengePlayerMonitor.generated.h"

class APlayerCharacter;

UCLASS(Abstract, Blueprintable)
class UIntelChallengePlayerMonitor : public UIntelChallenge {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<APlayerCharacter*> RegisteredPlayers;
    
public:
    UIntelChallengePlayerMonitor();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnPlayerUnregistered(APlayerCharacter* Player);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnPlayerRegistered(APlayerCharacter* Player);
    
};

