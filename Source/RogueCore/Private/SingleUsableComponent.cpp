#include "SingleUsableComponent.h"
#include "Net/UnrealNetwork.h"

USingleUsableComponent::USingleUsableComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AudioBeginUse = nullptr;
    this->AudioFailedUse = nullptr;
    this->AudioCompletedUse = nullptr;
    this->AudioProgress = nullptr;
    this->AudioProgressParam = TEXT("Progress");
    this->AudioProgressCurve = nullptr;
    this->BoscoLaserpointerShout = nullptr;
    this->CoopUse = true;
    this->UseSpeedStat = nullptr;
    this->CoopUseMultiplier = 1.00f;
    this->usable = false;
    this->TurnOffAfterUse = false;
    this->MultipleUse = false;
    this->bShowUsingUI = true;
    this->UseDuration = 0.00f;
    this->Progress = 0.00f;
    this->DesiredProgress = 0.00f;
    this->userCount = 0;
    this->AudioBeginUseInstance = nullptr;
    this->AudioProgressInstance = nullptr;
    this->bAudioProgressPlaying = false;
}

void USingleUsableComponent::Use(APlayerCharacter* User, EInputKeys Key, float DeltaTime) {
}

void USingleUsableComponent::SetUseDuration(float aUseTime) {
}

void USingleUsableComponent::SetProgress(float Value) {
}

void USingleUsableComponent::SetCanUse(bool CanUse) {
}

void USingleUsableComponent::OnRep_UserCount() {
}

void USingleUsableComponent::OnRep_Usable() {
}

void USingleUsableComponent::OnRep_DesiredProgress() {
}

void USingleUsableComponent::Cheat_Use(APlayerCharacter* User, EInputKeys Key) {
}

void USingleUsableComponent::All_PlayFailedAudio_Implementation() {
}

void USingleUsableComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USingleUsableComponent, usable);
    DOREPLIFETIME(USingleUsableComponent, UseDuration);
    DOREPLIFETIME(USingleUsableComponent, DesiredProgress);
    DOREPLIFETIME(USingleUsableComponent, userCount);
}


