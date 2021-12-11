#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/Object.h"
#include "GDDamageClasses.h"
#include "GDMissionStats.h"
#include "GVisibilityGroups.h"
#include "GDMilestones.h"
#include "GDPerks.h"
#include "GDPlayerAndCharacterProgression.h"
#include "GDItemCategoryIDs.h"
#include "GDStats.h"
#include "GDResources.h"
#include "GDGameStatsTracking.h"
#include "GDTerrainTypes.h"
#include "GDAudio.h"
#include "GDDifficulty.h"
#include "GDCharacterRetirement.h"
#include "GameplayTagContainer.h"
#include "UObject/NoExportTypes.h"
#include "RetirementCostItem.h"
#include "GameData.generated.h"

class UForginSettings;
class USpawnSettings;
class UAfflictionSettings;
class UPromotionRewardsSettings;
class USchematicSettings;
class UNiagaraParameterCollection;
class AActor;
class UDLCBase;
class UFSDEventCollection;
class UEncounterSettings;
class UGameActivitySettings;
class UDanceSettings;
class UGameAnimationSettings;
class UDrinkSettings;
class UEnemySettings;
class UDamageSettings;
class UCommunityGoalSettings;
class UPlanetZoneSetup;
class UTreasureSettings;
class UMissionTemplate;
class UUpgradeSettings;
class USpecialEventSettings;
class UKeyBindingSettings;
class UDeepDiveSettings;
class UItemSkinSettings;
class UProceduralSettings;
class UCampaignManager;
class UPickaxeSettings;
class UFSDTutorialSettings;
class UFSDTagSettings;
class UItemSettings;
class UShowroomSettings;
class UVictoryPoseSettings;
class UTexture2D;
class ULegacySettings;
class UEffectSettings;
class UBiome;
class UDailyDealSettings;
class AProceduralSetup;
class UMinersManual;
class UInventoryList;
class UDataTable;
class UStatusEffectSettings;
class USeasonSettings;
class UCharacterSettings;
class UAchievementList;
class UGlobalMissionSetup;
class UPlayerCharacterID;
class UItemRefundList;
class USubsystem;
class UAsyncManager;
class APlayerCharacter;
class UDifficultySetting;
class UPerkAsset;
class UHUDVisibilityGroup;
class UMissionStat;

UCLASS(BlueprintType)
class FSD_API UGameData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftClassPtr<AActor> BarrelClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGVisibilityGroups VisibilityGroups;
    
    UPROPERTY(EditAnywhere)
    UNiagaraParameterCollection* NiagaraParameterCollection;
    
    UPROPERTY(EditAnywhere)
    UDLCBase* AlwaysLockedDLC;
    
    UPROPERTY(EditAnywhere)
    UPromotionRewardsSettings* PromotionRewardsSettings;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UFSDEventCollection* FsdEventsSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UGameActivitySettings* GameActivitySettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDanceSettings* DanceSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UGameAnimationSettings* AnimationSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UEnemySettings* EnemySettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDamageSettings* DamageSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UPlanetZoneSetup* ZoneSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UTreasureSettings* TreasureSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDrinkSettings* DrinkSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UUpgradeSettings* UpgradeSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USpawnSettings* SpawnSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UKeyBindingSettings* KeyBindingSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDeepDiveSettings* DeepDiveSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UEncounterSettings* EncounterSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UForginSettings* ForgingSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USchematicSettings* SchematicSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UItemSkinSettings* SkinSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USpecialEventSettings* SpecialEventSettings;
    
    UPROPERTY(EditAnywhere)
    UProceduralSettings* ProceduralSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UPickaxeSettings* PickaxeSettings;
    
    UPROPERTY(EditAnywhere)
    UFSDTagSettings* TagSettings;
    
    UPROPERTY(EditAnywhere)
    UItemSettings* ItemSettings;
    
    UPROPERTY(EditAnywhere)
    UShowroomSettings* ShowroomSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UVictoryPoseSettings* VictoryPoseSettings;
    
    UPROPERTY(EditAnywhere)
    UFSDTutorialSettings* TutorialSettings;
    
    UPROPERTY(EditAnywhere)
    ULegacySettings* LegacySettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UEffectSettings* EffectSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAfflictionSettings* AfflictionSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UCommunityGoalSettings* CommunityGoalSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDailyDealSettings* DailyDealSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGDMissionStats MissionStats;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGDMilestones Milestones;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGDPerks perks;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGDItemCategoryIDs ItemCategoryIDs;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<UTexture2D*> LoadoutIconList;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMinersManual* MinersManual;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGDDamageClasses DamageClasses;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGDStats Stats;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGDResources Resources;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGDTerrainTypes TerrainTypes;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGDGameStatsTracking GameStatsTracking;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGDAudio Audio;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGDDifficulty Difficulty;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UStatusEffectSettings* StatusEffects;
    
    UPROPERTY(EditAnywhere)
    FGDCharacterRetirement Retirement;
    
    UPROPERTY(VisibleAnywhere)
    FGDPlayerAndCharacterProgression PlayerAndCharacterProgression;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UCharacterSettings* CharacterSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAchievementList* Achievements;
    
    UPROPERTY(EditAnywhere)
    UDataTable* SchematicGATable;
    
    UPROPERTY(EditAnywhere)
    TArray<UMissionTemplate*> TestMissions;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UBiome> TestBiome;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UGlobalMissionSetup* MissionSetup;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UCampaignManager> CampaignManagerClass;
    
    UPROPERTY(EditAnywhere)
    UPlayerCharacterID* BoscoID;
    
    UPROPERTY(EditAnywhere)
    TMap<UPlayerCharacterID*, UInventoryList*> InventoryLists;
    
    UPROPERTY(EditAnywhere)
    UBiome* DefaultBiome;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FText> GenericBiomeQuotes;
    
    UPROPERTY(EditAnywhere)
    UMissionTemplate* DefaultMission;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USeasonSettings* SeasonSettings;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<AProceduralSetup> CaveGeneratorPLSClass;
    
    UPROPERTY(EditAnywhere)
    TArray<UItemRefundList*> ItemRefunds;
    
    UPROPERTY(EditAnywhere)
    TArray<TSubclassOf<USubsystem>> BlueprintSubSystems;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UPlayerCharacterID* DefaultCharacterID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UPlayerCharacterID* DefaultEditorCharacterID;
    
    UPROPERTY(EditAnywhere)
    FGameplayTag XBoxExcludeRoomTag;
    
public:
    UFUNCTION(BlueprintCallable)
    void UnloadPreloadedAssets();
    
    UFUNCTION(BlueprintCallable)
    void LoadDefaultAssetsBlocking(UAsyncManager* AsyncManager);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPerkTierUnLocked(UObject* WorldContext, int32 Tier) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCheatConsolesEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRequiredPerkClaimsForTier(int32 Tier) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UPlayerCharacterID*> GetRankedHeroIDs() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<TSubclassOf<APlayerCharacter>> GetRankedHeroClasses() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetPlayerRankName(int32 Rank) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<APlayerCharacter> GetPlayerClassFromID(UPlayerCharacterID* ID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPlayerCharacterID* GetPlayerCharacterID(const FGuid& ID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPerkTierState(UObject* WorldContext, int32 Tier, bool& TierUnLocked, int32& NextRequiredCount, int32& NextProgressCount) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UInventoryList* GetInventoryList(UPlayerCharacterID* characterID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetHighestPerkTier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDifficultySetting* GetDifficultySetting(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDifficultyIndex(UDifficultySetting* NewDifficulty) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<APlayerCharacter> GetDefaultEditorCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<APlayerCharacter> GetDefaultCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRetirementCostItem GetCharacterRetirementCost(UObject* WorldContext, UPlayerCharacterID* ID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UPerkAsset*> GetCharacterNonEquippedPerks(UObject* WorldContext, UPlayerCharacterID* characterID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UPerkAsset*> GetCharacterEquippedPerks(UObject* WorldContext, UPlayerCharacterID* characterID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UPerkAsset*> GetAvailablePerks() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAmountOfPurchasedPerks(UObject* WorldContext) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UHUDVisibilityGroup*> GetAllVisibilityGroups() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UMissionStat*> GetAllMissionStats() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UMissionStat*> GetAllInfirmaryStats() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 CalculateClaimablePerkPoints(UObject* WorldContext) const;
    
    UGameData();
};

