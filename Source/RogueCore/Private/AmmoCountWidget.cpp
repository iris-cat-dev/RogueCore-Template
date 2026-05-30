#include "AmmoCountWidget.h"

UAmmoCountWidget::UAmmoCountWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->Character = nullptr;
    this->Item = nullptr;
    this->Aggregator = nullptr;
    this->ShowClipAndTotalAsOne = false;
    this->CountThreshold = -1;
}





void UAmmoCountWidget::OnItemReserveCountChanged(int32 Value) {
}

void UAmmoCountWidget::OnItemReserveCapacityChanged(int32 Value) {
}

void UAmmoCountWidget::OnItemEquipped(AItem* NewItem) {
}

void UAmmoCountWidget::OnItemClipCountChanged(int32 Value) {
}

void UAmmoCountWidget::OnItemClipCapacityChanged(int32 Value) {
}





