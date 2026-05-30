#include "UIFunctionLibrary.h"

UUIFunctionLibrary::UUIFunctionLibrary() {
}

void UUIFunctionLibrary::UpdateCoolDownProgressStyle(FCoolDownProgressStyle& inRef, float Progress, UObject* progressOwner, APlayerCharacter* Character) {
}

void UUIFunctionLibrary::StartBugReporter() {
}

void UUIFunctionLibrary::SetLoadoutIcon(UObject* WorldContextObject, UPlayerCharacterID* characterID, int32 loadoutIndex, int32 IconIndex) {
}

void UUIFunctionLibrary::RemoveItemUINotification(UObject* WorldContextObject, TArray<UObject*> Item, bool MatchChildNotifications) {
}

bool UUIFunctionLibrary::IsInItemUINotificationSet(UObject* WorldContextObject, UObject* Item) {
    return false;
}

int64 UUIFunctionLibrary::GetUnixTimeStamp() {
    return 0;
}

int32 UUIFunctionLibrary::GetLoadoutIcon(UObject* WorldContextObject, UPlayerCharacterID* characterID, int32 loadoutIndex) {
    return 0;
}

TArray<FText> UUIFunctionLibrary::FormatNewsTexts(TArray<FText> texts, int32 RandomSeed, UNewsTextLists* wordList, UStageNameBank* missionNameBank) {
    return TArray<FText>();
}

void UUIFunctionLibrary::ClearAllItemUINotifications(UObject* WorldContextObject) {
}

void UUIFunctionLibrary::CheckItemUINotification(UObject* WorldContextObject, TArray<UObject*> Item, bool& HasNotification, bool MatchChildNotifications) {
}

void UUIFunctionLibrary::AddItemUINotification(UObject* WorldContextObject, TArray<UObject*> Item) {
}


