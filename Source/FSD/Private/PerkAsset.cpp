#include "PerkAsset.h"
#include "Templates/SubclassOf.h"

class APlayerController;
class UObject;
class UPlayerCharacterID;
class UPerkHUDIconWidget;
class UPerkAsset;
class UPerkHUDActivationWidget;
class UPerkDelegateItem;

bool UPerkAsset::UseCharge(APlayerController* PlayerController) {
    return false;
}

bool UPerkAsset::Unequip(UObject* WorldContext, UPlayerCharacterID* characterID) {
    return false;
}

void UPerkAsset::SetHighlighted(UObject* WorldContext, bool IsHighlighted) {
}

void UPerkAsset::SetCharacterPerks(UObject* WorldContext, UPlayerCharacterID* characterID, const TArray<UPerkAsset*>& perks) {
}

bool UPerkAsset::IsUsageType(EPerkUsageType InType) const {
    return false;
}

bool UPerkAsset::IsPerkAvailableInTier(int32 Tier) const {
    return false;
}

bool UPerkAsset::IsEquippedBy(UObject* WorldContext, UPlayerCharacterID* characterID) const {
    return false;
}

float UPerkAsset::GetUseCoolDownTimeLeft(APlayerController* PlayerController) const {
    return 0.0f;
}

float UPerkAsset::GetUseCoolDownProgress(APlayerController* PlayerController) const {
    return 0.0f;
}

float UPerkAsset::GetUseCoolDownDuration(APlayerController* PlayerController) const {
    return 0.0f;
}

EPerkUsageType UPerkAsset::GetUsageType() const {
    return EPerkUsageType::Passive;
}

EPerkTierState UPerkAsset::GetStateAtTier(UObject* WorldContext, int32 Tier) const {
    return EPerkTierState::Claimable;
}

int32 UPerkAsset::GetRemainingUseCharges(APlayerController* PlayerController) const {
    return 0;
}

int32 UPerkAsset::GetRankTier(int32 Rank) const {
    return 0;
}

FText UPerkAsset::GetRankDescription(int32 Rank) const {
    return FText::GetEmpty();
}

int32 UPerkAsset::GetRankCost(int32 Rank) const {
    return 0;
}

bool UPerkAsset::GetRankAtTier(const int32 Tier, int32& Rank) const {
    return false;
}

int32 UPerkAsset::GetMaxUseCharges(APlayerController* PlayerController) const {
    return 0;
}

TSubclassOf<UPerkHUDIconWidget> UPerkAsset::GetHudIconWidgetClass() const {
    return NULL;
}

TArray<TSubclassOf<UPerkHUDActivationWidget>> UPerkAsset::GetHudActivationWidgets(EPerkHUDActivationLocation Location) const {
    return TArray<TSubclassOf<UPerkHUDActivationWidget>>();
}

UPerkDelegateItem* UPerkAsset::GetDelegates(UObject* WorldContext) const {
    return NULL;
}

int32 UPerkAsset::GetCurrentRank(UObject* WorldContext) const {
    return 0;
}

int32 UPerkAsset::GetChargesUsed(APlayerController* PlayerController) const {
    return 0;
}

FString UPerkAsset::GetAdditionalRankDescription(int32 Rank) const {
    return TEXT("");
}

bool UPerkAsset::Equip(UObject* WorldContext, UPlayerCharacterID* characterID) {
    return false;
}

bool UPerkAsset::CanUseCharge(APlayerController* PlayerController) const {
    return false;
}

bool UPerkAsset::BuyPerkAtTier(UObject* WorldContext, int32 Tier) {
    return false;
}

UPerkAsset::UPerkAsset() {
    this->Icon = NULL;
    this->bIsEquippable = true;
    this->ShoutOnUseCharge = NULL;
    this->MaxUseCharges = 0;
    this->CoolDownBetweenUse = 0.00f;
    this->bIsHighlighted = false;
}

