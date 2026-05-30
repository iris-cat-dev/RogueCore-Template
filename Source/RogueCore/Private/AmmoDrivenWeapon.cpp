#include "AmmoDrivenWeapon.h"
#include "AmmoDriveWeaponAggregator.h"
#include "DamageListenerComponent.h"
#include "Net/UnrealNetwork.h"
#include "WeaponTagContainerComponent.h"

AAmmoDrivenWeapon::AAmmoDrivenWeapon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WeaponTags = CreateDefaultSubobject<UWeaponTagContainerComponent>(TEXT("WeaponTags"));
    this->DamageListener = CreateDefaultSubobject<UDamageListenerComponent>(TEXT("DamageListener"));
    this->WeaponFire = nullptr;
    this->Aggregator = CreateDefaultSubobject<UAmmoDriveWeaponAggregator>(TEXT("Aggregator"));
    this->LoopFireAnimation = false;
    this->OverHeatOnNoAmmo = false;
    this->LoopFireAnimationBlendoutTime = 0.25f;
    this->FP_FireAnimation = nullptr;
    this->TP_FireAnimation = nullptr;
    this->FP_ReloadAnimation = nullptr;
    this->FP_ReloadAnimation_Empty = nullptr;
    this->TP_ReloadAnimation = nullptr;
    this->TP_ReloadAnimation_Empty = nullptr;
    this->WPN_Fire = nullptr;
    this->WPN_FireLastBullet = nullptr;
    this->WPN_Reload = nullptr;
    this->WPN_ReloadEmpty = nullptr;
    this->WPN_Reload_TP = nullptr;
    this->MuzzleParticles = nullptr;
    this->TPMuzzleParticles = nullptr;
    this->UseTriggeredMuzzleParticles = false;
    this->CasingParticles = nullptr;
    this->UseTriggeredCasingParticleSystem = false;
    this->MuzzleFlashLight = nullptr;
    this->FireSound = nullptr;
    this->RicochetSound = nullptr;
    this->RicochetParticle = nullptr;
    this->FireSoundDelayToTail = -1.00f;
    this->FireSoundTail = nullptr;
    this->IsFireSoundTail2D = false;
    this->FireForceFeedbackEffect = nullptr;
    this->FireSoundFadeDuration = 0.20f;
    this->ReloadSound = nullptr;
    this->BulletsRemainingForNearEmptySound = 0;
    this->BulletsRemainingNearEmptyVolumeCurve = nullptr;
    this->PlayNearEmptySoundsIn3D = false;
    this->PlayClipReachesZeroSoundsIn3D = true;
    this->PlayEmptySoundsIn3D = true;
    this->NearEmptySound = nullptr;
    this->ClipReachesZeroSound = nullptr;
    this->DryFireSound = nullptr;
    this->ShoutShotFired = nullptr;
    this->ShoutOutOfAmmo = nullptr;
    this->ShoutReloading = nullptr;
    this->MaxAmmo = 0;
    this->clipSize = 0;
    this->ShotCost = 1;
    this->RateOfFire = 0.00f;
    this->BurstCount = 0;
    this->BurstCycleTime = 20.00f;
    this->ReloadDuration = 0.00f;
    this->CancelReloadOnShootTimeFromEnd = 0.00f;
    this->ManualHeatReductionAmmo = 0;
    this->FireInputBufferTime = 0.00f;
    this->AutoReloadDuration = 0.00f;
    this->AutoReloadCompleteCue = nullptr;
    this->SupplyStatusWeight = 1.00f;
    this->CycleTimeLeft = 0.00f;
    this->UseCustomReloadDelay = false;
    this->CustomReloadDelay = 0.00f;
    this->ReloadTimeLeft = 0.00f;
    this->AutomaticReload = false;
    this->CanReload = false;
    this->HoldToFirePercentOfFireRatePenalty = -1.00f;
    this->ApplyRecoilAtEndOfBurst = false;
    this->EndOfBurstRecoilMultiplier = 1.00f;
    this->HasAutomaticFire = false;
    this->IsFiring = false;
    this->OverheatOnReload = false;
    this->ManualHeatReductionOnReload = false;
    this->MaxManualHeatReductionCharges = 0;
    this->ManualHeatReductionValue = 0.00f;
    this->WeaponState = EAmmoWeaponState::Equipping;
    this->MaxAngleForSuppressiveFire = 65.00f;
    this->HasRejoinedInitialized = false;
}


void AAmmoDrivenWeapon::UpdateHoldToFire() {
}

void AAmmoDrivenWeapon::TransferAmmoToClip(int32 Amount) {
}

void AAmmoDrivenWeapon::Server_UpdateClipCount_Implementation(const FAmmoValue& Val) {
}

void AAmmoDrivenWeapon::Server_UpdateAmmoCount_Implementation(const FAmmoValue& Val) {
}

void AAmmoDrivenWeapon::Server_StopReload_Implementation(float blendOutTime) {
}

void AAmmoDrivenWeapon::Server_SetSlowedEnemiesOnScreen_Implementation(const TArray<TWeakObjectPtr<AFSDPawn>>& PawnsToSlow) {
}

void AAmmoDrivenWeapon::Server_ReloadWeapon_Implementation(bool isFullyEmpty) {
}

void AAmmoDrivenWeapon::Server_PlayWeaponEmptySound_3D_Implementation() {
}

void AAmmoDrivenWeapon::Server_PlayBurstFire_Implementation(uint8 shotCount) {
}

void AAmmoDrivenWeapon::Server_Gunsling_Implementation(uint8 Index) {
}

void AAmmoDrivenWeapon::ResupplyToPercent(float percentage) {
}

void AAmmoDrivenWeapon::ResupplyAmmo(int32 Amount) {
}





void AAmmoDrivenWeapon::OnWeaponFireEnded() {
}

void AAmmoDrivenWeapon::OnWeaponFired(const FVector& Location) {
}

void AAmmoDrivenWeapon::OnTagBonusChanged() {
}

void AAmmoDrivenWeapon::OnRicochet(const FVector& Origin, const FVector& Location, const FVector& Normal) {
}

void AAmmoDrivenWeapon::OnRep_ReserveCount() {
}

void AAmmoDrivenWeapon::OnRep_IsFiring() {
}

void AAmmoDrivenWeapon::OnRep_ClipCount() {
}

void AAmmoDrivenWeapon::MoveAmmoFromReserve(int32 Amount) {
}

void AAmmoDrivenWeapon::MoveAmmoBackToReserve(int32 Amount) {
}

bool AAmmoDrivenWeapon::IsClipFull() const {
    return false;
}

void AAmmoDrivenWeapon::InstantlyReload() {
}


void AAmmoDrivenWeapon::Client_SetAmmoScalePercent_Implementation(float Percent) {
}

void AAmmoDrivenWeapon::Client_SetAmmo_Implementation(float percentage) {
}

void AAmmoDrivenWeapon::Client_ResupplyAmmo_Implementation(int32 count) {
}

void AAmmoDrivenWeapon::Client_RefillAmmo_Implementation(float percentage) {
}

void AAmmoDrivenWeapon::Client_InitAmmo_Implementation(int32 NewClipSize, int32 reserveCapacity) {
}

void AAmmoDrivenWeapon::All_StopReload_Implementation(float blendOutTime) {
}

void AAmmoDrivenWeapon::All_StartReload_Implementation(bool isFullyEmpty) {
}

void AAmmoDrivenWeapon::All_PlayWeaponEmptySound_3D_Implementation() {
}

void AAmmoDrivenWeapon::All_PlayBurstFire_Implementation(uint8 shotCount) {
}

void AAmmoDrivenWeapon::All_Gunsling_Implementation(uint8 Index) {
}

void AAmmoDrivenWeapon::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AAmmoDrivenWeapon, ReserveCount);
    DOREPLIFETIME(AAmmoDrivenWeapon, ClipCount);
    DOREPLIFETIME(AAmmoDrivenWeapon, ManualHeatReductionAmmo);
    DOREPLIFETIME(AAmmoDrivenWeapon, IsFiring);
    DOREPLIFETIME(AAmmoDrivenWeapon, HasRejoinedInitialized);
}


