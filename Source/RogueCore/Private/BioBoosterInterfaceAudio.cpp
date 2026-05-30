#include "BioBoosterInterfaceAudio.h"

FBioBoosterInterfaceAudio::FBioBoosterInterfaceAudio() {
    this->AudioSelectionStart = nullptr;
    this->AudioSelectionSuccess = nullptr;
    this->AudioSelectionFailed = nullptr;
    this->AudioSelectionProgress = nullptr;
    this->AudioRootComponent = nullptr;
    this->AudioSelectionProgressParam = FName();
    this->ProgressAudioComponent = nullptr;
}

