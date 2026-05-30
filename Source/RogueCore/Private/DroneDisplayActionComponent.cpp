#include "DroneDisplayActionComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TextRenderComponent -FallbackName=TextRenderComponent

UDroneDisplayActionComponent::UDroneDisplayActionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DisplayText = CreateDefaultSubobject<UTextRenderComponent>(TEXT("Text"));
}

void UDroneDisplayActionComponent::SetMode(EDroneActions droneAction) {
}


