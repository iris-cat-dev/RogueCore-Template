#include "RedeployableSentryGun.h"
#include "ActorTrackingComponent.h"
#include "Net/UnrealNetwork.h"
#include "OutlineComponent.h"

ARedeployableSentryGun::ARedeployableSentryGun(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ActorTrackingIcon = CreateDefaultSubobject<UActorTrackingComponent>(TEXT("ActorTrackingIcon"));
    this->Outline = CreateDefaultSubobject<UOutlineComponent>(TEXT("Outline"));
    this->bOutlineAndIconVisible = false;
    this->State = ERedeployableSentryGunState::Deploying;
    this->PlasmaLineMaxRange = 1000.00f;
    this->PlasmaBeamClass = nullptr;
    this->ElectrocutionActorClass = nullptr;
    this->ElectrocutionActor = nullptr;
    this->EMPDischargeActorClass = nullptr;
    this->EMPDiscargeCooldown = 3.00f;
    this->ActorTrackingIcon->SetupAttachment(RootComponent);
}

void ARedeployableSentryGun::ToggleOutlineAndIcon(bool visible) {
}

void ARedeployableSentryGun::SetSentryGunOwner(APlayerCharacter* Character) {
}







void ARedeployableSentryGun::OnRep_State(ERedeployableSentryGunState oldState) {
}

void ARedeployableSentryGun::OnRep_SentryGunOwner() {
}

void ARedeployableSentryGun::OnElectrocutionActorDestroyed(AActor* Actor) {
}

bool ARedeployableSentryGun::GetIsDismantled() const {
    return false;
}

bool ARedeployableSentryGun::GetIsDeployed() const {
    return false;
}

float ARedeployableSentryGun::GetAnimDuration(USkeletalMeshComponent* mesh) {
    return 0.0f;
}

void ARedeployableSentryGun::DismantleFinished() {
}

void ARedeployableSentryGun::Dismantle() {
}

void ARedeployableSentryGun::DeployFinished() {
}

void ARedeployableSentryGun::Deploy() {
}


void ARedeployableSentryGun::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ARedeployableSentryGun, SentryGunOwner);
    DOREPLIFETIME(ARedeployableSentryGun, State);
}


