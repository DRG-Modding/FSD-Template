#include "CharacterStateComponent.h"

class UPlayerMovementComponent;




bool UCharacterStateComponent::IsLocallyControlled() const {
    return false;
}

bool UCharacterStateComponent::HasAuthority() const {
    return false;
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

UCharacterStateComponent::UCharacterStateComponent() {
    this->StateId = 0;
    this->Character = NULL;
    this->EnterStateShout = NULL;
    this->ExitStateShout = NULL;
    this->AttentionShout = NULL;
    this->PlayerMovement = NULL;
}

