#include "ReloadSentryUsableComponent.h"
#include "Net/UnrealNetwork.h"

UReloadSentryUsableComponent::UReloadSentryUsableComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OutOfAmmoText = FText::FromString(TEXT("Out of Ammo"));
    this->AmmoFullText = FText::FromString(TEXT("Ammo Full"));
    this->AudioOutOfAmmo = nullptr;
    this->AudioReloading = nullptr;
    this->ReloadingAudioComponent = nullptr;
    this->usable = true;
    this->bReloading = false;
    this->ReloadAudioComponent = nullptr;
    this->AmmoPerSec = 1.00f;
    this->SentryGun = nullptr;
}

void UReloadSentryUsableComponent::SetOwningPlayerCharacter(APlayerCharacter* Player) {
}

void UReloadSentryUsableComponent::SetCanUse(bool isUsable) {
}

void UReloadSentryUsableComponent::OnRep_Reloading() {
}

void UReloadSentryUsableComponent::OnReloadAudioFinished() {
}

void UReloadSentryUsableComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UReloadSentryUsableComponent, usable);
    DOREPLIFETIME(UReloadSentryUsableComponent, bReloading);
    DOREPLIFETIME(UReloadSentryUsableComponent, OwningPlayerCharacter);
}


