#include "ElectroBeam.h"
#include "Components/AudioComponent.h"
#include "Components/CapsuleComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "NiagaraComponent.h"
#include "Net/UnrealNetwork.h"

AElectroBeam::AElectroBeam(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->NetDormancy = DORM_DormantAll;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->collider = CreateDefaultSubobject<UCapsuleComponent>(TEXT("collider"));
    this->SceneRoot = (USceneComponent*)RootComponent;
    this->DelaySource = nullptr;
    this->DelayTarget = nullptr;
    this->BeamEffectNS = CreateDefaultSubobject<UNiagaraComponent>(TEXT("BeamEffectNS"));
    this->ZappSound = CreateDefaultSubobject<UAudioComponent>(TEXT("ZappSound"));
    this->MaxLitTime = 0.00f;
    this->MinLitTime = 0.00f;
    this->MaxUnlitTime = 0.00f;
    this->MinUnlitTime = 0.00f;
    this->ShouldFlicker = false;
    this->IgnorePlayerOverlap = false;
    this->IsLit = false;
    this->BeamEffectNS->SetupAttachment(RootComponent);
    this->ZappSound->SetupAttachment(collider);
    this->collider->SetupAttachment(RootComponent);
}

void AElectroBeam::SetTarget(USceneComponent* TargetPoint) {
}

void AElectroBeam::SetSource(USceneComponent* SourcePoint) {
}

void AElectroBeam::SetParents(AActor* firstParent, AActor* secondParent) {
}

void AElectroBeam::SetIsLit(bool NewLit) {
}



void AElectroBeam::RecalculateBeam() {
}

void AElectroBeam::OnRep_TargetLocation() {
}

void AElectroBeam::OnRep_SourceLocation() {
}

void AElectroBeam::OnRep_IsLit() {
}

void AElectroBeam::OnParentDeath(UHealthComponentBase* HealthComponent) {
}

bool AElectroBeam::GetIsLit() const {
    return false;
}

UCapsuleComponent* AElectroBeam::GetCollider() {
    return NULL;
}

UAudioComponent* AElectroBeam::GetAudio() {
    return NULL;
}

void AElectroBeam::DelayedSetTarget(USceneComponent* TargetPoint) {
}

void AElectroBeam::DelayedSetSource(USceneComponent* SourcePoint) {
}

void AElectroBeam::DeactivateCollisionAndEffect() {
}

void AElectroBeam::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AElectroBeam, SourceLocation);
    DOREPLIFETIME(AElectroBeam, TargetLocation);
    DOREPLIFETIME(AElectroBeam, IsLit);
}


