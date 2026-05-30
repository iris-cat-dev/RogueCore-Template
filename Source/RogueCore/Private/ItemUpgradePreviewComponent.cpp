#include "ItemUpgradePreviewComponent.h"

UItemUpgradePreviewComponent::UItemUpgradePreviewComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PreviewUpgrade = nullptr;
}

void UItemUpgradePreviewComponent::SetPreviewUpgrade(UItemUpgrade* InUpgrade) {
}

void UItemUpgradePreviewComponent::RefreshPreviewUpgrade() {
}


