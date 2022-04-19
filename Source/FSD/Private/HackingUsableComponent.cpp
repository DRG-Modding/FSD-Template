#include "HackingUsableComponent.h"
#include "Net/UnrealNetwork.h"

class UHackingToolWidget;
class APlayerCharacter;

void UHackingUsableComponent::OnRep_HackingState(const FHackingUsableState& oldState) {
}

bool UHackingUsableComponent::GetIsHacked() const {
    return false;
}

bool UHackingUsableComponent::GetIsBeingHacked() const {
    return false;
}

TSoftClassPtr<UHackingToolWidget> UHackingUsableComponent::GetHackingWidgetType() const {
    return NULL;
}

APlayerCharacter* UHackingUsableComponent::GetHackedBy() const {
    return NULL;
}

void UHackingUsableComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UHackingUsableComponent, HackingState);
}

UHackingUsableComponent::UHackingUsableComponent() {
}

