#include "BXENegotiationManager.h"

UBXENegotiationManager::UBXENegotiationManager() {
    this->BXEManager = nullptr;
}

TArray<AFSDPlayerState*> UBXENegotiationManager::GetPlayersForNegotiationStart(const UObject* WorldContext) {
    return TArray<AFSDPlayerState*>();
}


