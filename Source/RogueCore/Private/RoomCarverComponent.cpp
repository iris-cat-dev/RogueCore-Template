#include "RoomCarverComponent.h"

URoomCarverComponent::URoomCarverComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RoomGenerator = nullptr;
    this->UseRandomRotation = true;
}


