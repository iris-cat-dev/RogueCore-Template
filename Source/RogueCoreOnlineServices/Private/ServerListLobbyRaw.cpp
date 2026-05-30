#include "ServerListLobbyRaw.h"

FServerListLobbyRaw::FServerListLobbyRaw() {
    this->RunType = 0;
    this->RunDepth = 0;
    this->RunLength = 0;
    this->RunComplexity = 0;
    this->RunBiome = 0;
    this->RunMutator = 0;
    this->CompletedStages = 0;
    this->IsInProgress = false;
    this->IsJoinable = false;
    this->IsModded = false;
    this->NumPlayers = 0;
    this->IsClassLocked = false;
    this->PasswordProtected = false;
    this->GameVersion = 0;
}

