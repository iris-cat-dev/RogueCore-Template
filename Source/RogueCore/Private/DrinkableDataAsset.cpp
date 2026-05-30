#include "DrinkableDataAsset.h"

UDrinkableDataAsset::UDrinkableDataAsset() {
    this->DrinkablePrice = 50;
    this->Cost_Sets = -1;
    this->Cost_Reps = -1;
    this->IsSpecialBeer = false;
    this->AccessCondition = nullptr;
    this->RequiredPlayerRank = 0;
    this->ParticipatesInFreeBeerEvent = false;
    this->AlcoholStrength = EDrinkableAlcoholStrength::Regular;
    this->SpecialEdition = nullptr;
    this->RequiredDLC = nullptr;
    this->bPlayFireworks = false;
    this->StatConsumed = nullptr;
    this->StatRoundOrdered = nullptr;
    this->OrderShout = nullptr;
    this->OrderCheeringShout = nullptr;
    this->DrinkSaluteShout = nullptr;
    this->OmegaShout = nullptr;
    this->buff = nullptr;
    this->ExerciseQuests = nullptr;
    this->ExerciseDifficulty = EExerciseDifficulty::PickDifficulty;
    this->BeerCategory = 0;
}

void UDrinkableDataAsset::UnlockDrink(UFSDSaveGame* SaveGame) const {
}

bool UDrinkableDataAsset::TryUnlockSpecialDrinks(UObject* WorldContext) {
    return false;
}

bool UDrinkableDataAsset::TryUnlockDrink(UObject* WorldContext) {
    return false;
}

bool UDrinkableDataAsset::TryPurchaseDrink(UObject* WorldContext) {
    return false;
}

void UDrinkableDataAsset::OnRoundOrdered(APlayerCharacter* Character) {
}

bool UDrinkableDataAsset::MustBeUnlocked() const {
    return false;
}

bool UDrinkableDataAsset::IsUnLocked(UObject* WorldContext) const {
    return false;
}

bool UDrinkableDataAsset::IsDrinkFree(UObject* WorldContext) {
    return false;
}

bool UDrinkableDataAsset::HasSpecialEdition() const {
    return false;
}

UDrinkableDataAsset* UDrinkableDataAsset::GetSpecialEdition(UObject* WorldContext) {
    return NULL;
}

UTexture2D* UDrinkableDataAsset::GetDrinkableIcon() const {
    return NULL;
}

int32 UDrinkableDataAsset::GetCalorieCost() {
    return 0;
}

bool UDrinkableDataAsset::AreSpecialDrinksUnlocked(UObject* WorldContext) {
    return false;
}


