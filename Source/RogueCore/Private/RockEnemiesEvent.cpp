#include "RockEnemiesEvent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent

ARockEnemiesEvent::ARockEnemiesEvent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PowerUpClass = nullptr;
    this->PowerUpGenerationTime = 10.00f;
    this->mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("mesh"));
    this->MuzzleEffect = nullptr;
    this->PowerUpsPerGeneration = 1;
    this->GruntPointsAward = 1;
    this->TankPointsAward = 2;
    this->RockEnemies = nullptr;
    this->mesh->SetupAttachment(RootComponent);
}

void ARockEnemiesEvent::StopPowerupGeneration() {
}

void ARockEnemiesEvent::StartPowerupGeneration() {
}

void ARockEnemiesEvent::SpawnRockEnemies(float Difficulty, const TArray<FVector>& Locations) {
}

void ARockEnemiesEvent::ShowFireEffects_Implementation(int32 selectedBone) {
}

void ARockEnemiesEvent::RockEnemySpawned(APawn* spawnedEnemy) {
}

void ARockEnemiesEvent::RockEnemyDied(UHealthComponentBase* Health) {
}




