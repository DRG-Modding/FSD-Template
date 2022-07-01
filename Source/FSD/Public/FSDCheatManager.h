#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/CheatManager.h"
#include "CheatEventDelegate.h"
#include "FSDCheatManager.generated.h"

class UBaseCritterDescriptor;
class AActor;
class UPlayerCharacterID;
class UEnemyDescriptor;
class APawn;
class AFSDAIController;
class UObject;
class APlayerCharacter;
class UResourceData;

UCLASS(Blueprintable)
class FSD_API UFSDCheatManager : public UCheatManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 RoomJumpCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float PreviousMaxDistanceBeforeCleanup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool UnlimitedScoutFlareDuration;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCheatEvent ToggleHoopGameMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* SpawnPosMarker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool EscortShowSmartRockDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsUsingSavedCheats;
    
public:
    UFSDCheatManager();
    UFUNCTION(BlueprintCallable)
    void SwitchCharacter(UPlayerCharacterID* characterID);
    
    UFUNCTION(BlueprintCallable)
    void SpawnEnemies(UEnemyDescriptor* desscriptor, int32 count);
    
    UFUNCTION(BlueprintCallable)
    void SpawnCritters(UBaseCritterDescriptor* descriptor, int32 count);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SpawnBosco(TSoftClassPtr<APawn> droneClass, TSubclassOf<AFSDAIController> aControllerClass);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowTutorialDebug();
    
    UFUNCTION(BlueprintCallable)
    void SetStandingDown(bool standingDown);
    
    UFUNCTION(BlueprintCallable)
    void SetSpawnEnemies(bool NewSpawnEnemies);
    
protected:
    UFUNCTION(BlueprintCallable)
    static bool SetSavedCheatValue(const FName CheatName, const int32& ValueToSet);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetQuadPickAxe(bool quad);
    
    UFUNCTION(BlueprintCallable)
    void SetHUDVisible(bool ShowHUD);
    
    UFUNCTION(BlueprintCallable)
    void SetGodMode(bool God);
    
    UFUNCTION(BlueprintCallable)
    void SetFastMovement(bool fast);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ResetTutorials();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ResetSpacerigIntroMessage();
    
    UFUNCTION(BlueprintCallable, Exec)
    void R_RemoveResources(int32 Number);
    
    UFUNCTION(BlueprintCallable, Exec)
    void R_RemoveCredits(int32 Number);
    
    UFUNCTION(BlueprintCallable, Exec)
    void R_AddSeasonToken(int32 Number);
    
    UFUNCTION(BlueprintCallable, Exec)
    void R_AddResources_Player(float Number);
    
    UFUNCTION(BlueprintCallable, Exec)
    void R_AddResources(float Number);
    
    UFUNCTION(BlueprintCallable, Exec)
    void R_AddPerkPoints(int32 Amount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void R_AddNitra(float Amount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void R_AddMorkite(float Amount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void R_AddMatrixCores(int32 Number);
    
    UFUNCTION(BlueprintCallable, Exec)
    void R_AddHollomite(float Amount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void R_AddGold(float Amount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void R_AddDystrum(float Amount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void R_AddCredits(int32 Number);
    
    UFUNCTION(BlueprintCallable, Exec)
    void R_AddCraftingResource(int32 Amount, int32 Type);
    
    UFUNCTION(BlueprintCallable, Exec)
    void R_Add_Phazyonite(int32 Amount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void R_Add_BitterGem(int32 Amount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void R_Add_Aquarq(int32 Amount);
    
    UFUNCTION(BlueprintCallable)
    bool IsInGodMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFlyModeActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFastMovementActive() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    static bool GetSavedCheatValue(const FName CheatName, int32& ValueToGet);
    
public:
    UFUNCTION(BlueprintCallable)
    void GetListOfRoomNames(TArray<FString>& roomNames);
    
    UFUNCTION(BlueprintCallable)
    void DestroyAllInstances(TSubclassOf<AActor> destroy);
    
    UFUNCTION(BlueprintCallable, Exec)
    void D_Rejoin_RestoreState();
    
    UFUNCTION(BlueprintCallable, Exec)
    void D_MovieModeStartWithCameraShake(bool Value);
    
    UFUNCTION(BlueprintCallable, Exec)
    void D_MovieModeStartAtOrigin(bool Value);
    
    UFUNCTION(BlueprintCallable, Exec)
    void D_EnableMovieModeInSpacerig(bool Value);
    
    UFUNCTION(BlueprintCallable, Exec)
    void D_EnableMovieMode(bool Value);
    
    UFUNCTION(BlueprintCallable)
    static void Cheat_UnlockAllWeapons(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void Cheat_UnlockAllUpgrades(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void Cheat_UnlockAll_Poses(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void Cheat_UnlockAll_Beers(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    void Cheat_SetSpawnPosMarker(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Cheat_SetHealth(float newHealthValue, APlayerCharacter* Player);
    
    UFUNCTION(BlueprintCallable)
    static void Cheat_Schematic_UnlockAll(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void Cheat_Schematic_ResetAll(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void Cheat_Schematic_GiveRandom(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void Cheat_Schematic_ForgeAll(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void Cheat_Resources(UObject* WorldContextObject, float Amount);
    
    UFUNCTION(BlueprintCallable)
    static void Cheat_ResetEquippedUpgrades(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void Cheat_RemoveResources(UObject* WorldContextObject, int32 Amount);
    
    UFUNCTION(BlueprintCallable)
    static void Cheat_PickAxeVanity_UnlockAll(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void Cheat_PickAxeVanity_ResetAll(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void Cheat_MinersManual_ShowAll(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void Cheat_GenerateNewMissionSeed(UObject* WorldContextObject, bool Enabled);
    
    UFUNCTION(BlueprintCallable)
    static void Cheat_ForceTreasure(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void Cheat_ForceLostPack(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void Cheat_DeepDives_Refresh(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void Cheat_Campaign_Complete(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void Cheat_Campaign_Advance(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void Cheat_AddXP(UObject* WorldContextObject, int32 Amount);
    
    UFUNCTION(BlueprintCallable)
    static void Cheat_AddPerkPoints(UObject* WorldContextObject, int32 Amount);
    
    UFUNCTION(BlueprintCallable)
    static void Cheat_AddCredits(UObject* WorldContextObject, int32 Amount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_Windows_PrintStack() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_Windows_CloseAll() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_VanityMasteryResetXP();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_VanityMasteryAddXP(int32 Number);
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_UnlockOverclocking();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_UnlockAll_WeaponUpgrades();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_UnlockAll_WeaponSkins_Paintjobs();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_UnlockAll_WeaponSkins_Frameworks();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_UnlockAll_WeaponSkins();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_UnlockAll_Weapons();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_UnlockAll_StoreVanity();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_UnlockAll_Poses_ForAll();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_UnlockAll_Poses();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_UnlockAll_PickaxeParts();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_UnlockAll_Perks();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_UnlockAll_Drinks();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_UnlockAll_Beers();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_UnlockAll_ArmorMats();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_UnlockAll();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_Unlock_Facility();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_Treasures_Track(int32 Mode);
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_Treasures_Reward(int32 count);
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_ToggleHoopGameMovement();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_ToggleFadingEnabled();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_ToggleFadingDebug();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_ToggleCanShowBlood();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_StopMovement(bool shouldMove);
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_SpawnScriptedWaveIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_SpawnScriptedWave();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_SpawnNormalWave();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_SpawnEvenRewarder();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_SpawnBarrelOnPlayer(int32 Amount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_SetUseSavedCheatsByDefault(bool useSavedCheats);
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_SetTestMission(int32 missionIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_SetTestingCharacter(UPlayerCharacterID* characterID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_SetSavedCheats();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_SetPlayers(int32 Number);
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_SetInstantUsables(bool Value);
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_SetHealth(float Health);
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_SetFlyMode(bool flyEnabled);
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_SetFastFlares();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_SetEnglish(int32 Val);
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_SetDancing(bool shouldDance);
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_SetAmmoCostEnabled(bool Enabled);
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_Seasons_ResetXP();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_Seasons_ResetTreeOfVanity();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_Seasons_ResetToken();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_Seasons_ResetReroll();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_Seasons_IncrementChallenge(int32 Index);
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_Seasons_CompleteScripChallenge(int32 Number);
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_Seasons_ClearChallenges();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_Seasons_ClearAllProgress();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_Seasons_AddXP(int32 Number);
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_Seasons_AddChallenge();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_ScoutFlareInfiniteDuration(bool Enabled);
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_Schematics_UnlockAll();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_Schematics_ResetAll();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_Schematics_ForgeAll();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_Schematics_ClearHasSeenFirstMessage();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_Schematic_GiveRandom();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_Revive();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_Resupply();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_ResetSteamAchievementStats();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_ResetForgingXP();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_ResetCheatedResources(int32 newAmount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_ResetAll_Vanity();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_ResetAchievements();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_Reset_YearTwoGifts();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_Reset_WeaponSkinsAndUpgrades();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_Reset_WeaponSkins_Paintjobs();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_Reset_WeaponSkins_Framworks();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_Reset_WeaponSkins();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_Reset_Poses();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_Reset_PickaxeParts();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_Reset_Perks();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_Reset_MinersManual();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_Reset_EnemyKillCount();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_Reset_Drinks();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_RemovePlayerRanks(int32 Number);
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_RemoveAllWidgets();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_RefreshDailyDeal(int32 Seed);
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_Refinery_BreakPipes();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_RecordMode();
    
    UFUNCTION(BlueprintCallable)
    void C_Promotion_SetLevelSpecific(APlayerCharacter* onCharacter, int32 Number);
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_Promotion_SetLevel(int32 Number);
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_Promotion_SetCampaignComplete();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_Promotion_ClearRewardsSeen();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_ProjectileDrawPaths();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_ProjectileDebugPrintToggle();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_MissionMap_TestDistribution();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_MissionMap_ForceWarning(int32 Index);
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_MissionMap_ForceAnomaly(int32 Index);
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_MissionMap_DoubleWarning(int32 indexA, int32 indexB);
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_MinersManual_EnableWorkInProgress(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_MachineEvents_Track(bool Track);
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_MachineEvents_FinishCurrent();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_LevelUpCharacter(int32 Amount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_KillTeam();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_KillPlayer();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_KillAll();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_JumpToNextRoom();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_Intoxication_SetAll(int32 Percent);
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_Intoxication_Set(int32 Percent);
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_IncrementAllMissionStats(int32 Amount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_GodMode();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_GiveAllGenericHeroItems();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_GameDLC_ResetAnnouncements();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_FSDEvent_SetDebugEvent(const FString& EventName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_FSDEvent_ClearSeenRewards();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_ForceCrash();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_FixedPLSSeed(int32 Seed);
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_FixedMissionSeed(int32 Seed);
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_FailMission();
    
    UFUNCTION(BlueprintCallable, Exec)
    static void C_FadeFromBlack(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_Facility_DisableShields();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_Escort_ShowSmartRockDebug(bool shouldShow);
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_Escort_SetMuleSpeed(UObject* WorldContextObject, float Speed);
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_Escort_JumpToNextPhase(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_Escort_AddOilShale(int32 Number);
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_DeepDives_UnlockAll();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_DeepDives_SetSeed(int32 Seed);
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_DeepDives_Reset();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_DeepDives_Refresh();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_DeepDives_List();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_CompleteObjectives();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_CompleteMission();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_ClearAllMissionStats();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_ClearAllMilestones();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_Campaign_ResetProgress();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_Campaign_ResetCompleted();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_Campaign_CompleteMain();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_Campaign_CompleteCurrent();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_Campaign_Advance();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_AutoRotateMissionMap(bool Enabled);
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_AddXP(int32 Number);
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_AddUncappedXP(int32 Amount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_AddForgingXP(int32 Number);
    
    UFUNCTION(BlueprintCallable)
    void AddResourceToTeamDeposit(UResourceData* Resource, float Amount);
    
};

