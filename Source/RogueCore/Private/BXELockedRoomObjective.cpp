#include "BXELockedRoomObjective.h"
#include "Net/UnrealNetwork.h"

UBXELockedRoomObjective::UBXELockedRoomObjective(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ObjectiveSpawner = nullptr;
    this->PercentOfPlayersForComplete = 100.00f;
    this->PlayersInRoom = 0;
    this->LockedRoom = nullptr;
}

bool UBXELockedRoomObjective::SetPlayersInRoom(const int32& Num) {
    return false;
}

void UBXELockedRoomObjective::OnRep_PlayersInRoom() {
}

int32 UBXELockedRoomObjective::NumOfPlayersForComplete() const {
    return 0;
}

AActor* UBXELockedRoomObjective::GetLockedRoom() const {
    return NULL;
}

void UBXELockedRoomObjective::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UBXELockedRoomObjective, PlayersInRoom);
}


