#include "DailyDeal.h"

FDailyDeal::FDailyDeal() {
    this->Resource = nullptr;
    this->DealType = EDealType::Buy;
    this->ResourceAmount = 0;
    this->credits = 0;
    this->ChangePercent = 0.00f;
}

