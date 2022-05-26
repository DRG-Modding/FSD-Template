#include "CharacterUseComponent.h"
#include "Net/UnrealNetwork.h"

class UUsableComponentBase;
class AActor;

void UCharacterUseComponent::Server_SetState_Implementation(const FCharacterUseState& NewState) {
}

void UCharacterUseComponent::RemoveCustomUsableComponent(UUsableComponentBase* Usable) {
}

void UCharacterUseComponent::OnRep_State(const FCharacterUseState& oldState) {
}

bool UCharacterUseComponent::IsLookingAtUsable() const {
    return false;
}

bool UCharacterUseComponent::IsLookingAtDepositable() const {
    return false;
}

float UCharacterUseComponent::GetUseProgress() const {
    return 0.0f;
}

AActor* UCharacterUseComponent::GetLookingAtActor() const {
    return NULL;
}

bool UCharacterUseComponent::GetIsUsing() {
    return false;
}

bool UCharacterUseComponent::GetIsDepositing() {
    return false;
}

UUsableComponentBase* UCharacterUseComponent::GetHoveringUsable() const {
    return NULL;
}

UUsableComponentBase* UCharacterUseComponent::GetActiveUsable() const {
    return NULL;
}

void UCharacterUseComponent::All_UseEnded_Implementation(const FCharacterUseState& oldState) {
}

void UCharacterUseComponent::AddCustomUsableComponent(UUsableComponentBase* Usable, ECustomUsableType eType) {
}

void UCharacterUseComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UCharacterUseComponent, State);
}

UCharacterUseComponent::UCharacterUseComponent() {
    this->UseDistance = 150.00f;
    this->LastBeginUseUsable = NULL;
    this->HoveringUsable = NULL;
}

