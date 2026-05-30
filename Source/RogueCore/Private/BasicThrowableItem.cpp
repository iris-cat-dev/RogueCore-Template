#include "BasicThrowableItem.h"
#include "Components/BoxComponent.h"
#include "Components/SphereComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "CarriableComponent.h"
#include "FirstPersonStaticMeshComponent.h"
#include "InstantUsable.h"

ABasicThrowableItem::ABasicThrowableItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollision"));
    this->BoxComp = static_cast<UBoxComponent*>(RootComponent);
    this->UseSphere = CreateDefaultSubobject<USphereComponent>(TEXT("UseSphere"));
    this->CarriableComp = CreateDefaultSubobject<UCarriableComponent>(TEXT("Carriable"));
    this->UsableComp = CreateDefaultSubobject<UInstantUsable>(TEXT("usable"));
    this->WorldMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ThirdpersonMesh"));
    this->ViewMeshComp = CreateDefaultSubobject<UFirstPersonStaticMeshComponent>(TEXT("FirstPersonMesh"));
    this->ImpactSound = nullptr;
    this->SquaredMinImpactForce = 100.00f;
    this->ImpactAudioResetTime = 0.20f;
    this->SquaredMinThrowforce = 10.00f;
    this->ThrowforceMultiplier = 1.00f;
    this->UseSphere->SetupAttachment(RootComponent);
    this->ViewMeshComp->SetupAttachment(RootComponent);
    this->WorldMeshComp->SetupAttachment(RootComponent);
}

void ABasicThrowableItem::ResetImpactSound() {
}

void ABasicThrowableItem::OnUsed(APlayerCharacter* User, EInputKeys Key) {
}

void ABasicThrowableItem::OnUsableChanged(bool CanUse) {
}

void ABasicThrowableItem::OnPickedUp() {
}

void ABasicThrowableItem::OnDropped() {
}

void ABasicThrowableItem::OnComponentHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}


