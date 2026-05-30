#include "CoreSpawnEnemyBase.h"
#include "Perception/PawnSensingComponent.h"
#include "DeathFXComponent.h"
#include "EnemyComponent.h"
#include "HitReactionComponent.h"
#include "OutlineComponent.h"
#include "PawnAlertComponent.h"
#include "PawnStatsComponent.h"

ACoreSpawnEnemyBase::ACoreSpawnEnemyBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LimitRagdollSpeed = false;
    this->MaxRagdollSpeed = 1000.00f;
    this->PawnStats = CreateDefaultSubobject<UPawnStatsComponent>(TEXT("PawnStats"));
    this->HitReactions = CreateDefaultSubobject<UHitReactionComponent>(TEXT("HitReactions"));
    this->PawnSensing = CreateDefaultSubobject<UPawnSensingComponent>(TEXT("PawnSensing"));
    this->Enemy = CreateDefaultSubobject<UEnemyComponent>(TEXT("Enemy"));
    this->Outline = CreateDefaultSubobject<UOutlineComponent>(TEXT("Outline"));
    this->PawnAlert = CreateDefaultSubobject<UPawnAlertComponent>(TEXT("PawnAlert"));
    this->Death = CreateDefaultSubobject<UDeathFXComponent>(TEXT("Death"));
}


