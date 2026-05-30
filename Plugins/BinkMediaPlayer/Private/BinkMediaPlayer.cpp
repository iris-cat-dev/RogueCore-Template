#include "BinkMediaPlayer.h"

UBinkMediaPlayer::UBinkMediaPlayer() {
    Looping = true;
    StartImmediately = true;
    DelayedOpen = true;
    BinkBufferMode = BMASM_Bink_Stream;
    BinkSoundTrack = BMASM_Bink_Sound_None;
    BinkSoundTrackStart = 0;
    BinkDrawStyle = BMASM_Bink_DS_RenderToTexture;
    BinkLayerDepth = 0;
}

bool UBinkMediaPlayer::SupportsSeeking() const {
    return false;
}

bool UBinkMediaPlayer::SupportsScrubbing() const {
    return false;
}

bool UBinkMediaPlayer::SupportsRate(float Rate, bool Unthinned) const {
    return false;
}

void UBinkMediaPlayer::Stop() {
}

void UBinkMediaPlayer::SetVolume(float Rate) {
}

bool UBinkMediaPlayer::SetRate(float Rate) {
    return false;
}

bool UBinkMediaPlayer::SetLooping(bool InLooping) {
    return false;
}

bool UBinkMediaPlayer::Seek(const FTimespan& InTime) {
    return false;
}

bool UBinkMediaPlayer::Rewind() {
    return false;
}

bool UBinkMediaPlayer::Play() {
    return false;
}

bool UBinkMediaPlayer::Pause() {
    return false;
}

bool UBinkMediaPlayer::OpenUrl(const FString& NewUrl) {
    return false;
}

bool UBinkMediaPlayer::IsStopped() const {
    return false;
}

bool UBinkMediaPlayer::IsPlaying() const {
    return false;
}

bool UBinkMediaPlayer::IsPaused() const {
    return false;
}

bool UBinkMediaPlayer::IsLooping() const {
    return false;
}

bool UBinkMediaPlayer::IsInitialized() const {
    return false;
}

bool UBinkMediaPlayer::IsGotoing() const {
    return false;
}

FString UBinkMediaPlayer::GetUrl() const {
    return TEXT("");
}

FTimespan UBinkMediaPlayer::GetTime() const {
    return FTimespan{};
}

float UBinkMediaPlayer::GetRate() const {
    return 0.0f;
}

FTimespan UBinkMediaPlayer::GetDuration() const {
    return FTimespan{};
}

void UBinkMediaPlayer::Draw(UTexture* Texture, bool tonemap, int32 out_nits, float alpha, bool srgb_decode, bool hdr) {
}

void UBinkMediaPlayer::CloseUrl() {
}

bool UBinkMediaPlayer::CanPlay() const {
    return false;
}

bool UBinkMediaPlayer::CanPause() const {
    return false;
}


