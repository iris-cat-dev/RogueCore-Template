#include "HUDRadarWidget.h"

UHUDRadarWidget::UHUDRadarWidget() : UUserWidget(FObjectInitializer::Get()) {
}

FGameplayTagContainer UHUDRadarWidget::GetEnemyTypesTag_Implementation() const {
    return FGameplayTagContainer{};
}

float UHUDRadarWidget::GetDetectionRange_Implementation() const {
    return 0.0f;
}





