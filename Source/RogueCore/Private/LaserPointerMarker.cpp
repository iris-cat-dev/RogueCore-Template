#include "LaserPointerMarker.h"
#include "Net/UnrealNetwork.h"

ALaserPointerMarker::ALaserPointerMarker(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->LookAtActor = nullptr;
}

APlayerCharacter* ALaserPointerMarker::GetCharacter() const {
    return NULL;
}

void ALaserPointerMarker::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ALaserPointerMarker, LookAtData);
}


