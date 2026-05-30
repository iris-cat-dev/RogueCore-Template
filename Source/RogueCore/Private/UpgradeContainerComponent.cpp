#include "UpgradeContainerComponent.h"
#include "Net/UnrealNetwork.h"

UUpgradeContainerComponent::UUpgradeContainerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NumericalDamageUpgrades[0] = 0.00f;
    this->NumericalDamageUpgrades[1] = 0.00f;
    this->NumericalDamageUpgrades[2] = 0.00f;
    this->NumericalDamageUpgrades[3] = 0.00f;
    this->NumericalDamageUpgrades[4] = 0.00f;
    this->NumericalDamageUpgrades[5] = 0.00f;
    this->NumericalDamageUpgrades[6] = 0.00f;
    this->NumericalDamageUpgrades[7] = 0.00f;
    this->NumericalDamageUpgrades[8] = 0.00f;
    this->NumericalDamageUpgrades[9] = 0.00f;
    this->NumericalDamageUpgrades[10] = 0.00f;
    this->NumericalDamageUpgrades[11] = 0.00f;
    this->NumericalDamageUpgrades[12] = 0.00f;
    this->NumericalDamageUpgrades[13] = 0.00f;
    this->NumericalUpgrades[0] = 0.00f;
    this->NumericalUpgrades[1] = 0.00f;
    this->NumericalUpgrades[2] = 0.00f;
    this->NumericalUpgrades[3] = 0.00f;
    this->NumericalUpgrades[4] = 0.00f;
}

void UUpgradeContainerComponent::RemoveMiscUpgrade(AActor* Target, UMiscUpgradeKey* Key, float Value) {
}

void UUpgradeContainerComponent::RemoveFloatUpgrade(AActor* Target, EDamageUpgrade upgradeType, float Value) {
}

void UUpgradeContainerComponent::RemoveDynamicUpgrade(AActor* Target, UDamageBonusBase* DamageBonus) {
}

void UUpgradeContainerComponent::RemoveDamageParamBonus(AActor* Target, UDamageParamBonus* DamageBonus) {
}

float UUpgradeContainerComponent::GetMiscUpgradeValue(AActor* Target, UMiscUpgradeKey* Key) {
    return 0.0f;
}

void UUpgradeContainerComponent::ChangeMiscUpgrade(AActor* Target, UMiscUpgradeKey* Key, float Value) {
}

void UUpgradeContainerComponent::AddFloatUpgrade(AActor* Target, EDamageUpgrade upgradeType, float Value) {
}

void UUpgradeContainerComponent::AddDynamicUpgrade(AActor* Target, UDamageBonusBase* DamageBonus) {
}

void UUpgradeContainerComponent::AddDamageParamBonus(AActor* Target, UDamageParamBonus* DamageBonus) {
}

void UUpgradeContainerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UUpgradeContainerComponent, MiscUpgrades);
    DOREPLIFETIME(UUpgradeContainerComponent, DamageBonusUpgrades);
    DOREPLIFETIME(UUpgradeContainerComponent, DamageParamBonuses);
    DOREPLIFETIME(UUpgradeContainerComponent, NumericalDamageUpgrades);
    DOREPLIFETIME(UUpgradeContainerComponent, NumericalUpgrades);
}


