#include "SaveGameSnapShot.h"

FSaveGameSnapShot::FSaveGameSnapShot() {
    this->IsObsolete = false;
    this->VersionNumber = 0;
    this->SaveGame = nullptr;
    this->Filename = FString();
}

