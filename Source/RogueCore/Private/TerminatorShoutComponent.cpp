#include "TerminatorShoutComponent.h"

UTerminatorShoutComponent::UTerminatorShoutComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TalkLight = nullptr;
    this->MaxRadius = 100.00f;
    this->MaxIntensity = 10000.00f;
    this->OwnerMesh = nullptr;
    this->ShoutInstance = nullptr;
}

void UTerminatorShoutComponent::SetShoutState(ETerminatorShoutState State, float delayShout) {
}


void UTerminatorShoutComponent::OnShoutInstancePlayStateChanged(EAudioComponentPlayState PlayState) {
}


void UTerminatorShoutComponent::All_PlayShout_Implementation(USoundCue* Shout) {
}


