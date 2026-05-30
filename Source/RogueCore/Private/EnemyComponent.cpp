#include "EnemyComponent.h"

UEnemyComponent::UEnemyComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Family = nullptr;
    this->KillShout = nullptr;
    this->EnemyID = nullptr;
    this->KillStat = nullptr;
}

UEnemyID* UEnemyComponent::GetID() const {
    return NULL;
}

FText UEnemyComponent::GetFamilyName() const {
    return FText::GetEmpty();
}

UTexture2D* UEnemyComponent::GetFamilyIcon() const {
    return NULL;
}


