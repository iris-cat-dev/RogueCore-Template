#include "DroneVacuumStream.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent

ADroneVacuumStream::ADroneVacuumStream(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->VacuumPoint = CreateDefaultSubobject<USceneComponent>(TEXT("VacuumSource"));
    this->VacuumPoint->SetupAttachment(RootComponent);
}

void ADroneVacuumStream::Server_StartVacuumingPuddle_Implementation(AFoamPuddle* puddle) {
}


