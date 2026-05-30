#pragma once
#include "CoreMinimal.h"
#include "PlayerInfrontState.generated.h"

class APlayerCharacter;

USTRUCT(BlueprintType)
struct FPlayerInfrontState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APlayerCharacter> Player;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool inFront;
    
    ROGUECORE_API FPlayerInfrontState();
};

