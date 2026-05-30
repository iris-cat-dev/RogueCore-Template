#include "LateJoinPlayerStart.h"

ALateJoinPlayerStart::ALateJoinPlayerStart(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->UsedBy = nullptr;
}

void ALateJoinPlayerStart::SetUsedBy(APlayerController* NewUsedBy) {
}


APlayerController* ALateJoinPlayerStart::GetUsedBy() const {
    return NULL;
}

FTransform ALateJoinPlayerStart::GetPlayerStartTransform_Implementation() const {
    return FTransform{};
}



