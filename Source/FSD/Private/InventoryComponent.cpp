#include "InventoryComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

class ARecallableSentryGunItem;
class AActor;
class AItem;

void UInventoryComponent::UpdateFromSaveGameInSlot(EItemCategory Category) {
}

void UInventoryComponent::StartGrenadeThrow() {
}

void UInventoryComponent::Server_ThrowItem_Implementation(AActor* Item, FVector force, bool PlayMontage) {
}

void UInventoryComponent::Server_ThrowFlare_Implementation() {
}

void UInventoryComponent::Resupply(float percentage) {
}

void UInventoryComponent::PickupItemInstance(AItem* Item) {
}

AItem* UInventoryComponent::PickupItem(TSubclassOf<AItem> itemClass) {
    return NULL;
}

void UInventoryComponent::OnRep_FlareClass() {
}

bool UInventoryComponent::IsTerrainScannerEquipped() const {
    return false;
}

bool UInventoryComponent::HasPickedUpItem() const {
    return false;
}

bool UInventoryComponent::HasDrink() const {
    return false;
}

int32 UInventoryComponent::GetTotalAmmoLeft() const {
    return 0;
}

ARecallableSentryGunItem* UInventoryComponent::GetRecallableSentryGunItem() const {
    return NULL;
}

AItem* UInventoryComponent::GetItem(EItemCategory Category) const {
    return NULL;
}

AItem* UInventoryComponent::GetEquippedItem() const {
    return NULL;
}

AActor* UInventoryComponent::GetCarriedItem() const {
    return NULL;
}

bool UInventoryComponent::EquipCategory(EItemCategory Category) {
    return false;
}

void UInventoryComponent::Equip(AItem* Item) {
}

void UInventoryComponent::EndGrenadeThrow() {
}

void UInventoryComponent::DropPickedupItem() {
}

void UInventoryComponent::Client_Resupply_Implementation(float percentage) {
}

void UInventoryComponent::AnimationNotify2() {
}

void UInventoryComponent::AnimationNotify1() {
}

void UInventoryComponent::All_PlayThrowMontage_Implementation(AActor* Item) {
}

void UInventoryComponent::AddItemClass(TSubclassOf<AItem> itemClass) {
}

void UInventoryComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UInventoryComponent, flareClass);
}

UInventoryComponent::UInventoryComponent() {
    this->InventoryList = NULL;
    this->ThrownGrenadeClass = NULL;
    this->flareClass = NULL;
    this->OutOfFlaresSound = NULL;
    this->OutOfFlaresShout = NULL;
    this->FlareAngle = 0.00f;
    this->FlareCooldown = 0.00f;
    this->FlareProductionTime = 0.00f;
    this->FlareProductionTimeLeft = 0.00f;
    this->MaxFlares = 0;
    this->Flares = 0;
    this->FlareCooldownRemaining = 0.00f;
    this->bItemsLoaded = false;
    this->MiningItem = NULL;
    this->GrenadeItem = NULL;
    this->LaserPointerItem = NULL;
    this->TerrainScannerItem = NULL;
    this->ResupplyItem = NULL;
    this->RecallableSentryGunItem = NULL;
}

