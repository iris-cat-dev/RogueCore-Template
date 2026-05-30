#include "ServerListLobbyStatus.h"

FServerListLobbyStatus::FServerListLobbyStatus() {
    this->Type = EServerListLobbyStatusType::JoinableRejoin;
    this->RequiredObjective = nullptr;
}

