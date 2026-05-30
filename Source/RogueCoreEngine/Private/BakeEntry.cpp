#include "BakeEntry.h"

FBakeEntry::FBakeEntry() {
    this->Tree = FDeepCSGFloatTreePacked();
    this->AABB = FBox();
}

