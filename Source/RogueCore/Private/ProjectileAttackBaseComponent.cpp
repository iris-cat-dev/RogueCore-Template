#include "ProjectileAttackBaseComponent.h"

UProjectileAttackBaseComponent::UProjectileAttackBaseComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SocketName = TEXT("RangedAttack");
    this->RotationHandling = EProjectileAttackRotationType::NoTarget_ActorForward;
    this->FinalValidationCheck = nullptr;
    this->ProjectilesIgnoreEachOther = false;
}

bool UProjectileAttackBaseComponent::TriggerMontage(AActor* Target) {
    return false;
}

void UProjectileAttackBaseComponent::SpawnProjectile() {
}

UAnimMontage* UProjectileAttackBaseComponent::SelectMontage_Implementation() const {
    return NULL;
}

void UProjectileAttackBaseComponent::OnPerformAttack() {
}

void UProjectileAttackBaseComponent::OnMontageEnded(UAnimMontage* Montage, bool interrupted) {
}

void UProjectileAttackBaseComponent::MulticastProjectileFired_Implementation() {
}

void UProjectileAttackBaseComponent::CancelMontage() {
}

void UProjectileAttackBaseComponent::AddProjectile(UProjectileAttack* Projectile) {
}


