#include "SkinnableComponent.h"

class AFSDPlayerState;
class UItemID;
class UItemSkin;

void USkinnableComponent::UpdateSkin(AFSDPlayerState* Player) {
}

void USkinnableComponent::OnLoadoutChanged() {
}

TArray<UItemSkin*> USkinnableComponent::GetSkinsForItem(UItemID* ItemID, EItemSkinType SkinType) {
    return TArray<UItemSkin*>();
}

UItemSkin* USkinnableComponent::GetEquippedSkinMesh(UItemID* ItemID, AFSDPlayerState* Player) {
    return NULL;
}

UItemSkin* USkinnableComponent::GetEquippedSkinColor(UItemID* ItemID, AFSDPlayerState* Player) {
    return NULL;
}

UItemSkin* USkinnableComponent::GetEquippedSkin(UItemID* ItemID, EItemSkinType SkinType, AFSDPlayerState* Player) {
    return NULL;
}

TArray<UItemSkin*> USkinnableComponent::GetEquippableColorSkins(UItemID* ItemID, AFSDPlayerState* Player) {
    return TArray<UItemSkin*>();
}

UItemSkin* USkinnableComponent::GetDefaultItemSkin(UItemID* ItemID, EItemSkinType itemSkinType) {
    return NULL;
}

UItemSkin* USkinnableComponent::GetBaseColorSkinForMeshSkin(UItemID* ItemID, UItemSkin* meshSkin) {
    return NULL;
}

void USkinnableComponent::EquipSkin(UItemSkin* Skin, UItemID* ItemID, AFSDPlayerState* Player) {
}

USkinnableComponent::USkinnableComponent() {
    this->EquippedSkinColor = NULL;
    this->EquippedSkinMesh = NULL;
}

