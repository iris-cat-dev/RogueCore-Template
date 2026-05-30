#include "Projectile.h"
#include "FSDProjectileMovementComponent.h"
#include "Net/UnrealNetwork.h"
#include "ProjectileHomingTargetComponent.h"
#include "Templates/SubclassOf.h"

AProjectile::AProjectile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GravityModifier = nullptr;
    this->VelocityModifier = nullptr;
    this->UseArmorDamageBoneCheck = false;
    this->MovementComponent = CreateDefaultSubobject<UFSDProjectileMovementComponent>(TEXT("ProjectileComponent"));
    this->ProjectileHomingTargetComponent = CreateDefaultSubobject<UProjectileHomingTargetComponent>(TEXT("HomingTargetComponent"));
    this->CallPenetrateOnOverlap = false;
    this->CallImpactOnInTerrain = false;
    this->BlockReplicationToActor = nullptr;
    this->bIsDamageEnabled = true;
}

AProjectileBase* AProjectile::SpawnProjectileFromSelf(UObject* WorldContextObject, TSubclassOf<AProjectileBase> ProjectileClass, FVector Origin, FRotator velocityDirection) {
    return NULL;
}

AProjectileBase* AProjectile::SpawnProjectile(UObject* WorldContextObject, TSubclassOf<AProjectileBase> ProjectileClass, APawn* projectileOwner, FVector Origin, FRotator velocityDirection) {
    return NULL;
}

AProjectileBase* AProjectile::SpawnBallisticProjectile(UObject* WorldContextObject, TSubclassOf<AProjectile> ProjectileClass, APawn* projectileOwner, FVector Origin, FVector Velocity) {
    return NULL;
}

void AProjectile::SetHomingTargetComponent(USceneComponent* HomingTargetComponent, float Delay) {
}

void AProjectile::SetDamageEnabled(const bool IsEnabled) {
}

void AProjectile::Server_DisableHoming_Implementation() {
}

void AProjectile::OnRep_State(const FProjectileState& oldState) {
}

void AProjectile::OnPenetration(const FHitResult& HitResult) {
}

void AProjectile::OnImpact(const FHitResult& HitResult) {
}

void AProjectile::OnBounce(const FHitResult& ImpactResult, const FVector& ImpactVelocity) {
}

void AProjectile::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool fromSweep, const FHitResult& SweepResult) {
}

bool AProjectile::IsDamageEnabled() const {
    return false;
}

UFSDPhysicalMaterial* AProjectile::FindBoneIndexFromArmor(const FHitResult& HitResult, int32& outBoneIndex) const {
    return NULL;
}

void AProjectile::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AProjectile, State);
}


