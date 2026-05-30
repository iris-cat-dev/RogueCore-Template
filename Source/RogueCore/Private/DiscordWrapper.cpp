#include "DiscordWrapper.h"

UDiscordWrapper::UDiscordWrapper() {
    this->LastResponseSuccessful = false;
    this->UserIn = false;
    this->UserInStatus = 0;
    this->HasEoM = false;
    this->IsConnected = false;
    this->ServerInfoLoaded = false;
}

void UDiscordWrapper::RequestUserInServer() {
}

void UDiscordWrapper::RequestFactionAdjustment(int32 Faction, bool Force) {
}

void UDiscordWrapper::RequestEoMData() {
}

void UDiscordWrapper::RequestDiscordServerInfo() {
}

void UDiscordWrapper::RejectInviteSignature() {
}

void UDiscordWrapper::IgnoreInviteSignature() {
}

UInDiscordServerEntitlement* UDiscordWrapper::GetDiscordJoinEntitlement(const UObject* WorldContextObject) {
    return NULL;
}

FString UDiscordWrapper::GetAvatarURL() {
    return TEXT("");
}

void UDiscordWrapper::AdjustFaction() {
}

void UDiscordWrapper::AcceptInviteSignature() {
}


