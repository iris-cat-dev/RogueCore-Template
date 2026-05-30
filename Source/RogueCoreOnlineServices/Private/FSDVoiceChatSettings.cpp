#include "FSDVoiceChatSettings.h"

FFSDVoiceChatSettings::FFSDVoiceChatSettings() {
    this->volumeVoiceChatOutput = 0.00f;
    this->volumeVoiceChatInput = 0.00f;
    this->UseDefaultAudioOutputDevice = false;
    this->UseDefaultAudioInputDevice = false;
    this->bUsePushToTalk = false;
    this->bUseVoiceChat = false;
    this->soundClassVoice = nullptr;
}

