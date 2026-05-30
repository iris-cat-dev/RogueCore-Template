#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "QuestObjective.h"
#include "QuestMiniHUD.generated.h"

class UResourceData;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class UQuestMiniHUD : public UUserWidget {
    GENERATED_BODY()
public:
    UQuestMiniHUD();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateObjective(UResourceData* Objective, int32 CurrentSet);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateCalories(int32 Calories);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetObjective(const TArray<FQuestObjective>& Objectives, UTexture2D* DrinkIcon, bool Quest);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCalorieGoal(int32 Calories);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RemoveQuest();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RemoveDrink();
    
};

