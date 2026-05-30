#include "CampaignMission.h"

UCampaignMission::UCampaignMission() {
    this->PlanetZone = nullptr;
    this->MissionCompleteShout = nullptr;
    this->OverrideMutators = false;
    this->MutatorOverride = ECampaignMutators::NotAllowed;
}

UStageTemplate* UCampaignMission::GetMissionTemplate() const {
    return NULL;
}


