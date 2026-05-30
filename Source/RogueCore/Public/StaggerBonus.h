#pragma once
#include "CoreMinimal.h"
#include "DamageBonusBase.h"
#include "StaggerBonus.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UStaggerBonus : public UDamageBonusBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float duration;
    
    UStaggerBonus();

};

