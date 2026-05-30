#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "AchievementValueType.h"
#include "AchievementValueHelper.generated.h"

UCLASS(Blueprintable)
class ROGUECOREONLINESERVICES_API UAchievementValueHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAchievementValueHelper();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FAchievementValueType CreateInstantUnlock();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FAchievementValueType CreateIncrementValue(float IncrementValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FAchievementValueType CreateHighScoreValue(float HighScoreValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FAchievementValueType CreateForceValue(float ForceValue);
    
};

