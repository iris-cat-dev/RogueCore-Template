#include "BeamItem.h"
#include "NiagaraComponent.h"
#include "FirstPersonNiagaraComponent.h"
#include "Net/UnrealNetwork.h"

ABeamItem::ABeamItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FP_BeamEffect = CreateDefaultSubobject<UFirstPersonNiagaraComponent>(TEXT("FP_Beam"));
    this->TP_BeamEffect = CreateDefaultSubobject<UFirstPersonNiagaraComponent>(TEXT("TP_Beam"));
    this->ValidTargetImpactEffect = CreateDefaultSubobject<UNiagaraComponent>(TEXT("ValidImpactEffect"));
    this->InvalidTargetImpactEffect = CreateDefaultSubobject<UNiagaraComponent>(TEXT("InvalidImpactEffect"));
    this->EndBeamAnim = nullptr;
    this->Interval = 0.50f;
    this->CostInterval = 1.00f;
    this->IsBeamActive = false;
}

void ABeamItem::Server_SetBeamActive_Implementation(bool IsActive) {
}

void ABeamItem::Server_HitTarget_Implementation(const FHitResult& Hit) {
}



void ABeamItem::OnRep_IsBeamActive() {
}



void ABeamItem::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABeamItem, IsBeamActive);
}


