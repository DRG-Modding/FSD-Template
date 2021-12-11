#include "CaretakerActionComponent.h"
#include "Net/UnrealNetwork.h"

class ACaretaker;

void UCaretakerActionComponent::UseAction() {
}

void UCaretakerActionComponent::TriggerAction() {
}

void UCaretakerActionComponent::StopUsing() {
}




void UCaretakerActionComponent::OnRep_IsUsing() {
}

ACaretaker* UCaretakerActionComponent::GetCaretaker() const {
    return NULL;
}

bool UCaretakerActionComponent::CanUse_Implementation() const {
    return false;
}

void UCaretakerActionComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UCaretakerActionComponent, IsUsing);
}

UCaretakerActionComponent::UCaretakerActionComponent() {
    this->StartTickOnUse = false;
    this->IsUsing = false;
}

