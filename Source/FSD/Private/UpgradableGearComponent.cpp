#include "UpgradableGearComponent.h"
#include "Templates/SubclassOf.h"

class UObject;
class UItemID;
class UItemUpgrade;
class AFSDPlayerController;
class APlayerCharacter;
class AActor;
class AFSDPlayerState;
class UPlayerCharacterID;
class UResourceData;
class UTexture2D;

void UUpgradableGearComponent::SetGearStatText(FGearStatEntry& Entry, FText Text) {
}

bool UUpgradableGearComponent::PurchaseUpgrade(UItemID* ItemID, UItemUpgrade* Upgrade, AFSDPlayerController* PlayerController, TSubclassOf<APlayerCharacter> previewedCharacter) {
    return false;
}

bool UUpgradableGearComponent::PurchaseItem(UObject* WorldContextObject, UItemID* ItemID) {
    return false;
}

bool UUpgradableGearComponent::PlayerOwnesUpgradeInAllTiers(TSubclassOf<AActor> itemClass, UObject* WorldContextObject) {
    return false;
}

void UUpgradableGearComponent::MirrorUpgradePreviewStatus(FGearStatEntry& From, FGearStatEntry& to) {
}

bool UUpgradableGearComponent::IsUpgradeEquipped(TSubclassOf<AActor> itemClass, UItemUpgrade* Upgrade, AFSDPlayerState* Player) {
    return false;
}

bool UUpgradableGearComponent::IsTierUnLocked(TSubclassOf<AActor> itemClass, int32 tierIndex, AFSDPlayerState* Player, UPlayerCharacterID* characterID) {
    return false;
}

bool UUpgradableGearComponent::IsOverclockingEnabled(UObject* WorldContextObject, AFSDPlayerState* Player, UPlayerCharacterID* characterID, TSubclassOf<AActor> itemClass) {
    return false;
}

bool UUpgradableGearComponent::IsItemUnlocked(UObject* WorldContextObject, UItemID* Item) {
    return false;
}

bool UUpgradableGearComponent::IsItemOwned(UObject* WorldContextObject, UItemID* Item) {
    return false;
}

bool UUpgradableGearComponent::IsItemEquipped(UObject* WorldContextObject, UItemID* ItemID) {
    return false;
}

int32 UUpgradableGearComponent::GetUpgradeTier(TSubclassOf<AActor> itemClass, UItemUpgrade* ItemUpgrade) {
    return 0;
}

FString UUpgradableGearComponent::GetSourceGearName() const {
    return TEXT("");
}

TMap<UResourceData*, float> UUpgradableGearComponent::GetResourceCost() const {
    return TMap<UResourceData*, float>();
}

int32 UUpgradableGearComponent::GetRequiredCharacterLevel() const {
    return 0;
}

UTexture2D* UUpgradableGearComponent::GetPreviewImage() const {
    return NULL;
}

TSubclassOf<AActor> UUpgradableGearComponent::GetPreviewActorClass() const {
    return NULL;
}

TArray<UItemUpgrade*> UUpgradableGearComponent::GetOverClocks() const {
    return TArray<UItemUpgrade*>();
}

int32 UUpgradableGearComponent::GetMasteryProgress(UObject* WorldContextObject, UItemID* ItemID, int32& maxMastery) {
    return 0;
}

TArray<FMasteryItem> UUpgradableGearComponent::GetMasteryLevels(UItemID* ItemID) {
    return TArray<FMasteryItem>();
}

bool UUpgradableGearComponent::GetMasteryForLevel(const TArray<FMasteryItem>& NewMasteryLevels, int32 Level, FMasteryItem& outLevel) {
    return false;
}

TArray<FUpgradeTier> UUpgradableGearComponent::GetItemUpgradeTiers(TSubclassOf<AActor> itemClass) {
    return TArray<FUpgradeTier>();
}

EItemUpgradeStatus UUpgradableGearComponent::GetItemUpgradeStatus(UObject* WorldContextObject, TSubclassOf<AActor> itemClass, UItemUpgrade* ItemUpgrade, UPlayerCharacterID* characterID) {
    return EItemUpgradeStatus::Locked;
}

TArray<UItemUpgrade*> UUpgradableGearComponent::GetItemUpgrades(TSubclassOf<AActor> itemClass, TSubclassOf<UItemUpgrade> upgradeClass, AFSDPlayerState* Player, uint8 upgradeIndex) {
    return TArray<UItemUpgrade*>();
}

TSubclassOf<AActor> UUpgradableGearComponent::GetItemPreviewClassFromActor(TSubclassOf<AActor> Actor) {
    return NULL;
}

TSubclassOf<AActor> UUpgradableGearComponent::GetItemPreviewClass(UItemID* ItemID) {
    return NULL;
}

bool UUpgradableGearComponent::GetItemMasteryForLevel(UItemID* ItemID, int32 Level, FMasteryItem& outLevel) {
    return false;
}

UTexture2D* UUpgradableGearComponent::GetIconLine() const {
    return NULL;
}

UTexture2D* UUpgradableGearComponent::GetIconDetailed() {
    return NULL;
}

UTexture2D* UUpgradableGearComponent::GetIconBG() {
    return NULL;
}

FText UUpgradableGearComponent::GetGearStatValue(FGearStatEntry& Entry) {
    return FText::GetEmpty();
}

TArray<FGearStatEntry> UUpgradableGearComponent::GetGearStats(AFSDPlayerState* PlayerState, TSubclassOf<AActor> ActorClass) {
    return TArray<FGearStatEntry>();
}

FString UUpgradableGearComponent::GetGearSourceName(UItemID* ItemID) {
    return TEXT("");
}

FText UUpgradableGearComponent::GetGearName() const {
    return FText::GetEmpty();
}

FText UUpgradableGearComponent::GetGearDescription() const {
    return FText::GetEmpty();
}

FText UUpgradableGearComponent::GetGearCategory() const {
    return FText::GetEmpty();
}

TArray<UItemUpgrade*> UUpgradableGearComponent::GetEquippedUpgrades(TSubclassOf<AActor> itemClass, AFSDPlayerState* Player) {
    return TArray<UItemUpgrade*>();
}

UItemUpgrade* UUpgradableGearComponent::GetEquippedUpgradeAtTier(TSubclassOf<AActor> itemClass, int32 tierIndex, UPlayerCharacterID* characterID, AFSDPlayerState* Player) {
    return NULL;
}

UItemUpgrade* UUpgradableGearComponent::GetEquippedOverclock(UObject* WorldContextObject, TSubclassOf<AActor> itemClass) {
    return NULL;
}

TArray<UItemUpgrade*> UUpgradableGearComponent::GetEquippableOverclocks(UObject* WorldContextObject, TSubclassOf<AActor> itemClass, UPlayerCharacterID* characterID) {
    return TArray<UItemUpgrade*>();
}

int32 UUpgradableGearComponent::GetCreditCost() const {
    return 0;
}

TArray<FCraftingCost> UUpgradableGearComponent::GetCraftingCost() const {
    return TArray<FCraftingCost>();
}

int32 UUpgradableGearComponent::GetCharacterLevelRequiredForItem(UItemID* ItemID) {
    return 0;
}

TArray<UItemUpgrade*> UUpgradableGearComponent::GetAllUpgrades() const {
    return TArray<UItemUpgrade*>();
}

void UUpgradableGearComponent::ClearEquippedUpgrade(TSubclassOf<AActor> itemClass, int32 tierIndex, AFSDPlayerState* Player) {
}

void UUpgradableGearComponent::CheckMasteryUnlocks(UItemID* ItemID, AFSDPlayerController* Player) {
}

bool UUpgradableGearComponent::CanItemOverclock(UObject* WorldContextObject, TSubclassOf<AActor> itemClass) {
    return false;
}

bool UUpgradableGearComponent::CanAffordUpgrade(UObject* WorldContextObject, UItemUpgrade* Upgrade) {
    return false;
}

bool UUpgradableGearComponent::CanAffordItem(UObject* WorldContextObject, UItemID* ItemID) {
    return false;
}

UUpgradableGearComponent::UUpgradableGearComponent() {
    this->ItemData = NULL;
    this->OverclockBank = NULL;
    this->IconLine = NULL;
    this->IconBG = NULL;
    this->IconDetailed = NULL;
    this->CreditCost = 0;
    this->RequiredCharacterLevel = 0;
}

