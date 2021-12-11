#include "PerkUsageComponent.h"
#include "Net/UnrealNetwork.h"

class UPerkAsset;

void UPerkUsageComponent::Server_MarkPerkUsed_Implementation(UPerkAsset* Perk) {
}
bool UPerkUsageComponent::Server_MarkPerkUsed_Validate(UPerkAsset* Perk) {
    return true;
}

void UPerkUsageComponent::Server_CheatReset_Implementation() {
}
bool UPerkUsageComponent::Server_CheatReset_Validate() {
    return true;
}

void UPerkUsageComponent::OnRep_PerkUsageReplicated() {
}

void UPerkUsageComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPerkUsageComponent, PerkUsageReplicated);
}

UPerkUsageComponent::UPerkUsageComponent() {
}

