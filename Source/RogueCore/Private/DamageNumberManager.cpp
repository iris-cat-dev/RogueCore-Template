#include "DamageNumberManager.h"

UDamageNumberManager::UDamageNumberManager() {
    this->MoveUpAnimation = nullptr;
    this->ShakeAnimation = nullptr;
}

void UDamageNumberManager::TryInit() {
}

void UDamageNumberManager::OnDamageNumberExpired() {
}

FDamageData UDamageNumberManager::CreateDmgNumberData(const FVector& LocationOffset) {
    return FDamageData{};
}

void UDamageNumberManager::AddDamageNumber(float Damage, AActor* Target, bool IsWeakPoint, bool isArmor, bool isDoT, const FDamageData& Data) {
}


