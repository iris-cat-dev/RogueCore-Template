#include "CSGSDFModulatedInstanceProperties.h"

FCSGSDFModulatedInstanceProperties::FCSGSDFModulatedInstanceProperties() {
    this->SDF = nullptr;
    this->ModulateSDF = nullptr;
    this->CellSize = EPreviewCellSize::PRV_CELL_SIZE_12_5;
    this->Seed = 0;
    this->ModulateMode = ESDFModulateMode::MM_Disabled;
    this->SDFSettings = FCSGOptions();
    this->ModulateSettings = FCSGOptions();
}

