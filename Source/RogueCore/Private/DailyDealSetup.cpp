#include "DailyDealSetup.h"

FDailyDealSetup::FDailyDealSetup() {
    this->Resource = nullptr;
    this->DealType = EDealType::Buy;
    this->UnitsRange = FIntPoint();
    this->DiscountRangePercent = FVector2D::ZeroVector;
    this->ExtraValueRangePercent = FVector2D::ZeroVector;
}

