#include "TXRunEndAudioSettings.h"

FTXRunEndAudioSettings::FTXRunEndAudioSettings() {
    this->volume_master = 0;
    this->volume_character_voice = 0;
    this->volume_omega_voice = 0;
    this->volume_music = 0;
    this->volume_sound_effects = 0;
    this->volume_voice_chat = 0;
    this->lower_audio_when_omega_speaks = false;
    this->voice_chat_enabled = false;
    this->push_to_talk_enabled = false;
}

