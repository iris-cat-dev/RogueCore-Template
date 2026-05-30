#include "InstancedStatusEffectTriggerComponent.h"

UInstancedStatusEffectTriggerComponent::UInstancedStatusEffectTriggerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->collider = nullptr;
    this->RemoveStatusEffectOnEndOverlap = true;
}

void UInstancedStatusEffectTriggerComponent::SetCollider(UPrimitiveComponent* Primitive) {
}

void UInstancedStatusEffectTriggerComponent::OnOverlapEnd(AActor* MyActor, AActor* OtherActor) {
}

void UInstancedStatusEffectTriggerComponent::OnOverlapBegin(AActor* MyActor, AActor* OtherActor) {
}

void UInstancedStatusEffectTriggerComponent::OnComponentOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UInstancedStatusEffectTriggerComponent::OnComponentOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void UInstancedStatusEffectTriggerComponent::AddActorToIgnoreList(AActor* Actor) {
}


