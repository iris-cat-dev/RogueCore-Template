#include "DormantComponentState.h"

FDormantComponentState::FDormantComponentState() {
    this->Collision = ECollisionEnabled::NoCollision;
    this->Active = false;
    this->visible = false;
    this->Component = nullptr;
    this->CollisionProfileName = FName();
}

