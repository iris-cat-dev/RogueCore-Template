#pragma once
#include "CoreMinimal.h"
#include "DamageBonusBase.h"
#include "StaggerDurationBonus.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UStaggerDurationBonus : public UDamageBonusBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float duration;
    
    UStaggerDurationBonus();

};

