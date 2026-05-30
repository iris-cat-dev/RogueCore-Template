#include "CoilgunWeaponTrail.h"
#include "Components/CapsuleComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "NiagaraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Net/UnrealNetwork.h"

ACoilgunWeaponTrail::ACoilgunWeaponTrail(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->Root = (USceneComponent*)RootComponent;
    this->Collision = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Collision"));
    this->Trail = CreateDefaultSubobject<UNiagaraComponent>(TEXT("TrailNiagara"));
    this->ParticleTrailOffset = 0.00f;
    this->TrailHalgLength = 0.00f;
    this->SpawnFireTrail = false;
    this->FireEffect = nullptr;
    this->ElectricEffect = nullptr;
    this->Collision->SetupAttachment(RootComponent);
    this->Trail->SetupAttachment(RootComponent);
}

void ACoilgunWeaponTrail::OnRep_TrailHalfLength() {
}

void ACoilgunWeaponTrail::OnRep_SpawnFireTrail() {
}

void ACoilgunWeaponTrail::OnInited_Callback() {
}

void ACoilgunWeaponTrail::OnActorLeaveTrigger(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ACoilgunWeaponTrail::OnActorEnteredTrigger(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ACoilgunWeaponTrail::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ACoilgunWeaponTrail, TrailHalgLength);
    DOREPLIFETIME(ACoilgunWeaponTrail, SpawnFireTrail);
}


