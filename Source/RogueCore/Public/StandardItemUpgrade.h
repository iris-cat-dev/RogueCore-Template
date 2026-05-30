#pragma once
#include "CoreMinimal.h"
#include "EItemUpgradeNumberTransformType.h"
#include "ItemUpgrade.h"
#include "StandardItemUpgrade.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UStandardItemUpgrade : public UItemUpgrade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AmountName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Amount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EItemUpgradeNumberTransformType DisplayTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AlwaysRoundValueUp;
    
public:
    UStandardItemUpgrade();

};

