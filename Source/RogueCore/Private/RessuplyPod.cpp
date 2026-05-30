#include "RessuplyPod.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "DamageComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

ARessuplyPod::ARessuplyPod(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Damage = CreateDefaultSubobject<UDamageComponent>(TEXT("Damage"));
    this->KillRadius = 150.00f;
    this->DropHeight = 3500.00f;
    this->DropDelay = 0.00f;
    this->MissionShoutDelay = 2.00f;
    this->ShoutDialogOrderAccepted = nullptr;
    this->DialogOrderAccepted = nullptr;
    this->DialogPodArrived = nullptr;
    this->CurrentMissionShout = nullptr;
    this->State = ERessuplyPodState::ReadyToDrop;
    this->TargetDropTime = 0.00f;
    this->ServerDropProgress = 0.00f;
    this->DropCurve = nullptr;
    this->PlayerSpawnPoint = nullptr;
    this->CloseToImpactDistance = 150.00f;
}

void ARessuplyPod::SetIdling() {
}


void ARessuplyPod::OnRep_TargetLocation() {
}

void ARessuplyPod::OnRep_State(ERessuplyPodState oldState) {
}




AActor* ARessuplyPod::DropToTarget(UObject* WorldContextObject, TSubclassOf<ARessuplyPod> podClass, const FVector& Location, AActor* requester) {
    return NULL;
}

void ARessuplyPod::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ARessuplyPod, TargetLocation);
    DOREPLIFETIME(ARessuplyPod, State);
    DOREPLIFETIME(ARessuplyPod, ServerDropProgress);
}


