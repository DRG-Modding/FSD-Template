#include "GameData.h"
#include "Templates/SubclassOf.h"

void UGameData::UnloadPreloadedAssets() {
}

void UGameData::LoadDefaultAssetsBlocking(UAsyncManager* AsyncManager) {
}

bool UGameData::IsCheatConsolesEnabled() const {
    return false;
}

TArray<UPlayerCharacterID*> UGameData::GetRankedHeroIDs() const {
    return TArray<UPlayerCharacterID*>();
}

FText UGameData::GetPlayerRankName(int32 Rank) const {
    return FText::GetEmpty();
}

UPlayerCharacterID* UGameData::GetPlayerCharacterID(const FGuid& ID) const {
    return NULL;
}

UInventoryList* UGameData::GetInventoryList(UPlayerCharacterID* characterID) const {
    return NULL;
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

TArray<UHUDVisibilityGroup*> UGameData::GetAllVisibilityGroups() const {
    return TArray<UHUDVisibilityGroup*>();
}

TArray<UMissionStat*> UGameData::GetAllMissionStats() const {
    return TArray<UMissionStat*>();
}

TArray<UMissionStat*> UGameData::GetAllInfirmaryStats() const {
    return TArray<UMissionStat*>();
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
    this->BEESettings = NULL;
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
    this->TerrainMaterialSettings = NULL;
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

