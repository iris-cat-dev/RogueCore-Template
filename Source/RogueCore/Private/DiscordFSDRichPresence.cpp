#include "DiscordFSDRichPresence.h"

FDiscordFSDRichPresence::FDiscordFSDRichPresence() {
    this->StartTimestamp = 0;
    this->partySize = 0;
    this->BiomeType = EDiscordBiomeType::CrystallineCaverns;
    this->MissionType = EDiscordMissionType::MiningExpedition;
    this->bIsPureSolo = false;
    this->State = FString();
    this->details = FString();
    this->matchSecret = FString();
    this->joinSecret = FString();
    this->partyId = FString();
    this->smallImageText = FString();
    this->LargeImageText = FString();
}

