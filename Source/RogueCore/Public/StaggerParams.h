#pragma once
#include "CoreMinimal.h"
#include "StaggerParams.generated.h"

class APlayerCharacter;

USTRUCT(BlueprintType)
struct FStaggerParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IgnoreMultipliers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerCharacter* SourcePlayer;
    
    ROGUECORE_API FStaggerParams();
};

