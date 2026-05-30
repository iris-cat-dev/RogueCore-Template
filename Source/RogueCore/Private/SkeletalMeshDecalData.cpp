#include "SkeletalMeshDecalData.h"

FSkeletalMeshDecalData::FSkeletalMeshDecalData() {
    this->Radius = 0.00f;
    this->DiffuseTex = nullptr;
    this->NormalMapTex = nullptr;
    this->Color = FLinearColor::White;
    this->Emissive = FLinearColor::White;
}

