#include "InventoryComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

class AItem;
class AActor;
class ARecallableSentryGunItem;

void UInventoryComponent::UpdateFromSaveGameInSlot(EItemCategory Category) {
}

void UInventoryComponent::StartGrenadeThrow() {
}

void UInventoryComponent::Server_ThrowFlare_Implementation() {
}
bool UInventoryComponent::Server_ThrowFlare_Validate() {
    return true;
}

void UInventoryComponent::Server_Equip_Implementation(AItem* Item) {
}
bool UInventoryComponent::Server_Equip_Validate(AItem* Item) {
    return true;
}

void UInventoryComponent::Server_DropCarriedItem_Implementation() {
}
bool UInventoryComponent::Server_DropCarriedItem_Validate() {
    return true;
}

void UInventoryComponent::Resupply(float percentage) {
}

void UInventoryComponent::PickupItemInstance(AItem* Item) {
}

AItem* UInventoryComponent::PickupItem(TSubclassOf<AItem> itemClass) {
    return NULL;
}

void UInventoryComponent::OnRep_PickedUpItem() {
}

void UInventoryComponent::OnRep_Items() {
}

void UInventoryComponent::OnRep_EquippedItem(AItem* oldItem) {
}

void UInventoryComponent::OnRep_CarriedItem(FCarriedItemState& LastCarriedItem) {
}

void UInventoryComponent::OnCharacterStateChanged(ECharacterState NewState) {
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

AActor* UInventoryComponent::GetCarriedItem() const {
    return NULL;
}

TArray<AItem*> UInventoryComponent::GetAllItems() const {
    return TArray<AItem*>();
}

void UInventoryComponent::EquipLastItem(bool ignoreUsing) {
}

bool UInventoryComponent::EquipCategory(EItemCategory Category) {
    return false;
}

void UInventoryComponent::EquipAtIndex(int32 Index, bool ignoreUsing) {
}

void UInventoryComponent::Equip(AItem* Item, bool ignoreIsUsing) {
}

void UInventoryComponent::EndGrenadeThrow() {
}

void UInventoryComponent::DropPickedupItem() {
}

void UInventoryComponent::CreateStartingEquipmentWhenItemsLoaded() {
}

void UInventoryComponent::Client_Resupply_Implementation(float percentage) {
}

void UInventoryComponent::Client_DropPickedUpItem_Implementation() {
}

void UInventoryComponent::AnimationNotify2() {
}

void UInventoryComponent::AnimationNotify1() {
}

void UInventoryComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UInventoryComponent, Items);
    DOREPLIFETIME(UInventoryComponent, UnlistedItems);
    DOREPLIFETIME(UInventoryComponent, MiningItem);
    DOREPLIFETIME(UInventoryComponent, GrenadeItem);
    DOREPLIFETIME(UInventoryComponent, LaserPointerItem);
    DOREPLIFETIME(UInventoryComponent, TerrainScannerItem);
    DOREPLIFETIME(UInventoryComponent, PickedUpItem);
    DOREPLIFETIME(UInventoryComponent, ResupplyItem);
    DOREPLIFETIME(UInventoryComponent, CarriedItem);
    DOREPLIFETIME(UInventoryComponent, EquippedItem);
}

UInventoryComponent::UInventoryComponent() {
    this->bItemsLoaded = false;
    this->InventoryList = NULL;
    this->ThrownGrenadeClass = NULL;
    this->MiningItem = NULL;
    this->GrenadeItem = NULL;
    this->LaserPointerItem = NULL;
    this->TerrainScannerItem = NULL;
    this->RecallableSentryGunItem = NULL;
    this->PickedUpItem = NULL;
    this->ResupplyItem = NULL;
    this->PreviousItem = NULL;
    this->OutOfFlaresSound = NULL;
    this->OutOfFlaresShout = NULL;
    this->FlareAngle = 0.00f;
    this->FlareCooldown = 0.00f;
    this->FlareProductionTime = 0.00f;
    this->FlareProductionTimeLeft = 0.00f;
    this->MaxFlares = 0;
    this->Flares = 0;
    this->FlareCooldownRemaining = 0.00f;
    this->flareClass = NULL;
    this->EquippedItem = NULL;
}

