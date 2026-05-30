#include "GatlingGun.h"
#include "HitscanComponent.h"
#include "Net/UnrealNetwork.h"

AGatlingGun::AGatlingGun(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BarrelProximityDamageEnabled = false;
    this->BarrelProximityDamageDistance = 250.00f;
    this->BarrelProximityDamageRadius = 100.00f;
    this->BarrelProximityDamageLength = 200.00f;
    this->TimeBetweenProximityDamageTicks = 0.50f;
    this->DamageMultiplierAtMaxStabilization = 1.00f;
    this->HotShellsTracerParticles = nullptr;
    this->HeatRemovedOnKill = -1.00f;
    this->CriticalOverheatEnabled = false;
    this->HotShellsOn = false;
    this->HotShellsTemperatureRequired = 200.00f;
    this->BarrelProximityDamage = nullptr;
    this->HitscanComponent = CreateDefaultSubobject<UHitscanComponent>(TEXT("HitscanComponent"));
}

void AGatlingGun::Server_SetHotShellsOn_Implementation(bool hotShellsIsOn) {
}

void AGatlingGun::OnRep_HotShellsTracerOn() {
}

void AGatlingGun::OnGatlingTemperatureChanged(float temperature, bool IsOverheated) {
}

void AGatlingGun::OnDamageEventTrigger(const TArray<FDamageListenerData>& listenerData, const FDamageParams& Params, const FDamageInfo& Damage, int32 eventInfo) {
}

void AGatlingGun::Client_RemoveHeat_Implementation() {
}

void AGatlingGun::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGatlingGun, HotShellsOn);
}


