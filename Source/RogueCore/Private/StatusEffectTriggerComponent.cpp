#include "StatusEffectTriggerComponent.h"
#include "Templates/SubclassOf.h"

UStatusEffectTriggerComponent::UStatusEffectTriggerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->collider = nullptr;
    this->RemoveStatusEffectOnEndOverlap = true;
}

void UStatusEffectTriggerComponent::SetCollider(UPrimitiveComponent* Primitive) {
}

void UStatusEffectTriggerComponent::OnOverlapEnd(AActor* MyActor, AActor* OtherActor) {
}

void UStatusEffectTriggerComponent::OnOverlapBegin(AActor* MyActor, AActor* OtherActor) {
}

void UStatusEffectTriggerComponent::OnComponentOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UStatusEffectTriggerComponent::OnComponentOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

TArray<TSubclassOf<UStatusEffect>> UStatusEffectTriggerComponent::GetStatusEffects() const {
    return TArray<TSubclassOf<UStatusEffect>>();
}

void UStatusEffectTriggerComponent::AddStatusEffect(TSubclassOf<UStatusEffect> effect) {
}

void UStatusEffectTriggerComponent::AddLingeringStatusEffect(TSubclassOf<UStatusEffect> effect) {
}

void UStatusEffectTriggerComponent::AddActorToIgnoreList(AActor* Actor) {
}


