#include "DamageFunctionLibrary.h"

UDamageFunctionLibrary::UDamageFunctionLibrary() {
}

void UDamageFunctionLibrary::SetPhysicalMaterialOnHit(UFSDPhysicalMaterial* PhysMat, FHitResult& Hit) {
}

bool UDamageFunctionLibrary::IsGibbedDeath(const TArray<UDamageTag*>& Tags) {
    return false;
}

bool UDamageFunctionLibrary::IsExplosiveDeath(UObject* WorldContext, UPawnStatsComponent* PawnStats, const TArray<UDamageTag*>& Tags) {
    return false;
}

bool UDamageFunctionLibrary::IsCorrosiveDeath(UDamageClass* DamageClass, const TArray<UDamageTag*>& Tags) {
    return false;
}

bool UDamageFunctionLibrary::IsCookedDeath(const TArray<UDamageTag*>& Tags) {
    return false;
}

bool UDamageFunctionLibrary::IsBurnDeath(UDamageClass* DamageClass, const TArray<UDamageTag*>& Tags) {
    return false;
}

FVector UDamageFunctionLibrary::GetForceFromDamageImpulse(const AActor* Target, const FDamageData& DamageData) {
    return FVector{};
}

UDamageImpulse* UDamageFunctionLibrary::GetDamageImpulse(const FDamageData& DamageData) {
    return NULL;
}

int32 UDamageFunctionLibrary::FindClosestBoneIndex(const USkeletalMeshComponent* mesh, const FVector& Location, ULimbDismembermentList* dismembermentList, float MaxDistance) {
    return 0;
}

FName UDamageFunctionLibrary::FindClosestBone(const USkeletalMeshComponent* mesh, const FVector& Location, ULimbDismembermentList* dismembermentList, float MaxDistance) {
    return NAME_None;
}

AItem* UDamageFunctionLibrary::FindCharacterOwnedItem(AActor* InDamageCauser) {
    return NULL;
}

bool UDamageFunctionLibrary::AnyListenerDataHasDamageTypes(const TArray<FDamageListenerData>& Data, const TArray<UDamageClass*>& DamageClasses) {
    return false;
}

bool UDamageFunctionLibrary::AllListenerDataAreDamageTypes(const TArray<FDamageListenerData>& Data, const TArray<UDamageClass*>& DamageClasses) {
    return false;
}


