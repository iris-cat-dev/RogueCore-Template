#include "PlatformComponent.h"

FPlatformComponent::FPlatformComponent() {
    this->ComponentClass = nullptr;
    this->Criteria = EPlatformComponentCriteria::All;
}

