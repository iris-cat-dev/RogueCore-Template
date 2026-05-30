#pragma once
#include "CoreMinimal.h"
#include "AchievementValueType.h"
#include "UserDependentSubSystem.h"
#include "AchievementSubsystem.generated.h"

class UAchievementAsset;
class UObject;

UCLASS(Blueprintable)
class UAchievementSubsystem : public UUserDependentSubSystem {
    GENERATED_BODY()
public:
    UAchievementSubsystem();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void SetAchievementValue(UAchievementAsset* achievementToProgress, const FAchievementValueType& Value, UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void ResetStatForAchievement(UAchievementAsset* AchievementToReset, UObject* WorldContext);
    
};

