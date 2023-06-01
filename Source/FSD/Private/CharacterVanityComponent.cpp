#include "CharacterVanityComponent.h"
#include "Net/UnrealNetwork.h"

void UCharacterVanityComponent::UpdateMeshes() {
}

void UCharacterVanityComponent::UpdateEquippedVanity(bool applyItems) {
}

void UCharacterVanityComponent::SetEquippedVanityInViewer(const TArray<UVanityItem*>& Vanity) {
}

void UCharacterVanityComponent::SetDesireSleevelessArmor(UObject* WorldContextObject, UPlayerCharacterID* Character, bool inDesireSleeveless) {
}

void UCharacterVanityComponent::Server_SetEquippedVanity_Implementation(const FEquippedVanity& equippedItems) {
}

void UCharacterVanityComponent::Server_SetDesireSleevelessArmor_Implementation(bool useSleeveless) {
}

void UCharacterVanityComponent::RemoveMedicalGown() {
}

UVanityItem* UCharacterVanityComponent::Receive_GetEquippedVanityItem(UObject* WorldContextObject, UPlayerCharacterID* Character, EVanitySlot Slot) {
    return NULL;
}

bool UCharacterVanityComponent::Receive_GetDesireSleevelessArmor(UObject* WorldContextObject, UPlayerCharacterID* Character) {
    return false;
}

void UCharacterVanityComponent::OnRep_EquippedVanity() {
}

void UCharacterVanityComponent::OnRep_DesireSleeveless() {
}

bool UCharacterVanityComponent::HasSpawnedInMedbay() const {
    return false;
}

UVanityItem* UCharacterVanityComponent::GetEquippedVanityItem(EVanitySlot Slot, bool ignorePreviewItems) const {
    return NULL;
}

bool UCharacterVanityComponent::GetDesireSleevelessArmor() const {
    return false;
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
    DOREPLIFETIME(UCharacterVanityComponent, DesireSleevelessArmor);
}

UCharacterVanityComponent::UCharacterVanityComponent() {
    this->AvailableVanityItems = NULL;
    this->ShownBeardColor = NULL;
    this->ArmorMaterial = NULL;
    this->ArmorClothMaterial = NULL;
    this->DynamicSkinMaterial = NULL;
    this->HeadVanityType = EHeadVanityType::HairOnly;
    this->PreviewedItem = NULL;
    this->PreviewedArmorMaterial = NULL;
    this->SkinMaterial = NULL;
    this->DesireSleevelessArmor = false;
}

