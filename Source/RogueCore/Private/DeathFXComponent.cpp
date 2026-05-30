#include "DeathFXComponent.h"
#include "Net/UnrealNetwork.h"

UDeathFXComponent::UDeathFXComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CrossbowChemicalExplosionStatusEffect = nullptr;
    this->PlasmaExplosionStatusEffect = nullptr;
    this->PlasmaExplosionDOTStatusEffect = nullptr;
    this->GibParticles = nullptr;
    this->GoreMesh = nullptr;
    this->HeadGoreMeshAttachSocket = TEXT("Neck_Guts");
    this->HeadshotParticles = nullptr;
    this->HeadshotFXSocket = TEXT("Armor_Head");
    this->deathParticles = nullptr;
    this->DeathMaterialOverride = nullptr;
    this->BloodSquirtParticles = nullptr;
    this->BurnDeathParticles = nullptr;
    this->FrozenDeathParticles = nullptr;
    this->CorrosiveDeathParticles = nullptr;
    this->CookedDeathParticles = nullptr;
    this->ChemicalExplosionDeathParticles = nullptr;
    this->DeathSplatDecal = nullptr;
    this->DeathSplatDecalSize = 0.00f;
    this->NotLocalInstigator_SoundClassOverride = nullptr;
    this->NotLocalInstigator_SoundAttenuationOverride = nullptr;
    this->deathSound = nullptr;
    this->HeadshotGibsSound = nullptr;
    this->BurnDeathSound = nullptr;
    this->CorrosiveDeathSound = nullptr;
    this->CookedDeathSound = nullptr;
    this->ChemicalExplosionPreDeathSound = nullptr;
    this->ChemicalExplosionDeathSound = nullptr;
    this->DeathSplatSound = nullptr;
    this->DissolveDelay = 0.00f;
    this->DissolveBaseShader = nullptr;
    this->BurnBaseShader = nullptr;
    this->CorrosiveBaseShader = nullptr;
    this->RagdollEnabled = true;
    this->RagdollPhysicsAsset = nullptr;
    this->CameraShake = nullptr;
    this->DeathDuration = 20.00f;
    this->PostBurnRagdollDelay = 1.50f;
    this->LimbDismembermentList = nullptr;
    this->HeadGoreMesh = nullptr;
    this->SkeletalMesh = nullptr;
    this->FSDPawn = nullptr;
    this->PFCharacter = nullptr;
    this->AnimInstance = nullptr;
}

void UDeathFXComponent::OnRep_DeathType() {
}

void UDeathFXComponent::OnDeathDetailed(UHealthComponent* HealthComponent, float damageAmount, const FDamageData& DamageData, const TArray<UDamageTag*>& Tags) {
}

UStaticMeshComponent* UDeathFXComponent::CreateHeadGore() {
    return NULL;
}

void UDeathFXComponent::AllRagdoll_Implementation(const FVector_NetQuantize& Impulse, const FVector_NetQuantize& Location, int32 BoneIndex) {
}

void UDeathFXComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UDeathFXComponent, DeathType);
}


