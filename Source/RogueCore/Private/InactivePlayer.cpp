#include "InactivePlayer.h"

FInactivePlayer::FInactivePlayer() {
    this->PlayerClass = nullptr;
    this->PlayerId = FUniqueNetIdRepl();
    this->PlayerName = FString();
}

