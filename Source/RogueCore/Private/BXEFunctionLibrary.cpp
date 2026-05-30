#include "BXEFunctionLibrary.h"

UBXEFunctionLibrary::UBXEFunctionLibrary() {
}

FText UBXEFunctionLibrary::GetVoteOptionInstanceDescription(const FVoteOptionInstance& VoteOptionInstance, int32 Index) {
    return FText::GetEmpty();
}

UTexture2D* UBXEFunctionLibrary::GetVoteOptionHeaderImage(const FVoteOptionInstance& VoteOptionInstance) {
    return NULL;
}

TArray<UWeaponTagBase*> UBXEFunctionLibrary::GetUnlockInstanceWeaponTags(const FBXEUnlockInstance& UnlockInstance) {
    return TArray<UWeaponTagBase*>();
}

FText UBXEFunctionLibrary::GetUnlockInstanceFunctionalDescription(const FBXEUnlockInstance& UnlockInstance) {
    return FText::GetEmpty();
}

FText UBXEFunctionLibrary::GetUnlockInstanceDescription(const FBXEUnlockInstance& UnlockInstance) {
    return FText::GetEmpty();
}

TArray<UBXEStartingWeapon*> UBXEFunctionLibrary::GetStartingWeapons(UObject* WorldContextObject, bool getUnlockedWeapons, bool getLockedWeapons) {
    return TArray<UBXEStartingWeapon*>();
}

URunManager* UBXEFunctionLibrary::GetRunManager(const UObject* WorldContext) {
    return NULL;
}

TArray<UWeaponTagBase*> UBXEFunctionLibrary::GetItemIDWeaponTags(UItemID* InItemID) {
    return TArray<UWeaponTagBase*>();
}

UBXEStartingWeapon* UBXEFunctionLibrary::GetEquippedStartingWeapon(const UObject* WorldContextObject) {
    return NULL;
}

UBXESettings* UBXEFunctionLibrary::GetBXESettings() {
    return NULL;
}

UBXEProgressionSettings* UBXEFunctionLibrary::GetBXEProgressionSettings() {
    return NULL;
}

TArray<UBXEUnlockBase*> UBXEFunctionLibrary::GetAllItemUnlocksForAllPlayers(const UObject* WorldContext) {
    return TArray<UBXEUnlockBase*>();
}

void UBXEFunctionLibrary::ContainsWeaponTags(const TArray<UWeaponTagBase*>& Source, const TArray<UWeaponTagBase*>& Other, bool& hasAnyMatch, int32& numberOfMatches) {
}


