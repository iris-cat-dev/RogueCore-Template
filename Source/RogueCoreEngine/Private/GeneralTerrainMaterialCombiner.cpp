#include "GeneralTerrainMaterialCombiner.h"

FGeneralTerrainMaterialCombiner::FGeneralTerrainMaterialCombiner() {
    this->IfBothEmpty = FGeneralMatPropertiesEmpty();
    this->IfBothSolid = FGeneralMatProperties();
    this->IfSrcSolid = FGeneralMatProperties();
    this->IfDestSolid = FGeneralMatProperties();
}

