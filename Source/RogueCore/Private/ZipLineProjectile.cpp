#include "ZipLineProjectile.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TimelineComponent -FallbackName=TimelineComponent

AZipLineProjectile::AZipLineProjectile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Timeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("LightTimeLine"));
    this->LightIntensity = 2500.00f;
    this->MaterialGlow = 10.00f;
    this->LightCurve = nullptr;
    this->OnUseStatusEffect = nullptr;
    this->OnReleaseStatusEffect = nullptr;
}

void AZipLineProjectile::OnTimelineTick(float NewValue) {
}



