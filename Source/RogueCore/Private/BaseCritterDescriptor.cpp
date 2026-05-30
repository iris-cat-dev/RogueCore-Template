#include "BaseCritterDescriptor.h"

UBaseCritterDescriptor::UBaseCritterDescriptor() {
    this->Positioning = nullptr;
    this->PathfinderType = DeepPathFinderType::Walk;
    this->DestroyWhenOutOfRange = true;
    this->OutOfRanageBehaviour = ECritterOutOfRangeBehaviour::Destroy;
}


