#include "HealthComponentBase.h"

UHealthComponentBase::UHealthComponentBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FriendlyFireModifier = 1.00f;
    this->ShowLaserPointMarkerWhenDead = false;
    this->canTakeDamage = true;
    this->PassthroughTemperatureDamage = false;
}

void UHealthComponentBase::TrySetCanTakeDamage(bool NewCanTakeDamage) {
}

void UHealthComponentBase::TakeDamageSimple(float damageAmount, AActor* DamageCauser, int32 CritLevel, UDamageClass* DamageClass) {
}

void UHealthComponentBase::SetHealthDirectly(float newHealthValue) {
}

void UHealthComponentBase::SetCanTakeDamageIsLocked(bool IsLocked) {
}

void UHealthComponentBase::SetCanTakeDamage(bool NewCanTakeDamage) {
}

void UHealthComponentBase::Kill(AActor* DamageCauser) {
}

bool UHealthComponentBase::IsInvulnerable() const {
    return false;
}

bool UHealthComponentBase::IsDead() const {
    return false;
}

bool UHealthComponentBase::IsAlive() const {
    return false;
}

float UHealthComponentBase::Heal(float Amount) {
    return 0.0f;
}

bool UHealthComponentBase::GetShowHealthBar() const {
    return false;
}

float UHealthComponentBase::GetHealthPct() const {
    return 0.0f;
}

TScriptInterface<IHealth> UHealthComponentBase::GetHealthComponentForCollider(UPrimitiveComponent* Primitive) const {
    return NULL;
}

FVector UHealthComponentBase::GetHealthBarWorldOffset() const {
    return FVector{};
}

float UHealthComponentBase::GetHealth() const {
    return 0.0f;
}

UFXSystemAsset* UHealthComponentBase::GetGenericImpactParticles() const {
    return NULL;
}

bool UHealthComponentBase::GetCanTakeDamage() const {
    return false;
}

bool UHealthComponentBase::CanTakeDamageFrom(UDamageClass* DamageClass) const {
    return false;
}


