#include "AuraBubble.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "Components/SphereComponent.h"
#include "Net/UnrealNetwork.h"

AAuraBubble::AAuraBubble(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComp"));
    this->Root = (USceneComponent*)RootComponent;
    this->AuraShape = CreateDefaultSubobject<USphereComponent>(TEXT("AuraShapeComp"));
    this->RepelEnemies = true;
    this->RepelInterval = 0.50f;
    this->IsActive = false;
    this->AuraShape->SetupAttachment(RootComponent);
}



void AAuraBubble::OnRep_IsActive() {
}

void AAuraBubble::OnActorLeftAura(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AAuraBubble::OnActorEnteredAura(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AAuraBubble::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AAuraBubble, IsActive);
}


