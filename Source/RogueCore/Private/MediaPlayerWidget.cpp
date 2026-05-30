#include "MediaPlayerWidget.h"

UMediaPlayerWidget::UMediaPlayerWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->MediaTexture = nullptr;
    this->VolumeCategory = EVolumeType::Master;
    this->VolumeMultiplier = 1.00f;
    this->PlayerState = EMediaPlayerState::Stopped;
    this->OutputImage = nullptr;
}

void UMediaPlayerWidget::Stop() {
}

bool UMediaPlayerWidget::Play() {
    return false;
}

EMediaPlayerState UMediaPlayerWidget::GetPlayerState() const {
    return EMediaPlayerState::Stopped;
}

void UMediaPlayerWidget::Callback_MediaEndReached() {
}

void UMediaPlayerWidget::Callback_MediaClosed() {
}


