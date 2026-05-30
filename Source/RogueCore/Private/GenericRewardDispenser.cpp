#include "GenericRewardDispenser.h"
#include "Net/UnrealNetwork.h"

AGenericRewardDispenser::AGenericRewardDispenser(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->DispenserFrame = nullptr;
    this->PoweredUp = false;
    this->IsActivated = false;
}

bool AGenericRewardDispenser::PowerUp(APlayerCharacter* InPlayerCharacter) {
    return false;
}


void AGenericRewardDispenser::OnRep_SelectedReward() {
}

void AGenericRewardDispenser::OnRep_PoweredUp() {
}

void AGenericRewardDispenser::OnRep_PlayerId() {
}

void AGenericRewardDispenser::OnRep_IsActivated() {
}




bool AGenericRewardDispenser::IsOwningPlayer(APlayerCharacter* PlayerCharacter) const {
    return false;
}

FRewardDispenserReward AGenericRewardDispenser::GetSelectedReward() const {
    return FRewardDispenserReward{};
}

APlayerCharacter* AGenericRewardDispenser::GetPlayerCharacter() const {
    return NULL;
}

AFSDPlayerState* AGenericRewardDispenser::GetPlayer() const {
    return NULL;
}

void AGenericRewardDispenser::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGenericRewardDispenser, PlayerId);
    DOREPLIFETIME(AGenericRewardDispenser, SelectedReward);
    DOREPLIFETIME(AGenericRewardDispenser, PoweredUp);
    DOREPLIFETIME(AGenericRewardDispenser, IsActivated);
}


