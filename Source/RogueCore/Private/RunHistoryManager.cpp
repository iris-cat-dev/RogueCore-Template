#include "RunHistoryManager.h"

URunHistoryManager::URunHistoryManager() {
    this->CharacterBuildDataUtil = nullptr;
    this->HasSavedRecentRun = false;
}

void URunHistoryManager::RemoveRunHistoryEntry(int32 Index) {
}

void URunHistoryManager::OnRunGenerated(URun* Run) {
}

TArray<FRunHistoryEntry> URunHistoryManager::GetTotalRunHistory() const {
    return TArray<FRunHistoryEntry>();
}

bool URunHistoryManager::GetParsedHistory(int32 HistoryIndex, FParsedRunHistoryEntry& OutEntry) {
    return false;
}

bool URunHistoryManager::GetLatestParsedHistory(FParsedRunHistoryEntry& OutEntry) {
    return false;
}

void URunHistoryManager::ClearDamageLog(UObject* WorldContext) {
}

void URunHistoryManager::Cheat_SaveCurrentRunToHistory() {
}

void URunHistoryManager::Cheat_ClearRunHistory() {
}

void URunHistoryManager::AddCurrentRunToHistory(AFSDPlayerState* State) {
}


