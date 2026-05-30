#include "BXENegotiationParticipantComponent.h"

UBXENegotiationParticipantComponent::UBXENegotiationParticipantComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NegotiationWidget = nullptr;
}

void UBXENegotiationParticipantComponent::Server_SelectUnlock_Implementation(const FBXEUnlockInstance& InUnlock, FItemSlotIndex InUnlockSlot, int32 InUnlockIndex, int32 InDroneUnlockIndex) {
}

void UBXENegotiationParticipantComponent::Server_RequestUnlock_Implementation(int32 InUnlockIndex) {
}

void UBXENegotiationParticipantComponent::Server_RecordParticipantCursor_Implementation(const FVector2D& Pos) {
}

void UBXENegotiationParticipantComponent::OnNegotiationWidgetLoadComplete() {
}

void UBXENegotiationParticipantComponent::Client_SetNegotiationData_Implementation(const FBXENegotiationData& InData) {
}

void UBXENegotiationParticipantComponent::Client_ReceiveParticipantCursor_Implementation(AFSDPlayerState* InPlayer, const FVector2D& InPos) {
}


