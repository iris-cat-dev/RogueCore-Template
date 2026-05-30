#include "EnemyContactSlowdownComponent.h"

UEnemyContactSlowdownComponent::UEnemyContactSlowdownComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StatusEffect = nullptr;
}

void UEnemyContactSlowdownComponent::OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UEnemyContactSlowdownComponent::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool fromSweep, const FHitResult& SweepResult) {
}


