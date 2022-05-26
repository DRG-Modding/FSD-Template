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

void UCharacterVanityComponent::Server_SetEquippedVanity_Implementation(const FEquippedVanity& equippedItems) {
}

void UCharacterVanityComponent::RemoveMedicalGown() {
}

UVanityItem* UCharacterVanityComponent::Receive_GetEquippedVanityItem(UObject* WorldContextObject, UPlayerCharacterID* Character, EVanitySlot Slot) {
    return NULL;
}

void UCharacterVanityComponent::OnRep_EquippedVanity() {
}

bool UCharacterVanityComponent::HasSpawnedInMedbay() const {
    return false;
}

UVanityItem* UCharacterVanityComponent::GetEquippedVanityItem(EVanitySlot Slot) const {
    return NULL;
}

UCharacterVanityItems* UCharacterVanityComponent::GetAvailableVanityItems() const {
    return NULL;
}

void UCharacterVanityComponent::EquipMedicalGown() {
}

void UCharacterVanityComponent::EnforceValidPaintjob() {
}

void UCharacterVanityComponent::CreateEquippedGear() {
}

void UCharacterVanityComponent::Client_RemoveMedicalGown_Implementation() {
}

void UCharacterVanityComponent::Client_EquipMedicalGown_Implementation() {
}

void UCharacterVanityComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UCharacterVanityComponent, EquippedVanity);
}

UCharacterVanityComponent::UCharacterVanityComponent() {
    this->AvailableVanityItems = NULL;
    this->ShownBeardColor = NULL;
    this->ArmorMaterial = NULL;
    this->ArmorClothMaterial = NULL;
    this->DynamicSkinMaterial = NULL;
    this->HeadVanityType = EHeadVanityType::HairOnly;
    this->PreviewedItem = NULL;
    this->SkinMaterial = NULL;
}

