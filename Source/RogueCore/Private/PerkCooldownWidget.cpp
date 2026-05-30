#include "PerkCooldownWidget.h"

UPerkCooldownWidget::UPerkCooldownWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->MonitoredCharacter = nullptr;
    this->MonitoredPerk = nullptr;
    this->currentProgress = 1.00f;
}

void UPerkCooldownWidget::SetMonitoredPerk(AActor* Character, UPerkAsset* Perk) {
}


float UPerkCooldownWidget::GetRemainingCoolDownTime() const {
    return 0.0f;
}

float UPerkCooldownWidget::GetCoolDownProgress() const {
    return 0.0f;
}

void UPerkCooldownWidget::ClearMonitoredPerk() {
}


