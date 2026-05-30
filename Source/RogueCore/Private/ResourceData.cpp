#include "ResourceData.h"

UResourceData::UResourceData() {
    this->Icon = nullptr;
    this->MinedMissionStat = nullptr;
    this->CappedResourceTypeOverride = nullptr;
    this->IsCraftingMaterial = false;
    this->IsTradable = true;
    this->ForceShowOnEndScreen = false;
    this->AffectedByMutators = true;
    this->IsGymCurrency = false;
    this->ScaleToMissionLength = true;
    this->ScaleToHazardLevel = true;
    this->ShowSeparatelyInEndScreen = false;
    this->IsWholeNumberResource = false;
    this->CreditValue = 0;
    this->XPValue = 1;
    this->SeasonXPMultiplier = -1.00f;
    this->ReclaimerPointsMultiplier = 0.00f;
}

float UResourceData::SetOwnedAmount(const UObject* WorldContextObject, float Amount) {
    return 0.0f;
}

float UResourceData::GetOwnedAmount(const UObject* WorldContextObject) const {
    return 0.0f;
}

bool UResourceData::GetIsTradableCraftingMaterial() const {
    return false;
}

float UResourceData::DeductOwnedAmount(const UObject* WorldContextObject, float Amount) {
    return 0.0f;
}

float UResourceData::AddOwnedAmount(const UObject* WorldContextObject, float Amount) {
    return 0.0f;
}


