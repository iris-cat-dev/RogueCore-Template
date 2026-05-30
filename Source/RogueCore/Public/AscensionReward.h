#pragma once
#include "CoreMinimal.h"
#include "UnlockReward.h"
#include "AscensionReward.generated.h"

class UPlayerCharacterID;

UCLASS(Blueprintable, EditInlineNew)
class UAscensionReward : public UUnlockReward {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayerCharacterID* characterID;
    
public:
    UAscensionReward();

};

