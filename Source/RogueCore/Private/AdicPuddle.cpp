#include "AdicPuddle.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "Components/SphereComponent.h"

AAdicPuddle::AAdicPuddle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->SphereTrigger = CreateDefaultSubobject<USphereComponent>(TEXT("SphereTrigger"));
    this->SpawnSound = nullptr;
    this->InflictedStatusEffect = nullptr;
    this->Lifetime = 0.00f;
    this->SphereTrigger->SetupAttachment(RootComponent);
}


void AAdicPuddle::OnPuddleEndOverLap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AAdicPuddle::OnPuddleBeginOverLap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


