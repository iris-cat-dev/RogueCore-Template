#include "RoomBox.h"

FRoomBox::FRoomBox() {
    this->NoiseRange = 0.00f;
    this->Noise = nullptr;
    this->position = FVector::ZeroVector;
    this->Rotation = FRotator_NoQuantize();
    this->Extends = FVector::ZeroVector;
}

