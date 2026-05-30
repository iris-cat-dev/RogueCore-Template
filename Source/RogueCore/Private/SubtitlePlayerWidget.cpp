#include "SubtitlePlayerWidget.h"

USubtitlePlayerWidget::USubtitlePlayerWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->StartDelay = 0.00f;
    this->IsPlaying = false;
    this->PlaybackStartTime = 0.00f;
    this->NextSubtitleIndex = 0;
}

void USubtitlePlayerWidget::Stop() {
}

void USubtitlePlayerWidget::Play(UDataTable* Subtitles) {
}



