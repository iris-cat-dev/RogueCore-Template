#pragma once
#include "CoreMinimal.h"
#include "ReadyUpParticipant.generated.h"

class AFSDPlayerState;

USTRUCT(BlueprintType)
struct FReadyUpParticipant {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AFSDPlayerState> PlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsReady;
    
    ROGUECORE_API FReadyUpParticipant();
};

