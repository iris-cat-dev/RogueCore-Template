#include "ProjectileBase.h"
#include "Components/SphereComponent.h"
#include "Net/UnrealNetwork.h"

AProjectileBase::AProjectileBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<UShapeComponent>(TEXT("SphereComponent"));
    this->ImpactDamage = nullptr;
    this->CollisionComponent = static_cast<UShapeComponent*>(RootComponent);
    this->WhizbySound = nullptr;
    this->LifeSpan = 60.00f;
    this->VelocityMultiplier = 1.00f;
    this->WhizByCooldown = 0.30f;
    this->WhizByStartDistance = 500.00f;
    this->GravityMultiplier = 1.00f;
    this->DestroyedByBarrier = true;
    this->SeparateTerrainImpactCheck = false;
    this->EOnImpactBehaviour = EOnProjectileImpactBehaviourEnum::ClientAuthoritative;
    this->IsSpawnedFromWeapon = false;
    this->AffectedByDifficultySpeedModifier = false;
    this->SetInitialSpeedToMaxSpeed = false;
    this->AutoDisableCollisionOnImpact = true;
    this->Exploded = false;
    this->DoOnImpact = false;
    this->DoOnImpact2 = false;
    this->DoOnImpact3 = false;
    this->DoOnSpawnVar = false;
    this->IsDorment = false;
}

UTerrainMaterial* AProjectileBase::TryGetTerrainMaterial() const {
    return nullptr;
}

void AProjectileBase::StopMovement() {
}

void AProjectileBase::Server_SetState_Implementation(FVector_NetQuantize position, FVector_NetQuantize Velocity) {
}

void AProjectileBase::Server_Penetrated_Implementation(const FProjectileImpact& Impact) {
}

void AProjectileBase::Server_Impacted_Implementation(const FProjectileImpact& Impact) {
}


void AProjectileBase::OnRep_ProjectileImpact() {
}

void AProjectileBase::OnRep_IsDorment(const bool wasDorment) {
}





void AProjectileBase::InitState(const FVector& ShootDirection, const FVector& initialBonusVelocity) {
}

void AProjectileBase::InitComponents() {
}

void AProjectileBase::IgnoreCollision(UPrimitiveComponent* otherCollider) {
}

bool AProjectileBase::HasImpactAuthority() const {
    return false;
}

float AProjectileBase::GetGameTimeSinceActivation() const {
    return 0.0f;
}

UDamageComponent* AProjectileBase::GetDamageComponent_Implementation() {
    return NULL;
}

int32 AProjectileBase::GetBoneIndex() const {
    return 0;
}


void AProjectileBase::DisableProjectileCollision(AProjectileBase* projectileA, AProjectileBase* projectileB) {
}

void AProjectileBase::DisableAndDestroy() {
}

UFSDPhysicalMaterial* AProjectileBase::DamageArmor(UDamageComponent* DamageComponent, const FHitResult& HitResult) {
    return NULL;
}


void AProjectileBase::Client_DrawServersDebugPath_Implementation(FVector Location) {
}

void AProjectileBase::Activate(AActor* owningActor, FVector Origin, FVector_NetQuantizeNormal Direction, FVector_NetQuantizeNormal initialBonusVelocity) {
}

void AProjectileBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AProjectileBase, ProjectileImpact);
    DOREPLIFETIME(AProjectileBase, IsSpawnedFromWeapon);
    DOREPLIFETIME(AProjectileBase, IsDorment);
}


