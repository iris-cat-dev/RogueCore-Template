#include "BasicPistol.h"

ABasicPistol::ABasicPistol(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BurstArmorDamageMultiplier = 1.00f;
    this->ConsecutiveHitsDamageBonus = 0.00f;
    this->ConsecutiveHitsMaxBonus = 6.00f;
}

void ABasicPistol::OnTargetDamaged(UHealthComponentBase* Health, float Amount, UPrimitiveComponent* HitComponent, UFSDPhysicalMaterial* PhysicalMaterial) {
}

void ABasicPistol::OnHit(const FHitResult& HitResult, bool isAlwaysPenetrated) {
}


