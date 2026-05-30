#include "CampaignSave.h"

FCampaignSave::FCampaignSave() {
    this->ActiveCampaignWeek = 0;
    this->ActiveCampaign = FActiveCampaignItem();
    this->WeeklySave = FWeeklyCampaignItem();
    this->MaxtrixCoreHuntSave = FWeeklyCampaignItem();
    this->SeededRandomSave = FWeeklyCampaignItem();
}

