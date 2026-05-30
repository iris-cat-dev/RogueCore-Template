#include "GuntowerWeakPoint.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "EnemyHealthComponent.h"
#include "WeakpointGlowComponent.h"

AGuntowerWeakPoint::AGuntowerWeakPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Root = (USceneComponent*)RootComponent;
    this->Health = CreateDefaultSubobject<UEnemyHealthComponent>(TEXT("Health"));
    this->mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
    this->HitGlow = CreateDefaultSubobject<UWeakpointGlowComponent>(TEXT("WeakpointGlow"));
    this->DamageToParent = nullptr;
    this->deathParticles = nullptr;
    this->deathSound = nullptr;
    this->mesh->SetupAttachment(RootComponent);
}


void AGuntowerWeakPoint::DamageParent(float ammount) {
}


