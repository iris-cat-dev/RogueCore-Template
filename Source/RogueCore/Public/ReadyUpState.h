#pragma once
#include "CoreMinimal.h"
#include "EReadyUpStage.h"
#include "ReadyUpParticipant.h"
#include "ReadyUpState.generated.h"

USTRUCT(BlueprintType)
struct FReadyUpState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EReadyUpStage Stage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FReadyUpParticipant> Participants;
    
    ROGUECORE_API FReadyUpState();
};

