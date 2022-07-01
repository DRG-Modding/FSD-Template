#include "GameData.h"
#include "Templates/SubclassOf.h"

class UInventoryList;
class UAsyncManager;
class UObject;
class UDifficultySetting;
class UPlayerCharacterID;
class APlayerCharacter;
class UPerkAsset;
class UHUDVisibilityGroup;
class UMissionStat;

void UGameData::UnloadPreloadedAssets() {
}

void UGameData::LoadDefaultAssetsBlocking(UAsyncManager* AsyncManager) {
}

bool UGameData::IsPerkTierUnLocked(UObject* WorldContext, int32 Tier) const {
    return false;
}

bool UGameData::IsCheatConsolesEnabled() const {
    return false;
}

int32 UGameData::GetRequiredPerkClaimsForTier(int32 Tier) const {
    return 0;
}

TArray<UPlayerCharacterID*> UGameData::GetRankedHeroIDs() const {
    return TArray<UPlayerCharacterID*>();
}

TArray<TSubclassOf<APlayerCharacter>> UGameData::GetRankedHeroClasses() const {
    return TArray<TSubclassOf<APlayerCharacter>>();
}

FText UGameData::GetPlayerRankName(int32 Rank) const {
    return FText::GetEmpty();
}

TSubclassOf<APlayerCharacter> UGameData::GetPlayerClassFromID(UPlayerCharacterID* ID) const {
    return NULL;
}

UPlayerCharacterID* UGameData::GetPlayerCharacterID(const FGuid& ID) const {
    return NULL;
}

void UGameData::GetPerkTierState(UObject* WorldContext, int32 Tier, bool& TierUnLocked, int32& NextRequiredCount, int32& NextProgressCount) const {
}

UInventoryList* UGameData::GetInventoryList(UPlayerCharacterID* characterID) const {
    return NULL;
}

int32 UGameData::GetHighestPerkTier() const {
    return 0;
}

UDifficultySetting* UGameData::GetDifficultySetting(int32 Index) const {
    return NULL;
}

int32 UGameData::GetDifficultyIndex(UDifficultySetting* NewDifficulty) const {
    return 0;
}

TSubclassOf<APlayerCharacter> UGameData::GetDefaultEditorCharacter() const {
    return NULL;
}

TSubclassOf<APlayerCharacter> UGameData::GetDefaultCharacter() const {
    return NULL;
}

FRetirementCostItem UGameData::GetCharacterRetirementCost(UObject* WorldContext, UPlayerCharacterID* ID) const {
    return FRetirementCostItem{};
}

TArray<UPerkAsset*> UGameData::GetCharacterNonEquippedPerks(UObject* WorldContext, UPlayerCharacterID* characterID) const {
    return TArray<UPerkAsset*>();
}

TArray<UPerkAsset*> UGameData::GetCharacterEquippedPerks(UObject* WorldContext, UPlayerCharacterID* characterID) const {
    return TArray<UPerkAsset*>();
}

TArray<UPerkAsset*> UGameData::GetAvailablePerks() const {
    return TArray<UPerkAsset*>();
}

int32 UGameData::GetAmountOfPurchasedPerks(UObject* WorldContext) const {
    return 0;
}

TArray<UHUDVisibilityGroup*> UGameData::GetAllVisibilityGroups() const {
    return TArray<UHUDVisibilityGroup*>();
}

TArray<UMissionStat*> UGameData::GetAllMissionStats() const {
    return TArray<UMissionStat*>();
}

TArray<UMissionStat*> UGameData::GetAllInfirmaryStats() const {
    return TArray<UMissionStat*>();
}

int32 UGameData::CalculateClaimablePerkPoints(UObject* WorldContext) const {
    return 0;
}

UGameData::UGameData() {
    this->PromotionRewardsSettings = NULL;
    this->FsdEventsSettings = NULL;
    this->GameActivitySettings = NULL;
    this->DanceSettings = NULL;
    this->AnimationSettings = NULL;
    this->EnemySettings = NULL;
    this->DamageSettings = NULL;
    this->ZoneSettings = NULL;
    this->TreasureSettings = NULL;
    this->DrinkSettings = NULL;
    this->UpgradeSettings = NULL;
    this->SpawnSettings = NULL;
    this->VanitySettings = NULL;
    this->KeyBindingSettings = NULL;
    this->DeepDiveSettings = NULL;
    this->EncounterSettings = NULL;
    this->ForgingSettings = NULL;
    this->SchematicSettings = NULL;
    this->SkinSettings = NULL;
    this->SpecialEventSettings = NULL;
    this->ProceduralSettings = NULL;
    this->PickaxeSettings = NULL;
    this->TagSettings = NULL;
    this->ItemSettings = NULL;
    this->DynamicIconSettings = NULL;
    this->ShowroomSettings = NULL;
    this->VictoryPoseSettings = NULL;
    this->TutorialSettings = NULL;
    this->LegacySettings = NULL;
    this->EffectSettings = NULL;
    this->AfflictionSettings = NULL;
    this->CommunityGoalSettings = NULL;
    this->DailyDealSettings = NULL;
    this->SaveGameSettings = NULL;
    this->MinersManual = NULL;
    this->StatusEffects = NULL;
    this->CharacterSettings = NULL;
    this->Achievements = NULL;
    this->MissionSetup = NULL;
    this->SeasonSettings = NULL;
    this->DefaultCharacterID = NULL;
    this->DefaultEditorCharacterID = NULL;
}

