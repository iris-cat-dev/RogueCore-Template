#pragma once
#include "CoreMinimal.h"
#include "AchievementValueType.generated.h"

USTRUCT(BlueprintType)
struct ROGUECOREONLINESERVICES_API FAchievementValueType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HighScoreValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IncrementValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldUnlock;
    
    FAchievementValueType();
};

