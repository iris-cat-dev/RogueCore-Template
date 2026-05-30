#include "PerkActivationWidgetWithItemMonitor.h"

UPerkActivationWidgetWithItemMonitor::UPerkActivationWidgetWithItemMonitor() {
    this->ItemToMonitor = nullptr;
    this->ActiveItem = nullptr;
}

void UPerkActivationWidgetWithItemMonitor::OnStopMonitoring_Implementation() {
}

void UPerkActivationWidgetWithItemMonitor::OnStartMonitoring_Implementation() {
}

void UPerkActivationWidgetWithItemMonitor::OnItemUnequipped(AItem* Item) {
}

void UPerkActivationWidgetWithItemMonitor::OnItemEquipped(AItem* Item) {
}

AItem* UPerkActivationWidgetWithItemMonitor::GetMonitoredItem() const {
    return NULL;
}


