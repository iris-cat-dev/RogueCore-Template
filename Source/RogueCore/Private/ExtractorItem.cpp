#include "ExtractorItem.h"
#include "Components/BoxComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/PointLightComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
#include "NiagaraComponent.h"
#include "FSDAudioComponent.h"
#include "Net/UnrealNetwork.h"

AExtractorItem::AExtractorItem(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer.SetDefaultSubobjectClass<UBoxComponent>(TEXT("Root"))) {
    this->DroppedCollider = static_cast<UBoxComponent*>(RootComponent);
    this->DroppedMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("DropppedMesh"));
    this->FP_DrillParticles = nullptr;
    this->AudioComponent = CreateDefaultSubobject<UFSDAudioComponent>(TEXT("Audio"));
    this->SurfaceLight = CreateDefaultSubobject<UPointLightComponent>(TEXT("SurfaceLight"));
    this->MeltingParticles = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("MeltingEffect"));
    this->InvalidSurfaceParticles = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("InvalidSurfaceParticles"));
    this->FPMuzzleParticles = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("MuzzleEffect"));
    this->FPMuzzleInvalidParticles = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("MuzzleEInvalidffect"));
    this->TPMuzzleParticles = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("TPMuzzleEffect"));
    this->TPMuzzleInvalidParticles = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("TPMuzzleInvalidEffect"));
    this->MeltingParticlesNS = CreateDefaultSubobject<UNiagaraComponent>(TEXT("MeltingEffectNS"));
    this->InvalidSurfaceParticlesNS = CreateDefaultSubobject<UNiagaraComponent>(TEXT("InvalidSurfaceParticlesNS"));
    this->FPMuzzleParticlesNS = CreateDefaultSubobject<UNiagaraComponent>(TEXT("MuzzleEffectNS"));
    this->FPMuzzleInvalidParticlesNS = CreateDefaultSubobject<UNiagaraComponent>(TEXT("MuzzleInvalidParticlesNS"));
    this->TPMuzzleParticlesNS = CreateDefaultSubobject<UNiagaraComponent>(TEXT("TPMuzzleEffectNS"));
    this->TPMuzzleInvalidParticlesNS = CreateDefaultSubobject<UNiagaraComponent>(TEXT("TPMuzzleInvalidEffectNS"));
    this->FPMineMontage = nullptr;
    this->TPMineMontage = nullptr;
    this->FPGunsling = nullptr;
    this->TPGunsling = nullptr;
    this->DrillParticles = nullptr;
    this->DrillRumble = nullptr;
    this->BlockParticlesScaleFP = 1.00f;
    this->BlockParticlesScaleTP = 1.00f;
    this->State = EExtractorState::Attached;
    this->MovementPenalty = 0.70f;
    this->CarverRayCastLength = 200.00f;
    this->CarveTerrainDistanceCheck = 2.00f;
    this->CurrentDrillSpeed = 0.00f;
    this->DrillParticlesDuration = 0.25f;
    this->ExtractetMaterial = nullptr;
    this->TimeBeforeInvalidShout = 2.00f;
    this->InvalidSurfaceShout = nullptr;
    this->ShoutFull = nullptr;
    this->DigSound = nullptr;
    this->IsMining = false;
    this->IsGunslinging = false;
    this->ReadyToExtract = false;
    this->VacuumEffect = nullptr;
    this->ChunkSplatEffect = nullptr;
    this->ChunkSplatSound = nullptr;
    this->MaxDifference = 20.00f;
    this->MeltingTime = 0.65f;
    this->ChunkMultiplier = 1.00f;
    this->CollectChunkCooldown = 0.50f;
    this->CrossfadeSpeed = 0.00f;
    this->VacuumEffectOffset = 0.00f;
    this->MaxCapacity = 250.00f;
    this->PlayerCountBonus = 1.33f;
    this->SurfaceLightMinIntensity = 100.00f;
    this->SurfaceLightMaxIntensity = 1000.00f;
    this->CurrentLoad = 0.00f;
    this->AudioComponent->SetupAttachment(RootComponent);
    this->DroppedMesh->SetupAttachment(RootComponent);
    this->FPMuzzleInvalidParticles->SetupAttachment(FPMesh);
    this->FPMuzzleInvalidParticlesNS->SetupAttachment(FPMesh);
    this->FPMuzzleParticles->SetupAttachment(FPMesh);
    this->FPMuzzleParticlesNS->SetupAttachment(FPMesh);
    this->TPMuzzleInvalidParticles->SetupAttachment(TPMesh);
    this->TPMuzzleInvalidParticlesNS->SetupAttachment(TPMesh);
    this->TPMuzzleParticles->SetupAttachment(TPMesh);
    this->TPMuzzleParticlesNS->SetupAttachment(TPMesh);
}


void AExtractorItem::Server_StopMining_Implementation() {
}

void AExtractorItem::Server_StartMining_Implementation() {
}

void AExtractorItem::Server_SetReadyToExtract_Implementation(bool IsReady) {
}

void AExtractorItem::Server_DigBlock_Implementation(FVector_NetQuantize Start, FVector_NetQuantize End) {
}

void AExtractorItem::Server_CollectChunk_Implementation(AResourceChunk* chunk) {
}

void AExtractorItem::ResetCurrentLoad() {
}





void AExtractorItem::OnRep_SimulatingMining() {
}

void AExtractorItem::OnRep_IsGunslinging() {
}

void AExtractorItem::OnRep_CurrentLoad() {
}


void AExtractorItem::OnChunkCooldownOver() {
}

bool AExtractorItem::IsFull() const {
    return false;
}

UBoxComponent* AExtractorItem::GetRootCollider() const {
    return nullptr;
}

void AExtractorItem::All_SimulateDigBlock_Implementation(FVector_NetQuantize position, bool spawnParticles, int32 Material) {
}

void AExtractorItem::All_ChunkSplat_Implementation(AResourceChunk* chunk) {
}

void AExtractorItem::AddResource(float Amount) {
}

void AExtractorItem::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AExtractorItem, IsMining);
    DOREPLIFETIME(AExtractorItem, IsGunslinging);
    DOREPLIFETIME(AExtractorItem, ReadyToExtract);
    DOREPLIFETIME(AExtractorItem, CurrentLoad);
}


