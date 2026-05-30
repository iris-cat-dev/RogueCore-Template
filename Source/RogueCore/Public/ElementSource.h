#pragma once
#include "CoreMinimal.h"
#include "EElementSourceIntensity.h"
#include "ElementSource.generated.h"

USTRUCT(BlueprintType)
struct FElementSource {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EElementSourceIntensity Intensity;
    
    ROGUECORE_API FElementSource();
};

