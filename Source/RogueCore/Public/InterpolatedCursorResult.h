#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "InterpolatedCursorResult.generated.h"

class AFSDPlayerState;

USTRUCT(BlueprintType)
struct FInterpolatedCursorResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFSDPlayerState* PlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D CursorPosition;
    
    ROGUECORE_API FInterpolatedCursorResult();
};

