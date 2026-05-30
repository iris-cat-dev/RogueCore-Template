#include "CharacterStateComponent.h"

UCharacterStateComponent::UCharacterStateComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StateId = 0;
    this->Character = nullptr;
    this->EnterStateShout = nullptr;
    this->ExitStateShout = nullptr;
    this->AttentionShout = nullptr;
    this->PlayerMovement = nullptr;
}




bool UCharacterStateComponent::IsLocallyControlled() const {
    return false;
}

bool UCharacterStateComponent::HasAuthority() const {
    return false;
}

ECharacterState UCharacterStateComponent::GetStateType() const {
    return ECharacterState::Walking;
}

float UCharacterStateComponent::GetStateTime() const {
    return 0.0f;
}

uint8 UCharacterStateComponent::GetStateID() const {
    return 0;
}

bool UCharacterStateComponent::GetStateActive() const {
    return false;
}

UPlayerMovementComponent* UCharacterStateComponent::GetCharacterMovement() const {
    return NULL;
}


