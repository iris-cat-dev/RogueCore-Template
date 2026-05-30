#include "CloudSaveRequest.h"

FCloudSaveRequest::FCloudSaveRequest() {
    this->PlayerRank = 0;
    this->SaveToDiskCounter = 0;
    this->SteamTicket = FString();
    this->PSTicket = FString();
    this->RawData = FString();
    this->Branch = FString();
}

