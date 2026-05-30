#pragma once
#include "CoreMinimal.h"
#include "DamageBonusBase.h"
#include "LevelBasedBonus.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ULevelBasedBonus : public UDamageBonusBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BonusPerLevel;
    
    ULevelBasedBonus();

};

