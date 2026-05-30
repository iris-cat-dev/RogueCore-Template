#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "ButtonHoldSettings.h"
#include "ButtonHoldIndicatorAsset.generated.h"

UCLASS(Blueprintable)
class UButtonHoldIndicatorAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonHoldSettings Settings;
    
    UButtonHoldIndicatorAsset();

};

