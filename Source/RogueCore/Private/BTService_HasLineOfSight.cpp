#include "BTService_HasLineOfSight.h"

UBTService_HasLineOfSight::UBTService_HasLineOfSight() {
    this->UseEyeSocket = false;
    this->EyeSocket = TEXT("CenterMass");
    this->MaxDistance = 1000.00f;
    this->TraceChannel = ECC_GameTraceChannel3;
    this->DebugDraw = false;
    this->InvalidateOutOfRange = true;
}


