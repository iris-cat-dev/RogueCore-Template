#include "ServerListLobby.h"

FServerListLobby::FServerListLobby() {
    this->RunType = ERunType::Default;
    this->RunDepth = ERunDepth::None;
    this->RunLength = 0;
    this->RunComplexity = 0;
    this->RunBiome = nullptr;
    this->RunMutator = nullptr;
    this->CompletedStages = 0;
    this->IsInProgress = false;
    this->IsJoinable = false;
    this->IsModded = false;
    this->NumPlayers = 0;
    this->IsClassLocked = false;
    this->PasswordProtected = false;
    this->GameVersion = 0;
    this->Ping = 0;
    this->RunId = FGuid();
    this->RunName = FString();
    this->RunSeed = FStageSeedParameters();
    this->ServerName = FString();
    this->Region = FString();
    this->SessionId = FString();
    this->HostUserID = FString();
    this->StartTimestamp = FString();
}

