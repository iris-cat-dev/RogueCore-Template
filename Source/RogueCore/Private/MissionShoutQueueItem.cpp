#include "MissionShoutQueueItem.h"

FMissionShoutQueueItem::FMissionShoutQueueItem() {
    this->LoadedAudio = nullptr;
    this->ControllerId = EMissionControlID::MissionControl;
    this->AudioPtr = nullptr;
    this->Text = FText::GetEmpty();
}

