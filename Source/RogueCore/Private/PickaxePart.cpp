#include "PickaxePart.h"

UPickaxePart::UPickaxePart() {
    this->Aquisition = nullptr;
    this->Item = nullptr;
}

bool UPickaxePart::GetUnlockedFromStart() const {
    return false;
}

EPickaxePartLocation UPickaxePart::GetPrefferedLocation() const {
    return EPickaxePartLocation::Head;
}


