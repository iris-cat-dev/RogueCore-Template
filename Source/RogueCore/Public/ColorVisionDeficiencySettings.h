#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=EColorVisionDeficiency -FallbackName=EColorVisionDeficiency
#include "ColorVisionDeficiencySettings.generated.h"

USTRUCT(BlueprintType)
struct FColorVisionDeficiencySettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EColorVisionDeficiency Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Severity;
    
    ROGUECORE_API FColorVisionDeficiencySettings();
};

