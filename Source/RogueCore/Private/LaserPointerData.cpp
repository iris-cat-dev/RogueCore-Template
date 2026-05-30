#include "LaserPointerData.h"

FLaserPointerData::FLaserPointerData() {
    this->Icon = nullptr;
    this->TargetType = ELaserPointerTargetType::Chunkable;
    this->Name = FText::GetEmpty();
    this->Description = FText::GetEmpty();
    this->Color = FLinearColor::White;
    this->SavegameID = FGuid();
}

