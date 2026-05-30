#include "EnhancementLibrary.h"

UEnhancementLibrary::UEnhancementLibrary() {
}

void UEnhancementLibrary::SetEquippedEnhancements(const UObject* WorldContext, UPlayerCharacterID* Character, const TArray<UPerkAsset*>& Perks) {
}

TArray<UPerkAsset*> UEnhancementLibrary::GetUnlockedEnhancements(const UObject* WorldContext) {
    return TArray<UPerkAsset*>();
}

int32 UEnhancementLibrary::GetTotalNumberOfEnhancementSlots(const UObject* WorldContext) {
    return 0;
}

int32 UEnhancementLibrary::GetNumberOfUnlockedEnhancementSlots(const UObject* WorldContext) {
    return 0;
}

TArray<UPerkAsset*> UEnhancementLibrary::GetEquippedEnhancements(const UObject* WorldContext, UPlayerCharacterID* characterID) {
    return TArray<UPerkAsset*>();
}

int32 UEnhancementLibrary::GetEnhancementSlotsUnlockPlayerRank(int32 InSlotIndex) {
    return 0;
}

int32 UEnhancementLibrary::GetEnhancementSlotsUnlockMeritCost(int32 InSlotIndex) {
    return 0;
}

int32 UEnhancementLibrary::GetEnhancementSlotsBought(const UObject* InWorldContext, const UPlayerCharacterID* InPlayerCharacterID) {
    return 0;
}

int32 UEnhancementLibrary::GetAmountOfUnlockedEnhancements(const UObject* WorldContext) {
    return 0;
}

TArray<UPerkAsset*> UEnhancementLibrary::GetAllEnhancements(const UObject* WorldContext) {
    return TArray<UPerkAsset*>();
}

bool UEnhancementLibrary::CanPlayerBuyEnhancementSlot(const UObject* WorldContext, const UPlayerCharacterID* PlayerClass) {
    return false;
}

void UEnhancementLibrary::BuyEnhancementSlot(const UObject* InWorldContext, const UPlayerCharacterID* InPlayerCharacterID) {
}


