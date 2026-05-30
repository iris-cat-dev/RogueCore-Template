#include "SessionHandling.h"

USessionHandling::USessionHandling() {
}

void USessionHandling::StopVoice(UObject* WorldContextObject) {
}

void USessionHandling::StartVoice(UObject* WorldContextObject) {
}

bool USessionHandling::StartSearchForBlockedUsers(int32 localUserNum) {
    return false;
}

void USessionHandling::ShowInviteUI(UObject* WorldContextObject) {
}

bool USessionHandling::IsInActiveSession(UObject* WorldContextObject) {
    return false;
}

FString USessionHandling::GetVoiceStatus() {
    return TEXT("");
}

FText USessionHandling::GetSessionJoinError(UObject* WorldContextObject) {
    return FText::GetEmpty();
}

bool USessionHandling::GetFriendsList(int32 localUserNum, TArray<FFriendInfo>& Players) {
    return false;
}

bool USessionHandling::GetCurrentSessionState(FString& sessionState, FString& ID) {
    return false;
}

bool USessionHandling::FSDUpdateSessionInfo(UObject* WorldContextObject) {
    return false;
}

bool USessionHandling::FSDIsSessionValid(const FFSDBlueprintSessionResult& Result) {
    return false;
}

bool USessionHandling::FSDIsPasswordRequired(const FFSDBlueprintSessionResult& Result) {
    return false;
}

FString USessionHandling::FSDGetServerID(const FFSDBlueprintSessionResult& Result) {
    return TEXT("");
}

bool USessionHandling::FSDCancelFindSessions(UObject* WorldContextObject) {
    return false;
}


