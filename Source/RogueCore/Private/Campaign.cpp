#include "Campaign.h"
#include "Templates/SubclassOf.h"

UCampaign::UCampaign() {
    this->HasMissions = true;
    this->CampaignCompleteShout = nullptr;
    this->RequiredCharacterID = nullptr;
    this->Progress = 0;
    this->Seed = 0;
    this->CanAbort = true;
    this->CanSkip = false;
    this->campaigntype = ECampaignType::Normal;
    this->CampaignCompletedMissionStat = nullptr;
    this->CampaignActivity = nullptr;
    this->ReplacesOldCampaignCampaign = nullptr;
    this->Mutators = ECampaignMutators::NotAllowed;
}

bool UCampaign::IsComplete() const {
    return false;
}

bool UCampaign::IsCampaignComplete(UObject* WorldContext, TSubclassOf<UCampaign> Campaign) {
    return false;
}

UCampaign* UCampaign::GetReference(TSubclassOf<UCampaign> Campaign) {
    return NULL;
}

UCampaignMission* UCampaign::GetPreviousMission() const {
    return NULL;
}

UTexture2D* UCampaign::GetPicture() const {
    return NULL;
}

FText UCampaign::GetCampaignTitle(TSubclassOf<UCampaign> Campaign) {
    return FText::GetEmpty();
}

UCampaignMission* UCampaign::GetActiveMission() const {
    return NULL;
}

bool UCampaign::CanStartCampaign(AFSDPlayerController* Player) const {
    return false;
}

bool UCampaign::CanSeeCampaign(APlayerController* PlayerController) const {
    return false;
}

bool UCampaign::AreRestrictionsMet(AFSDPlayerController* Player, UDifficultySetting* optionalDifficulty) const {
    return false;
}


