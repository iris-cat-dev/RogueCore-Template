#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "AsyncLoadCompleteDelegateDelegate.h"
#include "StageLibrary.generated.h"

class UStage;

UCLASS(Blueprintable)
class ROGUECORE_API UStageLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UStageLibrary();

    UFUNCTION(BlueprintCallable)
    static void PreloadStageAssets(const UStage* Stage, const FAsyncLoadCompleteDelegate& OnLoadComplete);
    
};

