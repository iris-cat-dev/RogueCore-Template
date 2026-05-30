#include "ActionIconMappingPtr.h"

FActionIconMappingPtr::FActionIconMappingPtr() {
    this->DoNotTint = false;
    this->ActionKey = FKey();
    this->Icon = nullptr;
}

