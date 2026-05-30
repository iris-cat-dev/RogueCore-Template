#pragma once
#include "CoreMinimal.h"
#include "DamageBonusBase.h"
#include "StaggerChanceBonus.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UStaggerChanceBonus : public UDamageBonusBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ChanceName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Chance;
    
    UStaggerChanceBonus();

};

