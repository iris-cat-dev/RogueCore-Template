#include "PlasmaBoomerang.h"
#include "Components/BoxComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "DamageComponent.h"

APlasmaBoomerang::APlasmaBoomerang(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Root = static_cast<USceneComponent*>(RootComponent);
    this->Collision = CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));
    this->DamageComponent = CreateDefaultSubobject<UDamageComponent>(TEXT("Damage"));
    this->mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("mesh"));
    this->MeshPivot = CreateDefaultSubobject<USceneComponent>(TEXT("MeshPivot"));
    this->ArcCurve = nullptr;
    this->StartSmoothTime = 1.00f;
    this->RotationSpeed = 1750.00f;
    this->ArcSpeed = 1.25f;
    this->HomingAcceleration = 1.25f;
    this->IsHoming = false;
    this->Collision->SetupAttachment(RootComponent);
    this->MeshPivot->SetupAttachment(Collision);
    this->mesh->SetupAttachment(MeshPivot);
}

void APlasmaBoomerang::BeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


