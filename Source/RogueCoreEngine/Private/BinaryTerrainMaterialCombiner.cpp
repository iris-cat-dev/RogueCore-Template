#include "BinaryTerrainMaterialCombiner.h"

FBinaryTerrainMaterialCombiner::FBinaryTerrainMaterialCombiner() {
    this->IfEmpty = FEmptyBinaryMatProperties();
    this->IfSolid = FBinaryMatProperties();
}

