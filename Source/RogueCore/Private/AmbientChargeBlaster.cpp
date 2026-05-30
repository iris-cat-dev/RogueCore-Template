#include "AmbientChargeBlaster.h"
#include "ChargedProjectileLauncherComponent.h"

AAmbientChargeBlaster::AAmbientChargeBlaster(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ChargeProgressForOtherFireAnim = 0.90f;
    this->OtherFireAnimFP = nullptr;
    this->OtherFireAnimTP = nullptr;
    this->ChargeRecoilCurve = nullptr;
    this->MuzzleParticlesWeak = nullptr;
    this->LauncherComponent = CreateDefaultSubobject<UChargedProjectileLauncherComponent>(TEXT("ProjectileLauncherComponent"));
}


