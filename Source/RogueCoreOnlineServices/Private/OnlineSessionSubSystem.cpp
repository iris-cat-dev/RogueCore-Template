#include "OnlineSessionSubSystem.h"
#include "FSDSessionUpdater.h"

UOnlineSessionSubSystem::UOnlineSessionSubSystem() {
    this->SessionType = EOnlineSessionType::Private;
    this->IsJoiningInvite = false;
    this->CanPlayOnline = true;
    this->DisconnectReason = EDisconnectReason::None;
    this->SessionUpdater = CreateDefaultSubobject<UFSDSessionUpdater>(TEXT("SessionUpdater"));
}

void UOnlineSessionSubSystem::SetSessionPassword(const FString& Password) {
}

void UOnlineSessionSubSystem::SetOverrideMaxPlayerCount(int32 count) {
}

void UOnlineSessionSubSystem::SetOnlineSessionType(const EOnlineSessionType NewType) {
}

void UOnlineSessionSubSystem::SetIsUsingOnlineFeatures(bool bIsOnlineFeatureUsed) {
}

bool UOnlineSessionSubSystem::SetAllowNewPlayerJoin(bool isNewPlayersAllowed) {
    return false;
}

void UOnlineSessionSubSystem::OnLoginStateChanged(EFSDLoginState LoginStatus, const FString& LoginResult) {
}

bool UOnlineSessionSubSystem::IsSessionJoinable() {
    return false;
}

bool UOnlineSessionSubSystem::IsPendingInvitePasswordProtected() {
    return false;
}

bool UOnlineSessionSubSystem::IsInActiveSession(bool forDefaultSystem) const {
    return false;
}

bool UOnlineSessionSubSystem::HasPendingInvite() const {
    return false;
}

EOnlineSessionType UOnlineSessionSubSystem::GetSessionType() const {
    return EOnlineSessionType::Solo;
}

EOnlineSessionStatus UOnlineSessionSubSystem::GetSessionStatus(bool forDefaultSystem) const {
    return EOnlineSessionStatus::NoSession;
}

int32 UOnlineSessionSubSystem::GetOverrideMaxPlayerCount() const {
    return 0;
}

int32 UOnlineSessionSubSystem::GetMaxPublicConnections() const {
    return 0;
}

FString UOnlineSessionSubSystem::GetDisconnectErrorCode() const {
    return TEXT("");
}

bool UOnlineSessionSubSystem::GetCanPlayOnline() const {
    return false;
}

void UOnlineSessionSubSystem::CloseSessionLobby() {
}

void UOnlineSessionSubSystem::ClearDisconnectError() {
}

void UOnlineSessionSubSystem::CancelJoin() {
}


