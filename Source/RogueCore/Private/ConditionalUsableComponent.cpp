#include "ConditionalUsableComponent.h"

UConditionalUsableComponent::UConditionalUsableComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UConditionalUsableComponent::RemoveIgnored(AActor* ToRemove) {
}

void UConditionalUsableComponent::RemoveAllowed(AActor* ToRemove) {
}

void UConditionalUsableComponent::RemoveAllIgnored() {
}

void UConditionalUsableComponent::RemoveAllAllowed() {
}

int32 UConditionalUsableComponent::GetAllowedNum() {
    return 0;
}

void UConditionalUsableComponent::AddIgnored(AActor* ToIgnore) {
}

void UConditionalUsableComponent::AddAllow(AActor* ToAllow) {
}


