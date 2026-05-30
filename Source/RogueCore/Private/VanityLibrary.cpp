#include "VanityLibrary.h"

UVanityLibrary::UVanityLibrary() {
}

void UVanityLibrary::SetDoesVanityArmorPaintApplyToUndersuit(const UObject* WorldContext, UPlayerCharacterID* Character, const bool Paints) {
}

void UVanityLibrary::SetDoesVanityArmorPaintApplyToGauntlets(const UObject* WorldContext, UPlayerCharacterID* Character, const bool Paints) {
}

bool UVanityLibrary::DoesVanityArmorPaintApplyToUndersuit(const UObject* WorldContext, UPlayerCharacterID* Character) {
    return false;
}

bool UVanityLibrary::DoesVanityArmorPaintApplyToGauntlets(const UObject* WorldContext, UPlayerCharacterID* Character) {
    return false;
}


