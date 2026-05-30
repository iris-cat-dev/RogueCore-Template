#include "CrosshairAggregator.h"

UCrosshairAggregator::UCrosshairAggregator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CrosshairWidget = nullptr;
    this->CrossHairType = nullptr;
    this->CustomAmmoCounterWidget = nullptr;
    this->CustomAmmoCounterType = nullptr;
}

void UCrosshairAggregator::SetCrosshair(UUserWidget* Widget) {
}

UUserWidget* UCrosshairAggregator::GetOrCreateCrosshair() {
    return NULL;
}

UCustomAmmoCountWidget* UCrosshairAggregator::GetCustomAmmoCounterWidget(UObject* WorldContext, APlayerController* InOwner) {
    return NULL;
}


