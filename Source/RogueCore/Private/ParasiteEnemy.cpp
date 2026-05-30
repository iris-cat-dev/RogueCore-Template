#include "ParasiteEnemy.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "OutlineComponent.h"

AParasiteEnemy::AParasiteEnemy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Root = (USceneComponent*)RootComponent;
    this->mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("mesh"));
    this->Tentacles1 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Tentacles1"));
    this->Tentacles2 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Tentacles2"));
    this->Outline = CreateDefaultSubobject<UOutlineComponent>(TEXT("Outline"));
    this->deathParticles = nullptr;
    this->deathSound = nullptr;
    this->Tentacles1->SetupAttachment(mesh);
    this->Tentacles2->SetupAttachment(mesh);
    this->mesh->SetupAttachment(RootComponent);
}

void AParasiteEnemy::OnSelfDeath(UHealthComponentBase* aHealthComponent) {
}


