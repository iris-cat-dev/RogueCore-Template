#include "MeleeAttackComponent.h"

UMeleeAttackComponent::UMeleeAttackComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HitValidator = nullptr;
    this->CenterOnTarget = true;
    this->AttackOrigin = EAttackOrigin::CenterOntarget;
    this->RequireLineOfSight = true;
}

UAnimMontage* UMeleeAttackComponent::SelectMontage_Implementation() const {
    return NULL;
}

void UMeleeAttackComponent::OnPerformAttack(FName Name) {
}

void UMeleeAttackComponent::OnMontageEnded(UAnimMontage* Montage, bool interrupted) {
}

FVector UMeleeAttackComponent::GetTargetLocation() const {
    return FVector{};
}


