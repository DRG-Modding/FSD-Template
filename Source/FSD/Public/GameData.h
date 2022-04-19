#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/Object.h"
#include "GVisibilityGroups.h"
#include "GDTerrainTypes.h"
#include "GDDamageClasses.h"
#include "GDPlayerAndCharacterProgression.h"
#include "GDDifficulty.h"
#include "GameplayTagContainer.h"
#include "GDItemCategoryIDs.h"
#include "GDPerks.h"
#include "GDGameStatsTracking.h"
#include "GDMilestones.h"
#include "GDMissionStats.h"
#include "GDStats.h"
#include "GDCharacterRetirement.h"
#include "GDResources.h"
#include "GDAudio.h"
#include "UObject/NoExportTypes.h"
#include "RetirementCostItem.h"
#include "GameData.generated.h"

class UTexture2D;
class AActor;
class UPromotionRewardsSettings;
class UEffectSettings;
class UNiagaraParameterCollection;
class UFSDEventCollection;
class UDLCBase;
class UMissionTemplate;
class UItemSettings;
class UGameAnimationSettings;
class UGameActivitySettings;
class ULegacySettings;
class UDanceSettings;
class UEnemySettings;
class UDamageSettings;
class UPlanetZoneSetup;
class UTreasureSettings;
class UFSDTutorialSettings;
class UVanitySettings;
class UDrinkSettings;
class UPlayerCharacterID;
class UUpgradeSettings;
class USpawnSettings;
class UKeyBindingSettings;
class UInventoryList;
class UDeepDiveSettings;
class UAchievementList;
class UEncounterSettings;
class USeasonSettings;
class UForginSettings;
class USchematicSettings;
class UItemSkinSettings;
class USpecialEventSettings;
class UProceduralSettings;
class UPickaxeSettings;
class UCampaignManager;
class UFSDTagSettings;
class UDataTable;
class UDynamicIconSettings;
class UShowroomSettings;
class UVictoryPoseSettings;
class UAfflictionSettings;
class UCommunityGoalSettings;
class UDailyDealSettings;
class UCharacterSettings;
class UMinersManual;
class APlayerCharacter;
class UBiome;
class UStatusEffectSettings;
class UGlobalMissionSetup;
class AProceduralSetup;
class UItemRefundList;
class USubsystem;
class UAsyncManager;
class UDifficultySetting;
class UPerkAsset;
class UHUDVisibilityGroup;
class UMissionStat;

UCLASS(BlueprintType)
class FSD_API UGameData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> BarrelClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGVisibilityGroups VisibilityGroups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraParameterCollection* NiagaraParameterCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDLCBase* AlwaysLockedDLC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPromotionRewardsSettings* PromotionRewardsSettings;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFSDEventCollection* FsdEventsSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGameActivitySettings* GameActivitySettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDanceSettings* DanceSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGameAnimationSettings* AnimationSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnemySettings* EnemySettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDamageSettings* DamageSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlanetZoneSetup* ZoneSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTreasureSettings* TreasureSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDrinkSettings* DrinkSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUpgradeSettings* UpgradeSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USpawnSettings* SpawnSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVanitySettings* VanitySettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKeyBindingSettings* KeyBindingSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDeepDiveSettings* DeepDiveSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEncounterSettings* EncounterSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UForginSettings* ForgingSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USchematicSettings* SchematicSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemSkinSettings* SkinSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USpecialEventSettings* SpecialEventSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UProceduralSettings* ProceduralSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPickaxeSettings* PickaxeSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFSDTagSettings* TagSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemSettings* ItemSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDynamicIconSettings* DynamicIconSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UShowroomSettings* ShowroomSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVictoryPoseSettings* VictoryPoseSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFSDTutorialSettings* TutorialSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULegacySettings* LegacySettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEffectSettings* EffectSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAfflictionSettings* AfflictionSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCommunityGoalSettings* CommunityGoalSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDailyDealSettings* DailyDealSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGDMissionStats MissionStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGDMilestones Milestones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGDPerks perks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGDItemCategoryIDs ItemCategoryIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> LoadoutIconList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMinersManual* MinersManual;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGDDamageClasses DamageClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGDStats Stats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGDResources Resources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGDTerrainTypes TerrainTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGDGameStatsTracking GameStatsTracking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGDAudio Audio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGDDifficulty Difficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStatusEffectSettings* StatusEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGDCharacterRetirement Retirement;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    FGDPlayerAndCharacterProgression PlayerAndCharacterProgression;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCharacterSettings* CharacterSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAchievementList* Achievements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* SchematicGATable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMissionTemplate*> TestMissions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UBiome> TestBiome;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGlobalMissionSetup* MissionSetup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UCampaignManager> CampaignManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayerCharacterID* BoscoID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UPlayerCharacterID*, UInventoryList*> InventoryLists;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBiome* DefaultBiome;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> GenericBiomeQuotes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMissionTemplate* DefaultMission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USeasonSettings* SeasonSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AProceduralSetup> CaveGeneratorPLSClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UItemRefundList*> ItemRefunds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<USubsystem>> BlueprintSubSystems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayerCharacterID* DefaultCharacterID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayerCharacterID* DefaultEditorCharacterID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag XBoxExcludeRoomTag;
    
public:
    UGameData();
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
    
};

