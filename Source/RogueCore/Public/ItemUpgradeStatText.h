#pragma once
#include "CoreMinimal.h"
#include "ItemUpgradeStatText.generated.h"

USTRUCT(BlueprintType)
struct FItemUpgradeStatText {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText StatText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsAdventageous;
    
    ROGUECORE_API FItemUpgradeStatText();
};

