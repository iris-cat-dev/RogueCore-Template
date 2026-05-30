#include "DropPod.h"
#include "AutoCarverComponent.h"

ADropPod::ADropPod(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AutoCarverComp = CreateDefaultSubobject<UAutoCarverComponent>(TEXT("AutoCarverComp"));
    this->CarverDropCurve = nullptr;
    this->CarverRotationSpeed = 100.00f;
    this->AutoCarverComp->SetupAttachment(RootComponent);
}



