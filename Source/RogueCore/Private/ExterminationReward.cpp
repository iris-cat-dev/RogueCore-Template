#include "ExterminationReward.h"

UExterminationReward::UExterminationReward() {
    this->Resource = nullptr;
    this->AwardSize = 1.00f;
}

void UExterminationReward::OnEnemyKilled(const FGameplayTagContainer& GameplayTags, AActor* killedEnemy) {
}


