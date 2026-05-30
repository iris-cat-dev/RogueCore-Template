#include "EnemyAttackDescription.h"

FEnemyAttackDescription::FEnemyAttackDescription() {
    this->Range = EEnemyAttackType::Melee;
    this->DamageType = EDamageType::Fire;
    this->Name = FText::GetEmpty();
}

