#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "QuestObjective.h"
#include "BarQuestSubSystem.generated.h"

class UQuestMiniHUD;
class UResourceData;
class UTexture2D;

UCLASS(Blueprintable)
class UBarQuestSubSystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UBarQuestSubSystem();

    UFUNCTION(BlueprintCallable)
    void UpdateObjective(UResourceData* Objective, int32 CurrentSet);
    
    UFUNCTION(BlueprintCallable)
    void UpdateCalories(int32 Calories);
    
    UFUNCTION(BlueprintCallable)
    void SetObjective(const TArray<FQuestObjective>& Objectives, UTexture2D* DrinkIcon, bool Quest);
    
    UFUNCTION(BlueprintCallable)
    void SetCalorieGoal(int32 Calories);
    
    UFUNCTION(BlueprintCallable)
    void RemoveQuest();
    
    UFUNCTION(BlueprintCallable)
    void RemoveDrink();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UQuestMiniHUD*> GetQuestMiniHUD() const;
    
    UFUNCTION(BlueprintCallable)
    void AddQuestMiniHUD(UQuestMiniHUD* HUD);
    
};

