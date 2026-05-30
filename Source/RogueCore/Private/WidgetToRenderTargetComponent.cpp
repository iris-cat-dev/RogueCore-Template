#include "WidgetToRenderTargetComponent.h"

UWidgetToRenderTargetComponent::UWidgetToRenderTargetComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WidgetClass = nullptr;
    this->bManuallyRedraw = false;
    this->bRedrawRequested = true;
    this->RedrawTime = 0.00f;
    this->LastWidgetRenderTime = 0.00f;
    this->bWindowFocusable = true;
    this->bDrawAtDesiredSize = false;
    this->BaseMaterial = nullptr;
    this->OwnerPlayer = nullptr;
    this->OpacityFromTexture = 1.00f;
    this->bIsTwoSided = false;
    this->TickWhenOffscreen = false;
    this->Widget = nullptr;
    this->RenderTarget = nullptr;
    this->MaterialInstance = nullptr;
    this->bEditTimeUsable = false;
}

void UWidgetToRenderTargetComponent::SetWidget(UUserWidget* NewWidget) {
}

void UWidgetToRenderTargetComponent::SetOwnerPlayer(ULocalPlayer* LocalPlayer) {
}

void UWidgetToRenderTargetComponent::SetBackgroundColor(const FLinearColor NewBackgroundColor) {
}

void UWidgetToRenderTargetComponent::RequestRedraw() {
}

UUserWidget* UWidgetToRenderTargetComponent::GetUserWidgetObject() const {
    return NULL;
}

UTextureRenderTarget2D* UWidgetToRenderTargetComponent::GetRenderTarget() const {
    return NULL;
}

ULocalPlayer* UWidgetToRenderTargetComponent::GetOwnerPlayer() const {
    return NULL;
}

UMaterialInstanceDynamic* UWidgetToRenderTargetComponent::GetMaterialInstance() const {
    return NULL;
}


