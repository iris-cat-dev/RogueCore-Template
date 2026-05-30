#include "FSDSteamUtils.h"

UFSDSteamUtils::UFSDSteamUtils() {
}

bool UFSDSteamUtils::PlayerIsFollowingUsOnSteam() {
    return false;
}

bool UFSDSteamUtils::IsTextFilteringInitialized() {
    return false;
}

bool UFSDSteamUtils::IsDev(APlayerState* PlayerState) {
    return false;
}

bool UFSDSteamUtils::InitializeFilterText() {
    return false;
}

bool UFSDSteamUtils::HasSupporterUpgrade() {
    return false;
}

bool UFSDSteamUtils::HasContentCreatorEdition() {
    return false;
}

FString UFSDSteamUtils::GetPlayerSteamID() {
    return TEXT("");
}

FString UFSDSteamUtils::FilterProfanityText(const FString& inputMessage) {
    return TEXT("");
}


