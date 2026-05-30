#include "BarSubSystem.h"

UBarSubSystem::UBarSubSystem() {
    this->Bartender = nullptr;
    this->Bound = false;
}

void UBarSubSystem::SetBartender(AOmegaBartender* aBartender) {
}

void UBarSubSystem::PlayerLoggedOut(AFSDPlayerState* PState) {
}

void UBarSubSystem::PlayerLoggedIn(AFSDPlayerController* Controller) {
}

void UBarSubSystem::LocalPlayerExitGymArea() {
}

void UBarSubSystem::LocalPlayerEnteredGymArea() {
}

bool UBarSubSystem::HasEnoughCurrency(const UObject* WorldContextObject, UResourceData* Currency, int32 Amount) {
    return false;
}

bool UBarSubSystem::HasCollectiveResource(const UObject* WorldContextObject, UResourceData* Data) {
    return false;
}

UResourceData* UBarSubSystem::GetGymCurrencyData(const UObject* WorldContextObject, int32 Index) {
    return NULL;
}

int32 UBarSubSystem::GetGymCurrencyAmount(const UObject* WorldContextObject, int32 Index) {
    return 0;
}

int32 UBarSubSystem::GetCollectiveResourceIndex(const UObject* WorldContextObject, UResourceData* Data) {
    return 0;
}

int32 UBarSubSystem::GetCalories(const UObject* WorldContextObject) {
    return 0;
}

float UBarSubSystem::GetBeerCost(const UObject* WorldContextObject, UDrinkableDataAsset* Drink) {
    return 0.0f;
}

AOmegaBartender* UBarSubSystem::GetBartender() const {
    return NULL;
}

TArray<UResourceData*> UBarSubSystem::GetAllGymCurrencyData(const UObject* WorldContextObject) {
    return TArray<UResourceData*>();
}

TArray<int32> UBarSubSystem::GetAllGymCurrencyAmount(const UObject* WorldContextObject) {
    return TArray<int32>();
}

float UBarSubSystem::GetAdjustedCostForPlayerCount(const UObject* WorldContextObject, const float baseCost) {
    return 0.0f;
}

void UBarSubSystem::AddInternalCurrency(const UObject* WorldContextObject, UResourceData* Data, int32 Amount) {
}

void UBarSubSystem::AddCurrency(const UObject* WorldContextObject, UResourceData* Currency, int32 Amount) {
}


