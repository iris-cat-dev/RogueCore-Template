#include "RunHistoryLibrary.h"

URunHistoryLibrary::URunHistoryLibrary() {
}

bool URunHistoryLibrary::WasCooperActiveInRunEntry(const FParsedRunHistoryEntry& RunHistory) {
    return false;
}

FParsedRunHistoryCharacterData URunHistoryLibrary::FindRunHistoryCharacterData(const TArray<FParsedRunHistoryCharacterData>& CharacterDataArray, const int32 PlayerId) {
    return FParsedRunHistoryCharacterData{};
}

FRunHistoryBasicCharacterStats URunHistoryLibrary::FindRunHistoryBasicCharacterStat(const TArray<FRunHistoryBasicCharacterStats>& Stats, const int32 PlayerId, bool& WasFound) {
    return FRunHistoryBasicCharacterStats{};
}


