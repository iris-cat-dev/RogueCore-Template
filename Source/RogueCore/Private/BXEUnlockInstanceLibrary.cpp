#include "BXEUnlockInstanceLibrary.h"

UBXEUnlockInstanceLibrary::UBXEUnlockInstanceLibrary() {
}

TArray<UBioBoosterDeck*> UBXEUnlockInstanceLibrary::SortBioBoosterDecks(const TArray<UBioBoosterDeck*>& DecksToSort, const UPlayerCharacterID* CharacterToMoveToTop) {
    return TArray<UBioBoosterDeck*>();
}

void UBXEUnlockInstanceLibrary::PlayUnlockInstanceSelectedSound2D(const UObject* WorldContext, const FBXEUnlockInstance& UnlockInstance) {
}

TArray<UBXEUnlockBase*> UBXEUnlockInstanceLibrary::GetUnlocksFromUnlockRecords(const TArray<FBXEUnlockRecord>& UnlockRecords) {
    return TArray<UBXEUnlockBase*>();
}

TArray<UBXEUnlockBase*> UBXEUnlockInstanceLibrary::GetUnlocksFromUnlockInstances(const TArray<FBXEUnlockInstance>& UnlockInstances) {
    return TArray<UBXEUnlockBase*>();
}

TArray<FBXEUnlockRecord> UBXEUnlockInstanceLibrary::GetUnlockRecordsOfType(const TArray<FBXEUnlockRecord>& UnlockRecords, const EUnlockType Type) {
    return TArray<FBXEUnlockRecord>();
}

UUnlockVisualSettings* UBXEUnlockInstanceLibrary::GetUnlockInstanceVisualSettings(const FBXEUnlockInstance& UnlockInstance) {
    return NULL;
}

EUnlockType UBXEUnlockInstanceLibrary::GetUnlockInstanceType(const FBXEUnlockInstance& UnlockInstance) {
    return EUnlockType::None;
}

TArray<FBXEUnlockInstance> UBXEUnlockInstanceLibrary::GetUnlockInstancesOfType(const TArray<FBXEUnlockInstance>& UnlockInstances, const EUnlockType Type) {
    return TArray<FBXEUnlockInstance>();
}

UBXEUnlockRarity* UBXEUnlockInstanceLibrary::GetUnlockInstanceRarity(const FBXEUnlockInstance& UnlockInstance) {
    return NULL;
}


