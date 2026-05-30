#pragma once
#include "CoreMinimal.h"
#include "InterpolatedCursorPosition.h"
#include "CursorInterpolator.generated.h"

class AFSDPlayerState;

USTRUCT(BlueprintType)
struct FCursorInterpolator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<AFSDPlayerState*, FInterpolatedCursorPosition> CursorPositions;
    
public:
    ROGUECORE_API FCursorInterpolator();
};

