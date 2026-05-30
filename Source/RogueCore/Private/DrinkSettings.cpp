#include "DrinkSettings.h"

UDrinkSettings::UDrinkSettings() {
}

TArray<FName> UDrinkSettings::GetBeerCategoryNames(UObject* WorldContext) {
    return TArray<FName>();
}

TArray<UDrinkableDataAsset*> UDrinkSettings::GetBarDrinkables(UObject* WorldContext, bool IncludeDailySpecial, bool includeNotUnlocked, bool includePlayerRankTooLow) {
    return TArray<UDrinkableDataAsset*>();
}

UDrinkableDataAsset* UDrinkSettings::GetBarDailySpecial(UObject* WorldContext, UDrinkableDataAsset* currentDailySpecial) {
    return NULL;
}


