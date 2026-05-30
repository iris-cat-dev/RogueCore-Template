#include "OutlineComponent.h"

UOutlineComponent::UOutlineComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultOutline = EOutline::OL_NEUTRAL;
    this->ActiveOnHoldTAB = false;
    this->DoesTrackWithOutlineType = true;
    this->CustomLaserPointDuration = 0.00f;
    this->LockCounter = 0;
    this->CurrentOutline = EOutline::OL_NONE;
}

void UOutlineComponent::UnlockOutline() {
}

void UOutlineComponent::ToggleDefaultOutline(bool visible) {
}

void UOutlineComponent::SetOutline(EOutline Outline) {
}

void UOutlineComponent::RemoveFromOutline(UPrimitiveComponent* Component) {
}

void UOutlineComponent::OnToggleOutlineType(EOutline Outline, bool visible, bool checkIfOwnerIsAlive) {
}

void UOutlineComponent::OnToggleOutline(bool visible) {
}

void UOutlineComponent::OnOwnerDeath(UHealthComponentBase* HealthComponent) {
}

void UOutlineComponent::OnItemUnequipped(AItem* Item) {
}

void UOutlineComponent::OnItemEquipped(AItem* Item) {
}

void UOutlineComponent::LockOutline(const EOutline LockToOutline) {
}

void UOutlineComponent::EnableActivateOnHoldTab() {
}

void UOutlineComponent::DisableActiveOnHoldTab() {
}

void UOutlineComponent::AddToOutline(UPrimitiveComponent* Component) {
}

void UOutlineComponent::AddActorToOutline(AActor* Actor) {
}


