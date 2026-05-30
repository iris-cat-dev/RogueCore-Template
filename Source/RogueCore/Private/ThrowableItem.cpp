#include "ThrowableItem.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

AThrowableItem::AThrowableItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ThrowableClass = nullptr;
    this->FPThrowMontage = nullptr;
    this->TPThrowMontage = nullptr;
    this->ThrowVelocity = 0.00f;
    this->InheritOwnerVelocityScale = 0.00f;
    this->ThrowAngle = 0.00f;
    this->CooldownAfterThrow = 1.00f;
    this->CanThrowBeforeEquipAnimFinish = false;
    this->CooldownAfterEquip = 0.25f;
    this->ThrowDelay = 0.00f;
    this->EquipLastAfterAfterThrow = false;
    this->EquipLastDelay = 0.50f;
    this->CooldownLeft = 0.00f;
    this->LoadoutItem = nullptr;
}

bool AThrowableItem::StartThrow() {
    return false;
}

void AThrowableItem::Simulate_Throw_Implementation(TSubclassOf<AThrowableActor> ActorClass) {
}

void AThrowableItem::Server_Throw_Implementation(TSubclassOf<AThrowableActor> ActorClass, const FVector& Location) {
}




void AThrowableItem::OnThrownActorDestroyed(AActor* Actor) {
}

void AThrowableItem::OnMontageEnded(UAnimMontage* InMontage, bool InWasInterrupted) {
}

void AThrowableItem::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AThrowableItem, CooldownLeft);
}


