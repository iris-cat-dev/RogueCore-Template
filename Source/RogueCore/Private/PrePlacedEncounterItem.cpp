#include "PrePlacedEncounterItem.h"

FPrePlacedEncounterItem::FPrePlacedEncounterItem() {
    this->descriptor = nullptr;
    this->EncounterActor = nullptr;
    this->RoomID = 0;
    this->IsRoomID = false;
    this->Location = FTransform::Identity;
}

