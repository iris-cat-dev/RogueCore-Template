#pragma once
#include "CoreMinimal.h"
#include "DamageBonusBase.h"
#include "MockDamageBonus.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UMockDamageBonus : public UDamageBonusBase {
    GENERATED_BODY()
public:
    UMockDamageBonus();

};

