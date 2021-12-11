#include "ItemUpgrade.h"
#include "Templates/SubclassOf.h"

class AFSDPlayerController;
class AActor;
class UItemID;
class AFSDPlayerState;
class UItemUpgrade;
class APlayerCharacter;

void UItemUpgrade::UnequipUpgrade(TSubclassOf<AActor> itemClass, AFSDPlayerState* PlayerState) {
}

TArray<FItemUpgradeStatText> UItemUpgrade::GetUpgradeStatTexts() const {
    return TArray<FItemUpgradeStatText>();
}

FText UItemUpgrade::GetUpgradeName(UItemUpgrade* Upgrade) {
    return FText::GetEmpty();
}

TArray<FCraftingCost> UItemUpgrade::GetUpgradeCost() const {
    return TArray<FCraftingCost>();
}

FString UItemUpgrade::GetSourceName() {
    return TEXT("");
}

FUpgradeValues UItemUpgrade::GetGenericUpgradedValue(TSubclassOf<AActor> Item, AFSDPlayerState* Player, UItemUpgrade* NewUpgradeClass) {
    return FUpgradeValues{};
}

float UItemUpgrade::GetCreditsCost() const {
    return 0.0f;
}

void UItemUpgrade::EquipUpgrade(TSubclassOf<AActor> itemClass, AFSDPlayerState* PlayerState) {
}

void UItemUpgrade::CraftItem(UItemID* ItemID, AFSDPlayerController* PlayerController, TSubclassOf<APlayerCharacter> previewedCharacter) {
}

UItemUpgrade::UItemUpgrade() {
    this->Cost = 0;
    this->UseOldCost = false;
    this->UpgradeTier = EUpgradeTiers::Tier_1;
    this->upgradeClass = EUpgradeClass::Class_A;
    this->Category = NULL;
}

