#include "FoamPuddle.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "NiagaraComponent.h"
#include "Net/UnrealNetwork.h"

AFoamPuddle::AFoamPuddle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Root = (USceneComponent*)RootComponent;
    this->PuddleRoot = CreateDefaultSubobject<USceneComponent>(TEXT("PuddleRoot"));
    this->NS_Foam = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NS_Vacuum_FP"));
    this->PickupSound = nullptr;
    this->PickupSoundCooldown = 0.50f;
    this->PickupFilledSound = nullptr;
    this->PickupFilledCooldown = 0.50f;
    this->VacuumedSound = nullptr;
    this->VacuumedCooldown = 0.50f;
    this->VacuumedSoundFilled = nullptr;
    this->VacuumedSoundFilledCooldown = 0.50f;
    this->InitialDebrisRadius = 75.00f;
    this->TotalRadiusGrowth = 100.00f;
    this->GrowthTime = 2.00f;
    this->AttractorPowerWhenVacuuming = 1000.00f;
    this->ScaleTimeVacuuming = 1.00f;
    this->Speed = 0.00f;
    this->State = EVacuumState::EFalling;
    this->VacuumSource = nullptr;
    this->MaxSoapPiles = 100;
    this->UsesLocalSpace = false;
    this->NS_Foam->SetupAttachment(PuddleRoot);
    this->PuddleRoot->SetupAttachment(RootComponent);
}

void AFoamPuddle::SetState(EVacuumState NewState) {
}



void AFoamPuddle::OnRep_State(EVacuumState prevState) {
}

void AFoamPuddle::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void AFoamPuddle::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFoamPuddle, State);
    DOREPLIFETIME(AFoamPuddle, VacuumSource);
}


