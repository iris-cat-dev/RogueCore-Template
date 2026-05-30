#include "PickaxeFunctionLibrary.h"

UPickaxeFunctionLibrary::UPickaxeFunctionLibrary() {
}

bool UPickaxeFunctionLibrary::RemovePickaxePartFromOwned(UObject* WorldContextObject, const UPickaxePart* part) {
    return false;
}

void UPickaxeFunctionLibrary::RandomizePickaxe(UObject* WorldContextObject, UPlayerCharacterID* PlayerId) {
}

bool UPickaxeFunctionLibrary::IsPickaxePartEquipped(UObject* WorldContextObject, EPickaxePartLocation Location, UPickaxePart* part, UPlayerCharacterID* characterID) {
    return false;
}

void UPickaxeFunctionLibrary::GivePickaxePart(UObject* WorldContextObject, UPickaxePart* part) {
}

TArray<UPickaxePart*> UPickaxeFunctionLibrary::GetUnlockedPickaxeParts(UObject* WorldContextObject, EPickaxePartLocation Category, UPlayerCharacterID* characterID) {
    return TArray<UPickaxePart*>();
}

TArray<UPickaxePart*> UPickaxeFunctionLibrary::GetPickaxeParts(UObject* WorldContextObject, EPickaxePartLocation Category) {
    return TArray<UPickaxePart*>();
}

bool UPickaxeFunctionLibrary::GetIsPickAxePartAcquired(UObject* WorldContextObject, const UPickaxePart* InPickaxePart) {
    return false;
}

FPickaxeSet UPickaxeFunctionLibrary::GetEquippedPickaxeSet(UObject* WorldContextObject, UPlayerCharacterID* characterID) {
    return FPickaxeSet{};
}

UPickaxePart* UPickaxeFunctionLibrary::GetEquippedPickaxePart(UObject* WorldContextObject, EPickaxePartLocation partLocation, UPlayerCharacterID* characterID) {
    return NULL;
}

void UPickaxeFunctionLibrary::EquipPickaxePart(UObject* WorldContextObject, UPickaxePart* part, EPickaxePartLocation partLocation, UPlayerCharacterID* characterID) {
}

void UPickaxeFunctionLibrary::CopyPastePickaxeLoadout(UObject* WorldContextObject, UPlayerCharacterID* PlayerId, int32 fromIndex, int32 toIndex) {
}


