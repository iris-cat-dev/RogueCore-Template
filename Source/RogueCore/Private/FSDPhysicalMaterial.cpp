#include "FSDPhysicalMaterial.h"

UFSDPhysicalMaterial::UFSDPhysicalMaterial() {
    this->MaterialType = EPhysicalMaterialType::Any;
    this->BreakingDecelerationScale = 1.00f;
    this->BreakingFrictionScale = 1.00f;
    this->MaxAccelerationScale = 1.00f;
    this->RepulsePlayer = false;
    this->RepulsePlayerRandomDegreeOffset = 0.00f;
    this->RepulsePlayerSound = nullptr;
    this->RepulsePlayerParticle = nullptr;
    this->ImpactParticles = nullptr;
    this->ImpactParticleScale = 1.00f;
    this->ImpactMaterialOverride = nullptr;
    this->ImpactSound = nullptr;
    this->ImpactSoundFPVolumeScale = 1.00f;
    this->ImpactSoundFPAttenuation = nullptr;
    this->MeleeImpactSound = nullptr;
    this->UseImpactDecalOverrides = false;
    this->ImpactDecals.AddDefaulted(3);
    this->FirstPersonDamageIndicatorSound = nullptr;
    this->IsWeakPoint = false;
    this->IsSubhealthCollider = false;
    this->DamageMultiplier = 1.00f;
    this->FootStepParticle = nullptr;
    this->FootstepMaterialOverride = nullptr;
    this->FootStepSound = nullptr;
    this->ExtraFallVelocity = 0.00f;
    this->FallImpactEffect = nullptr;
    this->FallImpactSound = nullptr;
    this->AlwaysPenetrate = false;
    this->OneSidedPenetrate = false;
    this->ReactiveTerrain = nullptr;
}

UNiagaraComponent* UFSDPhysicalMaterial::SpawnImpactParticlesFromHit(UObject* WorldContextObject, const FHitResult& HitResult) {
    return NULL;
}

UNiagaraComponent* UFSDPhysicalMaterial::SpawnImpactParticles(UObject* WorldContextObject, FVector Location, FVector Normal, UElementType* ElementType) const {
    return NULL;
}

UFSDPhysicalMaterial* UFSDPhysicalMaterial::GetPhysicalMaterialFromPrimitive(UPrimitiveComponent* Component) {
    return NULL;
}


