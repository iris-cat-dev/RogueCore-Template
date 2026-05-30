#include "AbilityDrone.h"
#include "Components/AudioComponent.h"
#include "DamageNumberAggregator.h"
#include "Net/UnrealNetwork.h"

AAbilityDrone::AAbilityDrone(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MovementAudio = CreateDefaultSubobject<UAudioComponent>(TEXT("MoveAudio"));
    this->DamageNumberAggregator = CreateDefaultSubobject<UDamageNumberAggregator>(TEXT("DamageNumberAggregator"));
    this->ShotCounter = 0;
    this->BehaviourTree = nullptr;
    this->ProjectileClass = nullptr;
    this->AttackRange = 1000.00f;
    this->AttackInterval = 1.00f;
    this->AllowAutomaticRevive = false;
    this->BurstSize = 5;
    this->State = EAbilityDroneState::Disabled;
    this->ReviveSearchRange = 2000.00f;
    this->RevivePerk = nullptr;
    this->MovementAudio->SetupAttachment(RootComponent);
}

void AAbilityDrone::SetState(EAbilityDroneState NewState) {
}

void AAbilityDrone::Server_SecondaryUsed_Implementation(const FDroneControllerUseInfo& Info) {
}

void AAbilityDrone::Server_PrimaryUsed_Implementation(const FDroneControllerUseInfo& Info) {
}

void AAbilityDrone::SearchPulse() {
}

void AAbilityDrone::OnRep_TeleportLocation() {
}

void AAbilityDrone::OnRep_State(EAbilityDroneState oldState) {
}

void AAbilityDrone::OnRep_ShotCounter() {
}

void AAbilityDrone::ControllerSecondaryUsed(const FDroneControllerUseInfo& Info) {
}

void AAbilityDrone::ControllerPrimaryUsed(const FDroneControllerUseInfo& Info) {
}

void AAbilityDrone::All_TeleportDrone_Implementation(FVector Location, FRotator Rotation) {
}

void AAbilityDrone::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AAbilityDrone, TeleportLocation);
    DOREPLIFETIME(AAbilityDrone, ShotCounter);
    DOREPLIFETIME(AAbilityDrone, State);
}


