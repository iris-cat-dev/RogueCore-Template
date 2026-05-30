#include "BarQuestSubSystem.h"

UBarQuestSubSystem::UBarQuestSubSystem() {
}

void UBarQuestSubSystem::UpdateObjective(UResourceData* Objective, int32 CurrentSet) {
}

void UBarQuestSubSystem::UpdateCalories(int32 Calories) {
}

void UBarQuestSubSystem::SetObjective(const TArray<FQuestObjective>& Objectives, UTexture2D* DrinkIcon, bool Quest) {
}

void UBarQuestSubSystem::SetCalorieGoal(int32 Calories) {
}

void UBarQuestSubSystem::RemoveQuest() {
}

void UBarQuestSubSystem::RemoveDrink() {
}

TArray<UQuestMiniHUD*> UBarQuestSubSystem::GetQuestMiniHUD() const {
    return TArray<UQuestMiniHUD*>();
}

void UBarQuestSubSystem::AddQuestMiniHUD(UQuestMiniHUD* HUD) {
}


