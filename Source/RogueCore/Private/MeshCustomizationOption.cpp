#include "MeshCustomizationOption.h"

FMeshCustomizationOption::FMeshCustomizationOption() {
    this->TargetComponentTag = FName();
    this->mesh = nullptr;
    this->PreviousMesh = nullptr;
}

