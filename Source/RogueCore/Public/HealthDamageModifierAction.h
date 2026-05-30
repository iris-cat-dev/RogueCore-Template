#pragma once
#include "CoreMinimal.h"
#include "BXEUnlockAction.h"
#include "HealthDamageModifierAction.generated.h"

class UHealthModifier;

UCLASS(Blueprintable, EditInlineNew)
class UHealthDamageModifierAction : public UBXEUnlockAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHealthModifier* Modifier;
    
    UHealthDamageModifierAction();

};

