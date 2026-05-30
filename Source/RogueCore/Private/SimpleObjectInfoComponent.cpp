#include "SimpleObjectInfoComponent.h"

USimpleObjectInfoComponent::USimpleObjectInfoComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LookAtShout = nullptr;
    this->bHasMissionControlLookAtShout = false;
    this->MissionControlLookAtShout = nullptr;
    this->LookAtShoutOverride = nullptr;
    this->Icon = nullptr;
    this->IconOverride = nullptr;
    this->bIsPingableByLaserpointer = false;
    this->ContextWidgetClass = nullptr;
    this->ContextWidget = nullptr;
}

void USimpleObjectInfoComponent::SetInGameName_Implementation(const FString& GameName) {
}

void USimpleObjectInfoComponent::SetInGameDescription_Implementation(const FString& GameDescription) {
}

void USimpleObjectInfoComponent::SetContextWidget(UActorContextWidget* InContextWidget) {
}

void USimpleObjectInfoComponent::OverrideLookAtShoutOrUseDefault(UDialogDataAsset* InShout) {
}

void USimpleObjectInfoComponent::OverrideLookAtShout(UDialogDataAsset* InShout) {
}

void USimpleObjectInfoComponent::OverrideIcon(UTexture2D* InTexture) {
}

UDialogDataAsset* USimpleObjectInfoComponent::GetDefaultLookAtShout() const {
    return NULL;
}

void USimpleObjectInfoComponent::ClearLookAtShoutOverride() {
}

void USimpleObjectInfoComponent::AddComponentObjectInfo(USceneComponent* TargetComponent, const FSimpleObjectInfoData& Data) {
}


