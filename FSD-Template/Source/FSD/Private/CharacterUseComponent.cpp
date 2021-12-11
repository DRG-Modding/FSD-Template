#include "CharacterUseComponent.h"
#include "Net/UnrealNetwork.h"

class AActor;
class USceneComponent;
class UUsableComponentBase;

void UCharacterUseComponent::Server_SetCanUse_Implementation(EUseRestriction NewUseRestriction) {
}
bool UCharacterUseComponent::Server_SetCanUse_Validate(EUseRestriction NewUseRestriction) {
    return true;
}

void UCharacterUseComponent::Server_EndUse_Implementation() {
}
bool UCharacterUseComponent::Server_EndUse_Validate() {
    return true;
}

void UCharacterUseComponent::Server_BeginUse_Implementation(uint8 Key, UUsableComponentBase* Usable, USceneComponent* UsableCollider) {
}
bool UCharacterUseComponent::Server_BeginUse_Validate(uint8 Key, UUsableComponentBase* Usable, USceneComponent* UsableCollider) {
    return true;
}

void UCharacterUseComponent::OnRep_ActiveUsablee(FUsableRepliactional lastUsable) {
}

void UCharacterUseComponent::OnCharacterStateChanged(ECharacterState NewState) {
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

void UCharacterUseComponent::All_PlaySingleUse_Implementation(uint8 Key, UUsableComponentBase* Usable) {
}

void UCharacterUseComponent::AddCustomUsableComponent(UUsableComponentBase* Usable, ECustomUsableType eType) {
}

void UCharacterUseComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UCharacterUseComponent, ActiveUsablee);
    DOREPLIFETIME(UCharacterUseComponent, UseRestriction);
}

UCharacterUseComponent::UCharacterUseComponent() {
    this->HoveringUsable = NULL;
    this->HoveringUsableCollider = NULL;
    this->ActiveUsableCollider = NULL;
    this->UseCollider = NULL;
    this->AudioBeginDepositing = NULL;
    this->AudioEndDepositing = NULL;
    this->UseDistance = 250.00f;
    this->UseRestriction = EUseRestriction::Free;
    this->Character = NULL;
}

