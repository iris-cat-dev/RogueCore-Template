#pragma once
#include "CoreMinimal.h"
#include "BXEUnlockAction.h"
#include "BXEHealAction.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UBXEHealAction : public UBXEUnlockAction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealPercent;
    
public:
    UBXEHealAction();

};

