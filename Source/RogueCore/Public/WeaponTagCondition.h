#pragma once
#include "CoreMinimal.h"
#include "DamageCondition.h"
#include "ETagConditionType.h"
#include "WeaponTagCondition.generated.h"

class UWeaponTagBase;

UCLASS(Blueprintable, EditInlineNew)
class UWeaponTagCondition : public UDamageCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UWeaponTagBase*> HasTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETagConditionType Type;
    
    UWeaponTagCondition();

};

