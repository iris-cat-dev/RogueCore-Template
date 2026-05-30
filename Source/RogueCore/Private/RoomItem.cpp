#include "RoomItem.h"

FRoomItem::FRoomItem() {
    this->Spawnable = nullptr;
    this->Location = FVector::ZeroVector;
    this->Rotation = FRotator_NoQuantize();
}

