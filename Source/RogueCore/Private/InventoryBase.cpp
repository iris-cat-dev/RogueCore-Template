#include "InventoryBase.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

UInventoryBase::UInventoryBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LastEquippedActors[0] = nullptr;
    this->LastEquippedActors[1] = nullptr;
}

void UInventoryBase::Server_SetEquippedActor_Implementation(const FEquippedActorData& Actor, bool CallClientDelayed) {
}

void UInventoryBase::Server_EquipExternalActor_Implementation(AActor* Actor) {
}

void UInventoryBase::OnRep_EquippedActor(FEquippedActorData& OldActor) {
}

void UInventoryBase::OnRep_ActorsSelectable(TArray<AActor*> lastSelectable) {
}

void UInventoryBase::OnRep_ActorsNonSelectable(TArray<AActor*> lastNonSelectable) {
}

void UInventoryBase::GetSelectableActorsOfType(TSubclassOf<AActor> Class, TArray<AActor*>& OutActors, bool& OutResult) {
}

TArray<AActor*> UInventoryBase::GetSelectableActors() const {
    return TArray<AActor*>();
}

void UInventoryBase::GetNonSelectableActorsOfType(TSubclassOf<AActor> Class, TArray<AActor*>& OutActors, bool& OutResult) {
}

void UInventoryBase::EquipNull() {
}

void UInventoryBase::EquipLast() {
}

void UInventoryBase::EquipAtIndex(int32 Index, bool ignoreUsing) {
}

bool UInventoryBase::CanSelectActor(const AActor* Actor) const {
    return false;
}

void UInventoryBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UInventoryBase, ActorsSelectable);
    DOREPLIFETIME(UInventoryBase, ActorsNonSelectable);
    DOREPLIFETIME(UInventoryBase, ReplicatedEquippedActor);
}


