#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Engine/GameInstance.h"
#include "EAlwaysLoadedWorlds.h"
#include "FindSessionsCallbackProxy.h"
#include "PendingRewards.h"
#include "EMinersManualSection.h"
#include "ECharselectionCameraLocation.h"
#include "ClaimableRewardEntry.h"
#include "CharacterViewScene.h"
#include "NetworkConnectionInfo.h"
#include "FSDServerSearchOptions.h"
#include "FadeData.h"
#include "UObject/NoExportTypes.h"
#include "GameStateSeamlessTravelStorage.h"
#include "ESteamSearchRegion.h"
#include "ESteamServerJoinStatus.h"
#include "EDisconnectReason.h"
#include "UObject/NoExportTypes.h"
#include "SpaceRigNotification.h"
#include "UObject/NoExportTypes.h"
#include "ECharacterSelectorItemStatus.h"
#include "Engine/EngineBaseTypes.h"
#include "PendingRewardsStats.h"
#include "FSDGameInstance.generated.h"

class UCampaignManager;
class ULevelSequence;
class APlayerCharacter;
class UMissionResultInfo;
class UTemporaryBuff;
class AFSDPlayerController;
class APostProcessingManager;
class AActor;
class ATutorialManager;
class UItemSkin;
class UFSDFriendsAndInvites;
class UWorld;
class UMouseCursorWidget;
class AItem;
class USpecialEvent;
class AProceduralSetup;
class UFSDSendToURL;
class UGeneratedMission;
class UCampaignNotification;
class UDeepDiveManager;
class UGoogleAnalyticsWrapper;
class AMolly;
class ABosco;
class UWindowWidget;
class UFSDGameInstance;
class UTexture2D;
class ACharacterSelectionSwitcher;
class UHUDWarningWidget;
class UIconGenerationManager;
class UDifficultySetting;
class UMutator;
class UObject;
class UFSDSaveGame;
class USchematic;
class UFSDCloudLoadSave;
class UTexture;
class UFSDSessionUpdater;
class USoundSubmix;
class UNetDriver;
class USoundBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFSDGameInstanceOnTemporaryBuffChanged, UTemporaryBuff*, buff, APlayerCharacter*, AffectedPlayer);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFSDGameInstanceOnGameSettingsChanged);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFSDGameInstanceOnPlayLevelSequenceInCharacterWorld, ULevelSequence*, CharacterLevelSequence);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFSDGameInstanceOnLoaderStop);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFSDGameInstanceOnLoaderStart, ULevelSequence*, LoaderLevelSequence);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFSDGameInstanceOnSkinChangedEvent);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFSDGameInstanceOnGraphicsSettingsChanged);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFSDGameInstanceOnShowCharacterSelectionRefresh);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFSDGameInstanceOnPressStart);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFSDGameInstanceOnForgingDone);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFSDGameInstanceOnJoinPendingInvite, FBlueprintSessionResult, Session);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FFSDGameInstanceOnMinersManualNotification, EMinersManualSection, Section, FGuid, ObjectID, FText, Text);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFSDGameInstanceOnCharacterSelectionStart, ECharselectionCameraLocation, selectionLocation);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFSDGameInstanceOnStartForging);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFSDGameInstanceOnGeneratedMissionChanged, UGeneratedMission*, OutGeneratedMission);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFSDGameInstanceOnCharacterSelectionStop);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFSDGameInstanceOnTutorialManagerSet, ATutorialManager*, NewManager);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFSDGameInstanceOnLocalPlayerCharacterSet, APlayerCharacter*, PlayerCharacter);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFSDGameInstanceOnShowViewer3D, TSubclassOf<AActor>, Actor, ECharselectionCameraLocation, selectionLocation);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFSDGameInstanceOnShowReconnectScreen, bool, Show);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFSDGameInstanceOnXBoxAccountPickerClosed);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFSDGameInstanceOnXBoxChangeUser);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFSDGameInstanceOnHDRGammaChanged);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFSDGameInstanceOnGravityChanged, float, CurrentGravity, float, Change);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFSDGameInstanceOnNewPostProcessingManager, APostProcessingManager*, PostProcessingManager);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFSDGameInstanceOnPreviewSkinChanged, UItemSkin*, Skin);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFSDGameInstanceOnShowCharacterSelectorEquip, TSubclassOf<AItem>, itemClass, int32, EquipSlot);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFSDGameInstanceOnShowCharacterSelector, TSubclassOf<APlayerCharacter>, NewCharacter, ECharselectionCameraLocation, selectionLocation);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFSDGameInstanceOnShowCharacterSelectorEquipSlot, int32, EquipSlot);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFSDGameInstanceOnShowCharacterSelectorRotate, float, Pitch, float, Yaw);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFSDGameInstanceOnShowEndScreen, FCharacterViewScene, viewScene);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFSDGameInstanceOnDonkeyChanged, AMolly*, InDonkey);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFSDGameInstanceOnPrivilegeCheckComplete);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFSDGameInstanceOnBoscoChanged, ABosco*, Bosco);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFSDGameInstanceOnSteamSearchRegionChanged, ESteamSearchRegion, Region);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFSDGameInstanceOnSteamServerJoinStatusChanged, ESteamServerJoinStatus, Status);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFSDGameInstanceOnStartSearchForFriendsComplete, bool, bWasSuccessful, const FString&, ErrorStr);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFSDGameInstanceOnNewSpaceRigNotification, UFSDGameInstance*, GameInstance);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFSDGameInstanceOnCampaignNotification, UCampaignNotification*, Notification);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFSDGameInstanceOnNewHUDWarning, UHUDWarningWidget*, newWidget);

UCLASS(NonTransient)
class UFSDGameInstance : public UGameInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FFSDGameInstanceOnTemporaryBuffChanged OnTemporaryBuffChanged;
    
    UPROPERTY(BlueprintAssignable)
    FFSDGameInstanceOnGameSettingsChanged OnGameSettingsChanged;
    
    UPROPERTY(BlueprintAssignable)
    FFSDGameInstanceOnGraphicsSettingsChanged OnGraphicsSettingsChanged;
    
    UPROPERTY(BlueprintAssignable)
    FFSDGameInstanceOnPressStart OnPressStart;
    
    UPROPERTY(BlueprintAssignable)
    FFSDGameInstanceOnJoinPendingInvite OnJoinPendingInvite;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FFSDGameInstanceOnSkinChangedEvent OnSkinChangedEvent;
    
    UPROPERTY(BlueprintAssignable)
    FFSDGameInstanceOnLoaderStart OnLoaderStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FFSDGameInstanceOnPlayLevelSequenceInCharacterWorld OnPlayLevelSequenceInCharacterWorld;
    
    UPROPERTY(BlueprintAssignable)
    FFSDGameInstanceOnLoaderStop OnLoaderStop;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FFSDGameInstanceOnCharacterSelectionStart OnCharacterSelectionStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FFSDGameInstanceOnStartForging OnStartForging;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FFSDGameInstanceOnForgingDone OnForgingDone;
    
    UPROPERTY(BlueprintAssignable)
    FFSDGameInstanceOnCharacterSelectionStop OnCharacterSelectionStop;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FFSDGameInstanceOnShowCharacterSelectionRefresh OnShowCharacterSelectionRefresh;
    
    UPROPERTY(BlueprintAssignable)
    FFSDGameInstanceOnTutorialManagerSet OnTutorialManagerSet;
    
    UPROPERTY(BlueprintAssignable)
    FFSDGameInstanceOnLocalPlayerCharacterSet OnLocalPlayerCharacterSet;
    
    UPROPERTY(BlueprintAssignable)
    FFSDGameInstanceOnShowReconnectScreen OnShowReconnectScreen;
    
    UPROPERTY(BlueprintAssignable)
    FFSDGameInstanceOnXBoxAccountPickerClosed OnXBoxAccountPickerClosed;
    
    UPROPERTY(BlueprintAssignable)
    FFSDGameInstanceOnXBoxChangeUser OnXBoxChangeUser;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FFSDGameInstanceOnHDRGammaChanged OnHDRGammaChanged;
    
    UPROPERTY(BlueprintAssignable)
    FFSDGameInstanceOnGravityChanged OnGravityChanged;
    
    UPROPERTY(BlueprintAssignable)
    FFSDGameInstanceOnNewPostProcessingManager OnNewPostProcessingManager;
    
    UPROPERTY(BlueprintCallable)
    FFSDGameInstanceOnPreviewSkinChanged OnPreviewSkinChanged;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool ShowingReconnectScreen;
    
    UPROPERTY(Transient)
    FPendingRewards PendingMissionRewards;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    TArray<FClaimableRewardEntry> PendingPromotionRewards;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    TWeakObjectPtr<UMouseCursorWidget> MouseCursorWidget;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FFSDGameInstanceOnShowCharacterSelector OnShowCharacterSelector;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FFSDGameInstanceOnShowViewer3D OnShowViewer3D;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FFSDGameInstanceOnShowCharacterSelectorEquipSlot OnShowCharacterSelectorEquipSlot;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FFSDGameInstanceOnShowCharacterSelectorEquip OnShowCharacterSelectorEquip;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FFSDGameInstanceOnShowCharacterSelectorRotate OnShowCharacterSelectorRotate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FFSDGameInstanceOnShowEndScreen OnShowEndScreen;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    AProceduralSetup* ProceduralSetup;
    
    UPROPERTY(Transient)
    bool HasStartedAMission;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    FString FSDPassword;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool FSDPrivateServer;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool SoloSession;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool IsJoiningInvite;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool FirstTimeInFrontend;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool SessionFirstStartOnSpaceRig;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool ShowFirstCharacterSelector;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool ShowSaveWarning;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    AActor* WorldViewTargetDummy;
    
    UPROPERTY(BlueprintReadWrite)
    UMissionResultInfo* MissionResultInfo;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool LoaderSequencePlaying;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FString LastPerksLoadout;
    
    UPROPERTY(Transient)
    AActor* CharacterSelectionLastViewTarget;
    
    UPROPERTY(Transient)
    bool HasSeenInfoScreen;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    FTransform CharacterSelectionViewTargetTransform;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    FTransform LoaderViewTargetTransform;
    
    UPROPERTY(BlueprintAssignable)
    FFSDGameInstanceOnGeneratedMissionChanged OnGeneratedMissionChanged;
    
    UPROPERTY()
    FGameStateSeamlessTravelStorage GameStateSeamlessTravelStorage;
    
    UPROPERTY(BlueprintAssignable)
    FFSDGameInstanceOnDonkeyChanged OnDonkeyChanged;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TWeakObjectPtr<AMolly> Donkey;
    
    UPROPERTY(BlueprintAssignable)
    FFSDGameInstanceOnBoscoChanged OnBoscoChanged;
    
    UPROPERTY(BlueprintReadOnly)
    bool DEBUGSpawnRandomMissions;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    int32 DEBUGFixedPLSSeed;
    
    UPROPERTY(BlueprintReadWrite)
    int32 DEBUGSeedOverride;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool CanPlayOnline;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool CanCommunicateOnline;
    
    UPROPERTY(BlueprintAssignable)
    FFSDGameInstanceOnSteamSearchRegionChanged OnSteamSearchRegionChanged;
    
    UPROPERTY(BlueprintAssignable)
    FFSDGameInstanceOnSteamServerJoinStatusChanged OnSteamServerJoinStatusChanged;
    
    UPROPERTY(BlueprintAssignable)
    FFSDGameInstanceOnStartSearchForFriendsComplete OnStartSearchForFriendsComplete;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    TMap<FString, FString> FriendSessions;
    
    UPROPERTY(BlueprintAssignable)
    FFSDGameInstanceOnNewSpaceRigNotification OnNewSpaceRigNotification;
    
    UPROPERTY(BlueprintReadWrite)
    UGoogleAnalyticsWrapper* GoogleAnalyticsWI;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    USpecialEvent* ForcedSpecialEvent;
    
    UPROPERTY(BlueprintReadOnly)
    bool ShowMinerManualWorkInProgress;
    
    UPROPERTY(BlueprintAssignable)
    FFSDGameInstanceOnCampaignNotification OnCampaignNotification;
    
    UPROPERTY(BlueprintAssignable)
    FFSDGameInstanceOnMinersManualNotification OnMinersManualNotification;
    
    UPROPERTY(BlueprintAssignable)
    FFSDGameInstanceOnNewHUDWarning OnNewHUDWarning;
    
protected:
    UPROPERTY(BlueprintReadWrite)
    float LastDreadnaughtKillTime;
    
    UPROPERTY(BlueprintReadWrite, Export)
    TWeakObjectPtr<UWindowWidget> ActiveEscapeMenu;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UCampaignNotification* CampaignNotification;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<APostProcessingManager> PostProcessingManager;
    
    UPROPERTY(EditAnywhere)
    FFadeData Fading;
    
    UPROPERTY(Transient)
    TArray<FSpaceRigNotification> SpaceRigNotifications;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TWeakObjectPtr<ABosco> Drone;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TWeakObjectPtr<APlayerCharacter> LocalPlayerCharacter;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TWeakObjectPtr<ATutorialManager> TutorialManager;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    ACharacterSelectionSwitcher* CharacterSelectionSwitcher;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bGameSettingsChanged;
    
    UPROPERTY(BlueprintReadOnly)
    FFSDServerSearchOptions ServerSearchOptions;
    
    UPROPERTY(BlueprintReadOnly)
    bool ServerSearchActive;
    
    UPROPERTY(BlueprintAssignable)
    FFSDGameInstanceOnPrivilegeCheckComplete OnPrivilegeCheckComplete;
    
    UPROPERTY(Transient)
    bool IsOnPressStartScreen;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool HasSeenStartScreen;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<AProceduralSetup> ProceduralLevel;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UIconGenerationManager> IconGenerationManagerClass;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UIconGenerationManager* IconGenerationManager;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UCampaignManager* CampaignManager;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UDeepDiveManager* DeepDiveManager;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UGeneratedMission* GeneratedMission;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    UDifficultySetting* DesiredDifficulty;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    UFSDSaveGame* SaveGame;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    EDisconnectReason DisconnectReason;
    
    UPROPERTY(Transient)
    TArray<UWorld*> AlwaysLoadedWorlds;
    
    UPROPERTY(Transient)
    bool ShowCharacterSelectionWorld;
    
    UPROPERTY(Transient)
    TSubclassOf<AActor> Viewer3DClass;
    
    UPROPERTY(Transient)
    bool ShowLoaderWorld;
    
    UPROPERTY(Transient)
    bool CharacterSelectionWorldActive;
    
    UPROPERTY(BlueprintReadWrite)
    bool MixerInteractivityEnabled;
    
    UPROPERTY(Transient)
    bool LoaderWorldActive;
    
    UPROPERTY(Transient)
    bool ResetHUDWhenReturning;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool MovieModeActive;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool MovieModeActiveInSpacerig;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool MovieModeStartAtOrigin;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool MovieModeStartWithCameraShake;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    USchematic* ActiveForgeSchematic;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UFSDCloudLoadSave* FSDCloudLoadSave;
    
    UPROPERTY(Transient)
    UFSDSessionUpdater* SessionUpdater;
    
    UPROPERTY(Transient)
    UFSDSendToURL* SendToURL;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UFSDFriendsAndInvites* FriendsAndInvites;
    
    UPROPERTY(Transient)
    double SessionStartTime;
    
    UPROPERTY(Transient)
    int32 SessionStartTimestamp;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float InKBytesPerSecond;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float OutKBytesPerSecond;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool PreSpawnNigaraParticles;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UTemporaryBuff* TemporaryBuff;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    TSoftObjectPtr<ULevelSequence> NextLoaderSequence;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    EAlwaysLoadedWorlds NextLoaderLevel;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<ULevelSequence> DeepDiveLoaderSequence;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<ULevelSequence> DeepDiveLoaderSequence2;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundSubmix* ControllerVibrationSubmix;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundSubmix* ControllerSpeakerSubmix;
    
public:
    UFUNCTION(BlueprintCallable)
    void UpdateGlobelMissionSeed();
    
    UFUNCTION(BlueprintCallable)
    void StopPhotographyInputProcessor();
    
    UFUNCTION(BlueprintCallable)
    void StopPersonalAnalytics();
    
    UFUNCTION(BlueprintCallable)
    void StartPhotographyInputProcessor();
    
    UFUNCTION(BlueprintCallable)
    void StartPersonalAnalytics();
    
    UFUNCTION(BlueprintCallable)
    AProceduralSetup* SpawnProcedural();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldPendingRewardsBeShown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldPendingRewardsBeGiven() const;
    
    UFUNCTION(BlueprintCallable)
    void SetViewer3DClass(TSubclassOf<AActor> NewClass, ECharselectionCameraLocation Location);
    
    UFUNCTION(BlueprintCallable)
    void SetSteamServerJoinStatus(ESteamServerJoinStatus NewStatus);
    
    UFUNCTION(BlueprintCallable)
    void SetSteamSearchRegion(ESteamSearchRegion NewRegion);
    
    UFUNCTION(BlueprintCallable)
    void SetServerSearchOptions(const FFSDServerSearchOptions& options);
    
    UFUNCTION(BlueprintCallable)
    void SetServerSearchActive(bool Active);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectedMission(UGeneratedMission* mission, bool updateSessionSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetProceduralMap(TSubclassOf<AProceduralSetup> procedural);
    
    UFUNCTION(BlueprintCallable)
    void SetPendingInviteJoinModding(const FBlueprintSessionResult& Result);
    
    UFUNCTION(BlueprintCallable)
    void SetMinersManualNotification(EMinersManualSection Section, UObject* IdentifyingObject, FText Text);
    
    UFUNCTION(BlueprintCallable)
    void SetLoaderWorldVisible(bool V, bool resetHud);
    
    UFUNCTION(BlueprintCallable)
    void SetIsUsingOnlineFeatures(bool bIsOnlineFeatureUsed);
    
    UFUNCTION(BlueprintCallable)
    void SetHasSeenInfoScreen();
    
    UFUNCTION(BlueprintCallable)
    void SetFSDPassword(const FString& pw);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetEligableForRetirementAssignment(bool eligable);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterSelectionWorldVisible(bool V, ECharselectionCameraLocation cameraLocation, bool resetHud, ECharacterSelectorItemStatus itemStatus);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterSelectionSwitcher(ACharacterSelectionSwitcher* switcher);
    
    UFUNCTION(BlueprintCallable)
    void SendSteamInfo();
    
    UFUNCTION(BlueprintCallable)
    void ScheduleResetOfWorldsAndGameDataThenOpenLevel(FName LevelName);
    
    UFUNCTION(BlueprintCallable)
    void RestoreCursors();
    
    UFUNCTION(BlueprintCallable)
    void ResetViewer3DClass();
    
    UFUNCTION(BlueprintCallable)
    void ResetSaveGame();
    
    UFUNCTION(BlueprintCallable)
    void ResetAlwaysLoadedWorldsAndGameData();
    
    UFUNCTION(BlueprintCallable)
    void RemoveRemporaryBuff();
    
    UFUNCTION(BlueprintCallable)
    void RemoveBosco();
    
    UFUNCTION(BlueprintCallable)
    void RefreshIsGameModded();
    
private:
    UFUNCTION(BlueprintCallable)
    void PostInit(bool reload);
    
public:
    UFUNCTION(BlueprintCallable)
    void PairingUsePreviousProfile();
    
    UFUNCTION(BlueprintCallable)
    void PairingUseNewProfile();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnNewFSDSessionID(const FString& sessionId);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnNetworkFailure(UWorld* World, UNetDriver* NetDriver, TEnumAsByte<ENetworkFailure::Type> failType, const FString& errorMessage);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLoadComplete(const FString& MapName);
    
    UFUNCTION(BlueprintCallable)
    void LoadSaveGame(UFSDSaveGame* toLoad);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsScreenFadingToBlack(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsScreenFadingFromBlack(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsScreenFading(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPendingInvitePasswordProtected();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPendingInviteModded();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMutatorActive(TSubclassOf<UMutator> mutatorClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGameModded();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFreeBeerRewardActive() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsCampaignMission();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasTooManyModsEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasSignedIn();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasPendingInvite() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasPendingActivity() const;
    
    UFUNCTION(BlueprintCallable)
    bool HasAnalytics();
    
    UFUNCTION(BlueprintCallable)
    void GraphicsUserSettingsChanged();
    
    UFUNCTION(BlueprintCallable)
    void GiveTemporaryBuff(UTemporaryBuff* buff, APlayerCharacter* Player);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetViewportSize();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftClassPtr<AProceduralSetup> GetSoftReferenceToPLS();
    
    UFUNCTION(BlueprintCallable)
    TArray<FBlueprintSessionResult> GetServersFriendsArePlaying(TArray<FBlueprintSessionResult> servers);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPendingRewards(FPendingRewardsStats& OutStats, FPendingRewards& OutRewards) const;
    
    UFUNCTION(BlueprintCallable)
    bool GetNextSpaceRigNotification(FSpaceRigNotification& NextNotification);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UMutator*> GetMutators(TSubclassOf<UMutator> mutatorClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxPublicConnections() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxAllowedMods() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFSDPlayerController* GetLocalFSDPlayerController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIconGenerationManager* GetIconGenerationManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetHasSeenInfoScreen();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetGlobalMissionSeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGeneratedMission* GetGeneratedMission() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMutator* GetFirstMutator(TSubclassOf<UMutator> mutatorClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentFadeAmount() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FNetworkConnectionInfo> GetConnectionInfo();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APlayerCharacter* GetCharacterSelectorCharacter();
    
    UFUNCTION(BlueprintCallable)
    void GameUserSettingsChanged();
    
    UFUNCTION(BlueprintCallable)
    static void FadeScreenToBlack(UObject* WorldContext, float FadeTime, float Delay, bool ResetExistingFades, bool CapFramerate, bool FadeWorldOnly, bool ToSpaceRig, UTexture* loadingImage);
    
    UFUNCTION(BlueprintCallable)
    static void FadeScreenFromBlack(UObject* WorldContext, float FadeTime, float Delay, bool ResetExistingFades, bool CapFramerate, bool FadeWorldOnly, bool ToSpaceRig);
    
    UFUNCTION(BlueprintCallable)
    void CloseSessionLobby();
    
    UFUNCTION(BlueprintCallable)
    void ClearPendingRewards();
    
    UFUNCTION(BlueprintCallable)
    void ClearGameStateSeamlessTravelStorage();
    
    UFUNCTION(BlueprintCallable)
    void ClearCampaignNotifications();
    
    UFUNCTION(BlueprintCallable)
    void ChangeSkinPreview(UItemSkin* PreviewSkin);
    
    UFUNCTION(BlueprintCallable)
    void CancelJoin();
    
    UFUNCTION(BlueprintCallable)
    static void BlackoutScreen(UObject* WorldContext, bool FadeWorldOnly);
    
    UFUNCTION(BlueprintCallable)
    UHUDWarningWidget* AddWarningToHUD(TSubclassOf<UHUDWarningWidget> WidgetClass, UTexture2D* Texture, USoundBase* PingSound);
    
    UFUNCTION(BlueprintCallable)
    void AddToFriendSessions(const FString& friendSessionId, const FString& friendName);
    
    UFUNCTION(BlueprintCallable)
    void AddStatValue(const FString& Key, float Value);
    
    UFUNCTION(BlueprintCallable)
    void AddStatCount(const FString& Key, int32 count);
    
    UFUNCTION(BlueprintCallable)
    void AddSpaceRigNotification(FSpaceRigNotification NewNotification, const FString& ID, bool TriggerEvent);
    
    UFSDGameInstance();
};

