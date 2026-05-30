#pragma once
#include "CoreMinimal.h"
#include "AbilityUpgrade.h"
#include "TimeRewindEndStoneSkinUpgrade.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UTimeRewindEndStoneSkinUpgrade : public UAbilityUpgrade {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StoneSkinAmountName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StoneSkinAmount;
    
    UTimeRewindEndStoneSkinUpgrade();

};

