#include "DamageNumberAggregator.h"

UDamageNumberAggregator::UDamageNumberAggregator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UDamageNumberAggregator::Client_ShowHealthDamageNumber_Single_Implementation(float Damage, UDamageClass* DamageType, bool Radial, bool isDamageOverTime, AActor* DamageCauser, UFSDPhysicalMaterial* PhysicalMaterial, int32 OverriddenCritLevel, FVector_NetQuantize Location, AActor* Target) {
}

void UDamageNumberAggregator::Client_ShowDamageNumber_Implementation(const FDamageNumberReplicationData& Data) {
}

void UDamageNumberAggregator::Client_ShowArmorDamageNumber_Single_Implementation(float Damage, UDamageClass* DamageType, bool Radial, AActor* DamageCauser, UFSDPhysicalMaterial* PhysicalMaterial, int32 OverriddenCritLevel, FVector_NetQuantize Location, AActor* Target) {
}


