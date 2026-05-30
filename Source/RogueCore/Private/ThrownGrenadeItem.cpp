#include "ThrownGrenadeItem.h"
#include "GrenadeCountAggregator.h"
#include "Net/UnrealNetwork.h"

AThrownGrenadeItem::AThrownGrenadeItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GrenadeMeshInstance = nullptr;
    this->CookSound = nullptr;
    this->Aggregator = CreateDefaultSubobject<UGrenadeCountAggregator>(TEXT("GrenadeAggregator"));
    this->FPAnimInstance = nullptr;
    this->TPAnimInstance = nullptr;
    this->CharacterAnimationSet = nullptr;
    this->DefaultGrenadeAnimationSet = nullptr;
    this->GrenadeClass = nullptr;
    this->ThrowAngle = 0.00f;
    this->GrenadeCooldownRemaining = 0.00f;
    this->MaxGrenades = 0;
    this->Grenades = 0;
    this->State = EThrownGrenadeItemState::NotAvailable;
    this->CooldownIsDone = true;
    this->HasRejoinedInitialized = false;
}


void AThrownGrenadeItem::SetRemainingCooldown(float CoolDown) {
}

void AThrownGrenadeItem::Server_ThrowGrenade_Implementation(const FVector& StartLocation, const float& cookTime) {
}

void AThrownGrenadeItem::Server_SetState_Implementation(const EThrownGrenadeItemState itemState) {
}

void AThrownGrenadeItem::Server_Resupply_Implementation(float percentage) {
}

void AThrownGrenadeItem::Server_PrepareNewThrow_Implementation() {
}

void AThrownGrenadeItem::ResupplyGrenadesAmount(const int32& Amount) {
}

void AThrownGrenadeItem::ResupplyGrenades(float percentage) {
}

TArray<FVector> AThrownGrenadeItem::PredictGrenadePath() {
    return TArray<FVector>();
}


void AThrownGrenadeItem::OnRep_State() {
}

void AThrownGrenadeItem::OnRep_GrenadeCount() {
}

void AThrownGrenadeItem::OnRep_GrenadeClass() {
}


void AThrownGrenadeItem::NotifyThrownGrenadeSucceeded_Implementation() {
}

void AThrownGrenadeItem::NotifyThrownGrenadeReturned_Implementation() {
}

void AThrownGrenadeItem::NotifyThrownGrenadeFailed_Implementation() {
}

float AThrownGrenadeItem::GetGrenadeThrowVelocity() const {
    return 0.0f;
}

FRotator AThrownGrenadeItem::GetGrenadeThrowRotation() const {
    return FRotator{};
}

float AThrownGrenadeItem::GetGrenadeGravity() const {
    return 0.0f;
}

float AThrownGrenadeItem::GetGrenadeDuration() const {
    return 0.0f;
}

void AThrownGrenadeItem::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AThrownGrenadeItem, GrenadeClass);
    DOREPLIFETIME(AThrownGrenadeItem, Grenades);
    DOREPLIFETIME(AThrownGrenadeItem, State);
    DOREPLIFETIME(AThrownGrenadeItem, CooldownIsDone);
    DOREPLIFETIME(AThrownGrenadeItem, HasRejoinedInitialized);
}


