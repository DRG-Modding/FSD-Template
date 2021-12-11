#include "CharacterVanityComponent.h"
#include "Net/UnrealNetwork.h"

class UVanityItem;
class UObject;
class UPlayerCharacterID;
class UCharacterVanityItems;

void UCharacterVanityComponent::UpdateMeshes() {
}

void UCharacterVanityComponent::UpdateEquippedVanity(bool applyItems) {
}

void UCharacterVanityComponent::SetEquippedVanityInViewer(const TArray<UVanityItem*>& Vanity) {
}

void UCharacterVanityComponent::Server_SetEquippedVanity_Implementation(const TArray<UVanityItem*>& equippedItems) {
}
bool UCharacterVanityComponent::Server_SetEquippedVanity_Validate(const TArray<UVanityItem*>& equippedItems) {
    return true;
}

UVanityItem* UCharacterVanityComponent::Receive_GetEquippedVanityItem(UObject* WorldContextObject, UPlayerCharacterID* Character, EVanitySlot Slot) {
    return NULL;
}

void UCharacterVanityComponent::OnRep_EquippedVanity() {
}

UVanityItem* UCharacterVanityComponent::GetEquippedVanityItem(EVanitySlot Slot) const {
    return NULL;
}

UCharacterVanityItems* UCharacterVanityComponent::GetAvailableVanityItems() const {
    return NULL;
}

void UCharacterVanityComponent::EnforceValidPaintjob() {
}

void UCharacterVanityComponent::CreateEquippedGear() {
}

void UCharacterVanityComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UCharacterVanityComponent, EquippedVanity);
}

UCharacterVanityComponent::UCharacterVanityComponent() {
    this->AvailableVanityItems = NULL;
    this->ShownBeardColor = NULL;
    this->ArmorMaterial = NULL;
    this->DynamicSkinMaterial = NULL;
    this->HeadVanityType = EHeadVanityType::HairOnly;
    this->SkinMaterial = NULL;
}

