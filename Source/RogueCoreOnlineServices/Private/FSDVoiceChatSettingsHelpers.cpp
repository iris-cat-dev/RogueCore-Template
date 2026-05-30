#include "FSDVoiceChatSettingsHelpers.h"

UFSDVoiceChatSettingsHelpers::UFSDVoiceChatSettingsHelpers() {
}

bool UFSDVoiceChatSettingsHelpers::SetVoiceChatInputMuted(bool bIsMuted) {
    return false;
}

void UFSDVoiceChatSettingsHelpers::SetUseDefaultAudioOutputDevice() {
}

void UFSDVoiceChatSettingsHelpers::SetUseDefaultAudioInputDevice() {
}

bool UFSDVoiceChatSettingsHelpers::HasAudioOutputDeviceChanged(const FFSDVoiceDeviceHandle& newAudioDevice) {
    return false;
}

bool UFSDVoiceChatSettingsHelpers::HasAudioInputDeviceChanged(const FFSDVoiceDeviceHandle& newAudioDevice) {
    return false;
}

bool UFSDVoiceChatSettingsHelpers::GetCurrentAudioOutputDevice(FFSDVoiceDeviceHandle& AudioDevice) {
    return false;
}

float UFSDVoiceChatSettingsHelpers::GetCurrentAudioInputDeviceAmplitude(int32 localUserId) {
    return 0.0f;
}

bool UFSDVoiceChatSettingsHelpers::GetCurrentAudioInputDevice(FFSDVoiceDeviceHandle& AudioDevice) {
    return false;
}

bool UFSDVoiceChatSettingsHelpers::GetAvailableAudioOutputDevices(TArray<FFSDVoiceDeviceHandle>& AudioDevices) {
    return false;
}

bool UFSDVoiceChatSettingsHelpers::GetAvailableAudioInputDevices(TArray<FFSDVoiceDeviceHandle>& AudioDevices) {
    return false;
}


