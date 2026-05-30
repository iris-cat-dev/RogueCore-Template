#include "SchematicSettings.h"

USchematicSettings::USchematicSettings() {
    this->PricingTable = nullptr;
    this->BlankSchematic = nullptr;
    this->EndlessSchematics = nullptr;
    this->OverclockPricingTier = nullptr;
    this->VanityCatHeadWear = nullptr;
    this->VanityCatMoustache = nullptr;
    this->VanityCatBeard = nullptr;
    this->VanityCatArmor = nullptr;
    this->VanityCatEyebrow = nullptr;
    this->VanityCatHairColor = nullptr;
    this->VanityCatSideburn = nullptr;
    this->VanityCatSkinColor = nullptr;
    this->VanityCatVictoryPose = nullptr;
    this->WeaponPaintJob = nullptr;
    this->SchematicGATable = nullptr;
}

bool USchematicSettings::ValidateVanitySchematics() const {
    return false;
}

FSchematicType USchematicSettings::GetSchematicTypeData(ESchematicType InType) {
    return FSchematicType{};
}

TSet<USchematic*> USchematicSettings::GetSchematics() const {
    return TSet<USchematic*>();
}

UOverclockBank* USchematicSettings::GetOverclocksForItem(UItemID* Item) const {
    return NULL;
}


