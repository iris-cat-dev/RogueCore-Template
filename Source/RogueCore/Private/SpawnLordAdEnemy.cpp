#include "SpawnLordAdEnemy.h"
#include "GrabberComponent.h"
#include "Net/UnrealNetwork.h"

ASpawnLordAdEnemy::ASpawnLordAdEnemy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->IsDocked = false;
    this->IsHomeless = false;
    this->Grabber = CreateDefaultSubobject<UGrabberComponent>(TEXT("Grabber"));
    this->Boss = nullptr;
}

void ASpawnLordAdEnemy::Undock() {
}

void ASpawnLordAdEnemy::OnDamageTaken(float damageTaken) {
}

bool ASpawnLordAdEnemy::GrabPlayer(AActor* Target) {
    return false;
}

void ASpawnLordAdEnemy::GoHome() {
}

void ASpawnLordAdEnemy::Dock() {
}

void ASpawnLordAdEnemy::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASpawnLordAdEnemy, IsDocked);
    DOREPLIFETIME(ASpawnLordAdEnemy, IsHomeless);
}


