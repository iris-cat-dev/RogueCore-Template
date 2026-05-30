#include "PlagueCleanupItem.h"
#include "Components/BoxComponent.h"
#include "Components/SphereComponent.h"
#include "CrosshairAggregator.h"
#include "InstantUsable.h"
#include "KeepInsideWorld.h"

APlagueCleanupItem::APlagueCleanupItem(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer.SetDefaultSubobjectClass<UBoxComponent>(TEXT("Root"))) {
    this->DroppedCollider = static_cast<UBoxComponent*>(RootComponent);
    this->PickupUsable = CreateDefaultSubobject<UInstantUsable>(TEXT("PickupUsable"));
    this->UseSphere = CreateDefaultSubobject<USphereComponent>(TEXT("UseSphere"));
    this->CrosshairAggregator = CreateDefaultSubobject<UCrosshairAggregator>(TEXT("Crosshair"));
    this->FP_FireAnimation = nullptr;
    this->TP_FireAnimation = nullptr;
    this->FP_Gunsling = nullptr;
    this->TP_Gunsling = nullptr;
    this->Item_Gunsling = nullptr;
    this->UsingSound = nullptr;
    this->UsingSoundFadeout = 0.30f;
    this->UsingSoundTail = nullptr;
    this->KeepInsideWorld = CreateDefaultSubobject<UKeepInsideWorld>(TEXT("KeepInWorld"));
    this->UsingSoundInstance = nullptr;
    this->FireRate = 1.00f;
    this->UseSphere->SetupAttachment(RootComponent);
}

void APlagueCleanupItem::Server_Gunsling_Implementation() {
}

void APlagueCleanupItem::Server_EnablePhysics_Implementation(const FVector_NetQuantize& Direction) {
}

void APlagueCleanupItem::OnPickupUsed(APlayerCharacter* User, EInputKeys Key) {
}



void APlagueCleanupItem::All_Gunsling_Implementation() {
}

void APlagueCleanupItem::All_EnablePhysics_Implementation(const FVector_NetQuantize& Direction) {
}


