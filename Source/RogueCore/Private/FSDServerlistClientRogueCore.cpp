#include "FSDServerlistClientRogueCore.h"

UFSDServerlistClientRogueCore::UFSDServerlistClientRogueCore() {
}

void UFSDServerlistClientRogueCore::SetServerListFilter(const FFSDServerListFilter& NewFilter) {
}

FFSDServerListFilter UFSDServerlistClientRogueCore::GetServerFilter() const {
    return FFSDServerListFilter{};
}

TArray<FServerListLobby> UFSDServerlistClientRogueCore::GetLastFoundLobbies() const {
    return TArray<FServerListLobby>();
}

FServerListLobby UFSDServerlistClientRogueCore::GetActiveLobby() const {
    return FServerListLobby{};
}

void UFSDServerlistClientRogueCore::ClearServerListFilter() {
}


