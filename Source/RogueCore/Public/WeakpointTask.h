#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RichCurve -FallbackName=RichCurve
#include "WeakpointTask.generated.h"

USTRUCT(BlueprintType)
struct FWeakpointTask {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRichCurve GrowCurve;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRichCurve FadeCurve;
    
    ROGUECORE_API FWeakpointTask();
};

