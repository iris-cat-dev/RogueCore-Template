#include "PlayerDataStorage.h"

FPlayerDataStorage::FPlayerDataStorage() {
    this->Type = ESeamlessTravelStorageType::Travel;
    this->Character = nullptr;
    this->PlayerData = FBXEPlayerData();
}

