#include "StickyFlame.h"
#include "Components/AudioComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "NiagaraComponent.h"
#include "Net/UnrealNetwork.h"
#include "StatusEffectTriggerComponent.h"

AStickyFlame::AStickyFlame(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->FlameParticlesNS = CreateDefaultSubobject<UNiagaraComponent>(TEXT("FlameParticlesNS"));
    this->Audio = CreateDefaultSubobject<UAudioComponent>(TEXT("Audio"));
    this->StatusTriggerComponent = CreateDefaultSubobject<UStatusEffectTriggerComponent>(TEXT("StatusEffectTrigger"));
    this->FlameLifetime = 0.00f;
    this->FlameExtinguishTime = 1.50f;
    this->AudioFadeOutTime = 0.00f;
    this->IsActive = true;
    this->Audio->SetupAttachment(RootComponent);
    this->FlameParticlesNS->SetupAttachment(RootComponent);
}

void AStickyFlame::OnRep_IsActive() {
}

void AStickyFlame::OnExtinguisFlame() {
}

void AStickyFlame::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AStickyFlame, IsActive);
}


