#include "PlayersNegotiationSphere.h"

UPlayersNegotiationSphere::UPlayersNegotiationSphere(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TrackingEffect = nullptr;
    this->ChargeupTime = 0.00f;
    this->IsTracking = false;
}

void UPlayersNegotiationSphere::SetTrackPlayers(bool shouldTrack) {
}

void UPlayersNegotiationSphere::SetTrackingEffectActive_Implementation(bool IsActive) {
}

void UPlayersNegotiationSphere::SetHeaderText_Implementation(const FText& inHeaderText) {
}

APlayerCharacter* UPlayersNegotiationSphere::GetLastPlayerInside_ServerOnly() {
    return NULL;
}


