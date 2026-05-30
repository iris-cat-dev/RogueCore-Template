#include "FSDWidgetEffectsComponent.h"

UFSDWidgetEffectsComponent::UFSDWidgetEffectsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UFSDWidgetEffectsComponent::StartTextCounter(UObject* WorldContext, UTextBlock* Widget, float Start, float End, float duration, int32 MaxDigits, float StartDelay) {
}

void UFSDWidgetEffectsComponent::StartCounter(UObject* WorldContext, UObject* Owner, float Start, float End, float duration, const FCustomCounterDelegate& OnCount, float StartDelay) {
}

void UFSDWidgetEffectsComponent::PingWidget(UObject* WorldContext, UWidget* Widget, float Amount, float duration, EFSDPingType PingType, float StartDelay) {
}

void UFSDWidgetEffectsComponent::MoveWidget(UObject* WorldContext, UUserWidget* Widget, FVector2D Start, FVector2D End, float duration, EMoveType MoveType, float StartDelay) {
}

void UFSDWidgetEffectsComponent::MoveOutWidget(UObject* WorldContext, UUserWidget* Widget, FVector2D MoveToOffset, float duration, float StartDelay) {
}

void UFSDWidgetEffectsComponent::MoveInWidget(UObject* WorldContext, UUserWidget* Widget, FVector2D MoveFromOffset, float duration, float StartDelay) {
}

void UFSDWidgetEffectsComponent::FadeWidget(UObject* WorldContext, UUserWidget* Widget, float StartFade, float EndFade, float duration, float StartDelay) {
}

void UFSDWidgetEffectsComponent::FadeOutWidget(UObject* WorldContext, UUserWidget* Widget, float duration, float StartDelay) {
}

void UFSDWidgetEffectsComponent::FadeInWidget(UObject* WorldContext, UUserWidget* Widget, float duration, float StartDelay) {
}


