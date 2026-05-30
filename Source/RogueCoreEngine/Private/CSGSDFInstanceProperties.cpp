#include "CSGSDFInstanceProperties.h"

FCSGSDFInstanceProperties::FCSGSDFInstanceProperties() {
    this->SDF = nullptr;
    this->CellSize = EPreviewCellSize::PRV_CELL_SIZE_12_5;
    this->Seed = 0;
    this->Settings = FCSGOptions();
}

