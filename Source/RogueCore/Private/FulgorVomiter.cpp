#include "FulgorVomiter.h"
#include "HitReactionComponent.h"
#include "Net/UnrealNetwork.h"
#include "OutlineComponent.h"

AFulgorVomiter::AFulgorVomiter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HitReactions = CreateDefaultSubobject<UHitReactionComponent>(TEXT("HitReactions"));
    this->Outline = CreateDefaultSubobject<UOutlineComponent>(TEXT("Outline"));
    this->VomitProjectile = nullptr;
    this->VomitMontage = nullptr;
    this->LerpSpeed = 1.00f;
    this->Range = 2500.00f;
    this->Angle = 90.00f;
    this->VomitInterval = 5.00f;
    this->VomitIntervalReductionForFirstShot = -2.00f;
    this->ShowDebugCone = false;
    this->ConeOrigin = nullptr;
    this->Target = nullptr;
}

void AFulgorVomiter::Vomit() {
}

void AFulgorVomiter::OnMontageEnded(UAnimMontage* Montage, bool interrupted) {
}

bool AFulgorVomiter::HasTarget() const {
    return false;
}

void AFulgorVomiter::All_PlayVomitMontage_Implementation() {
}

void AFulgorVomiter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFulgorVomiter, TargetDirection);
    DOREPLIFETIME(AFulgorVomiter, Target);
}


