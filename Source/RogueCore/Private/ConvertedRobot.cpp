#include "ConvertedRobot.h"
#include "Components/AudioComponent.h"
#include "Components/PointLightComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
#include "Components/SpotLightComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "DamageComponent.h"
#include "EnemyComponent.h"
#include "HitscanComponent.h"
#include "Net/UnrealNetwork.h"
#include "OutlineComponent.h"
#include "PawnStatsComponent.h"
#include "SingleUsableComponent.h"

AConvertedRobot::AConvertedRobot(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EnemyComponent = CreateDefaultSubobject<UEnemyComponent>(TEXT("Enemy"));
    this->PawnStats = CreateDefaultSubobject<UPawnStatsComponent>(TEXT("PawnStats"));
    this->Outline = CreateDefaultSubobject<UOutlineComponent>(TEXT("Outline"));
    this->HitScan = CreateDefaultSubobject<UHitscanComponent>(TEXT("HitScan"));
    this->usable = CreateDefaultSubobject<USingleUsableComponent>(TEXT("usable"));
    this->TurretRoot = CreateDefaultSubobject<USceneComponent>(TEXT("TurretRoot"));
    this->TurretMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("TurretMesh"));
    this->MuzzleFlash = CreateDefaultSubobject<UPointLightComponent>(TEXT("MuzzleFlash"));
    this->SpotLight = CreateDefaultSubobject<USpotLightComponent>(TEXT("FloodLight"));
    this->LightCone = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LightCone"));
    this->LaserBeam = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LaserBeam"));
    this->ShieldRoot = CreateDefaultSubobject<USceneComponent>(TEXT("ShieldRoot"));
    this->InnerShield = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("InnerShield"));
    this->OuterShield = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("OuterShieldLayer"));
    this->PulsatingSoundComp = CreateDefaultSubobject<UAudioComponent>(TEXT("PulsatingSoundComponent"));
    this->LaserWarningSound = nullptr;
    this->Damage = CreateDefaultSubobject<UDamageComponent>(TEXT("DamageComponent"));
    this->ForceSit = false;
    this->LaserSound = nullptr;
    this->LastPowerDownSound = nullptr;
    this->PowerUpSound = nullptr;
    this->IntroductionTime = 1.00f;
    this->IsIntroducing = false;
    this->IntroductionDone = false;
    this->IsGrowingShield = false;
    this->AimDownwardsOffset = 40.00f;
    this->BigShieldScale = 4.50f;
    this->SmallShieldScale = 1.20f;
    this->ShieldGrowthRate = 1.00f;
    this->LerpExp = 0.20f;
    this->MinimumShieldSize = 0.20f;
    this->TargetShieldSize = 0.00f;
    this->IdleRotationSpeed = 0.00f;
    this->LaserScaleRate = 0.00f;
    this->MaxSearchAngle = 45.00f;
    this->DoSpecialWhenEnemy = true;
    this->DoSpecialWhenFriendly = true;
    this->PerfectTrackingWhenEnemy = true;
    this->PerfectTrackingWhenFriendly = true;
    this->ReplaceBurstAttack = false;
    this->GrenadeFireSound = nullptr;
    this->GrenadeFireParticle = nullptr;
    this->IsFiring = false;
    this->TurretSpinSpeed = 0.00f;
    this->SpawnParasiteNumer = 2;
    this->MaxParasiteSlots = 3;
    this->ChanceToSpawnParasite = 0.00f;
    this->ParasiteClass = nullptr;
    this->SpinTurret = false;
    this->SpecialAttackProjectile = nullptr;
    this->FriendlyProjectile = nullptr;
    this->HasLockedOn = false;
    this->TargetingSound = nullptr;
    this->GrenadeShotAnimation = nullptr;
    this->LockOnTime = 0.50f;
    this->ShootSound = nullptr;
    this->ShootSoundFadeout = 0.20f;
    this->ShootSoundInstance = nullptr;
    this->ShootSoundTail = nullptr;
    this->MuzzleEffect = nullptr;
    this->TracerEffect = nullptr;
    this->GunRange = 0.00f;
    this->FireRate = 0.00f;
    this->GrenadeFireRate = 0.00f;
    this->BurstCooldown = 0.00f;
    this->MinBurst = 0;
    this->MaxBurst = 0;
    this->TurretLerpSpeed = 3.00f;
    this->DamageWhenFriendly = 1.00f;
    this->FriendlyFriendlyFireMultiplier = 1.00f;
    this->StartedSpecialAttack = false;
    this->TeamState = ERobotState::Enemy;
    this->IsWalking = false;
    this->IsDoingSpecialAttack = false;
    this->TurretRotation = nullptr;
    this->CurrentTarget = nullptr;
    this->InnerShield->SetupAttachment(ShieldRoot);
    this->LaserBeam->SetupAttachment(TurretMesh);
    this->LightCone->SetupAttachment(TurretMesh);
    this->MuzzleFlash->SetupAttachment(TurretMesh);
    this->OuterShield->SetupAttachment(InnerShield);
    this->PulsatingSoundComp->SetupAttachment(mesh);
    this->ShieldRoot->SetupAttachment(mesh);
    this->SpotLight->SetupAttachment(TurretMesh);
    this->TurretMesh->SetupAttachment(TurretRoot);
    this->TurretRoot->SetupAttachment(mesh);
}

void AConvertedRobot::UpdateGunsInsideTerrain() {
}

void AConvertedRobot::StartBossFight() {
}

void AConvertedRobot::ParasiteDamaged(float aDamage) {
}

void AConvertedRobot::OnWeaponsFired(const FVector& aHitResult) {
}

void AConvertedRobot::OnUsed(APlayerCharacter* aUser, EInputKeys Key) {
}

void AConvertedRobot::OnSeePawn(APawn* aPawn) {
}

void AConvertedRobot::OnRep_TeamState() {
}

void AConvertedRobot::OnRep_Target() {
}

void AConvertedRobot::OnRep_SpinTurret() {
}

void AConvertedRobot::OnRep_IsIntroducting() {
}

void AConvertedRobot::OnRep_IsFiring() {
}

void AConvertedRobot::OnRep_IsDoingSpecialAttack() {
}

void AConvertedRobot::OnParasiteDeath(AActor* aParasiteEnemy) {
}

ERobotState AConvertedRobot::GetTeamState() const {
    return ERobotState::Enemy;
}

FVector AConvertedRobot::GetPlayerMediumPoint() const {
    return FVector{};
}

TArray<AActor*> AConvertedRobot::GetParasites() const {
    return TArray<AActor*>();
}

bool AConvertedRobot::GetHasPoweredDown() const {
    return false;
}

void AConvertedRobot::DestroyAttatchPoint_Implementation(USceneComponent* aComponent) {
}

void AConvertedRobot::CannonEffects_Implementation() {
}




void AConvertedRobot::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AConvertedRobot, ForceSit);
    DOREPLIFETIME(AConvertedRobot, IsIntroducing);
    DOREPLIFETIME(AConvertedRobot, IntroductionDone);
    DOREPLIFETIME(AConvertedRobot, IsGrowingShield);
    DOREPLIFETIME(AConvertedRobot, TargetShieldSize);
    DOREPLIFETIME(AConvertedRobot, IsFiring);
    DOREPLIFETIME(AConvertedRobot, Parasites);
    DOREPLIFETIME(AConvertedRobot, SpinTurret);
    DOREPLIFETIME(AConvertedRobot, HasLockedOn);
    DOREPLIFETIME(AConvertedRobot, StartedSpecialAttack);
    DOREPLIFETIME(AConvertedRobot, TeamState);
    DOREPLIFETIME(AConvertedRobot, IsWalking);
    DOREPLIFETIME(AConvertedRobot, IsDoingSpecialAttack);
    DOREPLIFETIME(AConvertedRobot, CurrentTarget);
}


