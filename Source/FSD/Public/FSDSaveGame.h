#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ItemNotificationInfo.h"
#include "GameFramework/SaveGame.h"
#include "VanityMasteryResult.h"
#include "CampaignSave.h"
#include "ESonyControllerMotionMapping.h"
#include "CharacterPerksSave.h"
#include "ESonyInputSettingsFloats.h"
#include "DeepDiveSave.h"
#include "CharacterSave.h"
#include "WatchedTutorial.h"
#include "ResourcesSave.h"
#include "UObject/NoExportTypes.h"
#include "AchievementSave.h"
#include "MissionStatSave.h"
#include "EventRewardSave.h"
#include "MilestoneSave.h"
#include "ESonyInputSettingsBools.h"
#include "ESonyControllerLightMode.h"
#include "PerkClaimsSave.h"
#include "VanityMasterySave.h"
#include "PromotionRewardsSave.h"
#include "SchematicSave.h"
#include "FSDEventRewardsSave.h"
#include "SeasonSave.h"
#include "UnLockedMissionParameters.h"
#include "UObject/NoExportTypes.h"
#include "GameDLCSave.h"
#include "EItemCategory.h"
#include "EFSDFaction.h"
#include "DrinkSave.h"
#include "ForgingSave.h"
#include "ItemUpgradeSelection.h"
#include "UpgradeLoadout.h"
#include "SkinList.h"
#include "ItemUINotifications.h"
#include "ConsoleOptionsInSaveGame.h"
#include "OptionsInSaveGame.h"
#include "GDKWinOptionsInSaveGame.h"
#include "SonyInputSettings.h"
#include "FSDSaveGame.generated.h"

class UItemID;
class UFSDSaveGame;
class UResourceData;
class UItemSkin;
class APlayerCharacter;
class AActor;
class UFSDGameInstance;
class UPlayerCharacterID;
class UVanityItem;
class UObject;

UCLASS(Blueprintable)
class FSD_API UFSDSaveGame : public USaveGame {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTutorialsResetDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSkinSignature, UItemSkin*, Skin, UItemID*, ItemID);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRetirementSignature, TSubclassOf<APlayerCharacter>, CharacterClass, int32, RetirementCount);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FResourceAmountChangedDelegate, UResourceData*, Resource, float, currentAmount);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPlayerProgressChangedSignature, int32, Rank, int32, Stars);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPersonalMatricsChangedSignature, bool, AllowPersonalMetrics);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPerkPointsChangedSignature, int32, PerkPoints, int32, Change);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FItemUnlockedDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FItemUINotificationDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FForgingXPDelegate, float, XP);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCreditsChangedSignature, int32, Credits);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCraftingMasteryChanged, FVanityMasteryResult, Result);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCharacterSignature, TSubclassOf<APlayerCharacter>, CharacterClass);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FCharacterProgressChangedSignature, TSubclassOf<APlayerCharacter>, CharacterClass, int32, Level, float, Progress);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAnonymousMatricsChangedSignature, bool, AllowAnonymousMetrics);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FCreditsChangedSignature OnCreditsChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FCharacterProgressChangedSignature OnCharacterSaveChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FCharacterSignature OnCharacterCanRetire;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRetirementSignature OnCharacterRetired;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPlayerProgressChangedSignature OnPlayerProgressChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTutorialsResetDelegate OnTutorialsReset;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPersonalMatricsChangedSignature OnPersonalMetricsChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAnonymousMatricsChangedSignature OnAnonymousMetricsChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FItemUnlockedDelegate OnItemUnlocked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FItemUnlockedDelegate OnItemPurchased;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FItemUINotificationDelegate OnItemUINotificationChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 VersionNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMilestoneResetShown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bYearTwoGiftClaimed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FForgingXPDelegate OnForgingXPChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FResourceAmountChangedDelegate OnResourceAmountChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSkinSignature OnSkinUnlocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime SaveSlotTimeStamp;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPerkPointsChangedSignature OnPerkPointsChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMissionStatSave MissionStatsSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMilestoneSave Milestones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPerkClaimsSave OwnedPerks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterPerksSave EquippedPerks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAchievementSave AchievementSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharacterPerksSave> EquippedPerkLoadouts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVanityMasterySave VanityMasterySave;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCraftingMasteryChanged OnVanityMasteryChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSchematicSave SchematicSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPromotionRewardsSave PromotionRewardsSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFSDEventRewardsSave FSDEventRewardsSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSeasonSave SeasonSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameDLCSave GameDLCSave;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SaveCreatedInPatch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AnonymousID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PerkPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasRecievedDiscordReward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFSDFaction Faction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGuid> UnLockedMissions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FUnLockedMissionParameters> UnLockedMissionParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGuid> UnLockedPlanetZones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCampaignSave CampaignSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDeepDiveSave DeepDiveSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharacterSave> CharacterSaves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Credits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LastBoughtDailyDealSeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FForgingSave Forging;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDrinkSave Drinks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FItemUpgradeSelection> ItemUpgradeSelections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUpgradeLoadout> ItemUpgradeLoadouts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGuid> PurchasedItemUpgrades;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGuid> UnlockedItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGuid> OwnedItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, int32> EnemiesKilled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FItemNotificationInfo> ItemsWithNotification;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FSkinList> UnlockedItemSkins;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FGuid> UnlockedPickaxeParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UVanityItem*> UnLockedVanityItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGuid> UnLockedVanityItemIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGuid> HiddenUICategories;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LastCollectedCommunityRewardPeriodID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FGuid> MinersManualKnownObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEventRewardSave EventRewardSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemUINotifications ItemUINotifications;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RejoinSessionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FirstRejoinAttempt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HaveSkinsBeenReset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasOpenedDeepDiveTerminal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FResourcesSave Resources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FirstSession;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWatchedTutorial> WatchedTutorials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FConsoleOptionsInSaveGame ConsoleOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGDKWinOptionsInSaveGame WinGDKOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOptionsInSaveGame WindowsOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasCompletedTutorial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasPlayedTutorial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowHowToRestartTutorialPrompt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasPlayedIntroMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasSentSteamInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasClaimedSteamGroupLoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsBoscoAllowed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasJoinedXboxClub;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasSeenAnalyticsPopUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AllowAnalyticsTracking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AllowPersonalAnalyticsTracking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsModded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TotalPlayTimeSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, int32> SelectedLoadout;
    
    UPROPERTY(EditAnywhere, Transient)
    uint32 userIdx;
    
    UPROPERTY(EditAnywhere, Transient)
    uint32 CurrLoadoutIdx;
    
    UPROPERTY(EditAnywhere)
    uint32 SaveToDiskCounter;
    
    UPROPERTY(EditAnywhere)
    uint32 BackupSaveIndex;
    
    UPROPERTY(EditAnywhere)
    uint32 ExternalBackupSaveIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfGamesPlayed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayerCharacterID* LastPlayedCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowInfoScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LastShownVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSonyInputSettings SonyInputSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFSDGameInstance* FSDGameInstance;
    
public:
    UFSDSaveGame();
    UFUNCTION(BlueprintCallable)
    bool TrySellResource(UResourceData* Resource, int32 Amount, int32& Price);
    
    UFUNCTION(BlueprintCallable)
    bool TryDeductResources(const TMap<UResourceData*, int32>& NewResources);
    
    UFUNCTION(BlueprintCallable)
    bool TryDeductCredits(int32 Amount);
    
    UFUNCTION(BlueprintCallable)
    bool TryBuyResource(UResourceData* Resource, int32 Amount, int32& Price);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldDisplayFirstSchematicMessage() const;
    
    UFUNCTION(BlueprintCallable)
    void SetSonyInputSettingMotionXMapping(ESonyControllerMotionMapping NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetSonyInputSettingLightMode(ESonyControllerLightMode NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetSonyInputSettingFloat(UObject* WorldContext, ESonyInputSettingsFloats Setting, float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetSonyInputSettingBool(ESonyInputSettingsBools Setting, bool NewValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetPersonalAnalytics(bool State);
    
    UFUNCTION(BlueprintCallable)
    void SetIsModded(bool modded);
    
    UFUNCTION(BlueprintCallable)
    void SetIndexAndName(int32 NewIndex, const FString& NewName);
    
    UFUNCTION(BlueprintCallable)
    void SetHasSentSteamInfo();
    
    UFUNCTION(BlueprintCallable)
    void SetHasJoinedXboxClub();
    
    UFUNCTION(BlueprintCallable)
    void SetHasClaimSteamGroupLoot();
    
    UFUNCTION(BlueprintCallable)
    void SetFaction(EFSDFaction newFaction, bool Reasign);
    
    UFUNCTION(BlueprintCallable)
    void SetEquippedItemID(EItemCategory Category, UPlayerCharacterID* PlayerId, UItemID* Item);
    
    UFUNCTION(BlueprintCallable)
    void SetEquippedItem(EItemCategory Category, UPlayerCharacterID* PlayerId, TSubclassOf<AActor> Item);
    
    UFUNCTION(BlueprintCallable)
    void SetDiscordReward(bool State);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterLoadout(UPlayerCharacterID* characterID, int32 loadoutNumber);
    
    UFUNCTION(BlueprintCallable)
    void SetBoscoAllowed(bool aIsBoscoAllowed);
    
    UFUNCTION(BlueprintCallable)
    bool SetAnonymousAnalytics(bool State);
    
    UFUNCTION(BlueprintCallable)
    void SaveToDisk();
    
    UFUNCTION(BlueprintCallable)
    static bool SaveSlotToDisk(UFSDSaveGame* SaveSlot, const FString& slotName, int32 NewUserIdx);
    
    UFUNCTION(BlueprintCallable)
    int32 RetireCharacter(UPlayerCharacterID* characterID);
    
    UFUNCTION(BlueprintCallable)
    void ResetTutorials();
    
    UFUNCTION(BlueprintCallable)
    void ResetSonyTouchSettings();
    
    UFUNCTION(BlueprintCallable)
    void ResetSonyMotionSettings();
    
    UFUNCTION(BlueprintCallable)
    void ResetSonyDualSenseSettings();
    
    UFUNCTION(BlueprintCallable)
    void ResetRejoinSessionId();
    
    UFUNCTION(BlueprintCallable)
    void RejoinAttempted();
    
    UFUNCTION(BlueprintCallable)
    void RefreshLoadoutFromCharacter(UPlayerCharacterID* characterID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool RecievedDiscordReward();
    
    UFUNCTION(BlueprintCallable)
    FString PromotedClassesString();
    
    UFUNCTION(BlueprintCallable)
    void MarkRetirementRewardScreenSeen(UPlayerCharacterID* characterID);
    
    UFUNCTION(BlueprintCallable)
    void MarkFirstSchematicMessageSeen();
    
    UFUNCTION(BlueprintCallable)
    void LevelUpCharacter(UObject* WorldContext, UPlayerCharacterID* characterID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsObsolete() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInMinersManual(FGuid ObjectID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFirstRejoinAttempt();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasSeenRetirementRewardScreen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasCredits(int32 Amount) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasCharacterRetired(UPlayerCharacterID* characterID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasCharacterCompletedRetirementCampaign(UPlayerCharacterID* characterID) const;
    
    UFUNCTION(BlueprintCallable)
    static bool HasBackupWithMoreProgress(UFSDGameInstance* GameInstance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnyCharacterRetired() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetTotalGamesPlayed();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalCharacterXP() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESonyControllerMotionMapping GetSonyInputSettingMotionXMapping() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESonyControllerLightMode GetSonyInputSettingLightMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSonyInputSettingFloat(ESonyInputSettingsFloats Setting) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSonyInputSettingBool(ESonyInputSettingsBools Setting) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDateTime GetSlotTimeStamp() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetSlotLoadedFrom() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSelectedLoadoutIndex(UPlayerCharacterID* characterID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetSaveSlotName(int32 NewUserIdx);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetResourceSellingPrice(UResourceData* Resource, int32 Amount) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetResourceBuyingPrice(UResourceData* Resource, int32 Amount) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetResourceAmount(const UResourceData* Resource) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRequiredXPForLevel(int32 Level) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetRejoinSessionId();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPurchasableItemCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerRetirementRank() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerRank() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPerkPoints() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMaxSaveSlots();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMainSaves(UFSDGameInstance* GameInstance, TArray<UFSDSaveGame*>& outMainSaves);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsModded();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetIndex();
    
    UFUNCTION(BlueprintCallable)
    bool GetHasSentSteamInfo();
    
    UFUNCTION(BlueprintCallable)
    bool GetHasClaimedSteamGroupLoot();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFSDFaction GetFaction();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UItemID* GetEquippedItemID(EItemCategory Category, UPlayerCharacterID* PlayerId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<AActor> GetEquippedItem(EItemCategory Category, UPlayerCharacterID* PlayerId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCredits() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetClassXP(UPlayerCharacterID* characterID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetClassLevel(UPlayerCharacterID* characterID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCharacterRetirementCount(const FGuid& PlayerId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetBoscoAllowed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetAvailableUserSlotIndex(UFSDGameInstance* GameInstance);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UFSDSaveGame*> GetAllSavesFromDisk(UFSDGameInstance* GameInstance);
    
    UFUNCTION(BlueprintCallable)
    void ForceSetIsModded(bool modded);
    
    UFUNCTION(BlueprintCallable)
    static void FixNamingOfMainSave(UFSDSaveGame* mainsave);
    
    UFUNCTION(BlueprintCallable)
    static bool DeleteFromDisk(UFSDGameInstance* GameInstance, const FString& slotName, int32 NewUserIdx);
    
    UFUNCTION(BlueprintCallable)
    bool DeductPerkPoints(int32 Amount);
    
    UFUNCTION(BlueprintCallable)
    void CheckPromotionAchievementProgress(UObject* WorldContext, bool IsRetroactive);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanAfford(const TMap<UResourceData*, int32>& NewResources) const;
    
    UFUNCTION(BlueprintCallable)
    void AddPerkPoints(int32 Amount);
    
    UFUNCTION(BlueprintCallable)
    void AddGamePlayed();
    
    UFUNCTION(BlueprintCallable)
    int32 AddCredits(int32 Amount);
    
    UFUNCTION(BlueprintCallable)
    int32 AddClassXP(UObject* WorldContext, UPlayerCharacterID* characterID, int32 XP);
    
};

