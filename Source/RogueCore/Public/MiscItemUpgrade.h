#pragma once
#include "CoreMinimal.h"
#include "EItemUpgradeNumberTransformType.h"
#include "StandardItemUpgrade.h"
#include "MiscItemUpgrade.generated.h"

class UMiscUpgradeKey;

UCLASS(Blueprintable, EditInlineNew)
class UMiscItemUpgrade : public UStandardItemUpgrade {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMiscUpgradeKey* Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ValueName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EItemUpgradeNumberTransformType ValueDisplayTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    UMiscItemUpgrade();

};

