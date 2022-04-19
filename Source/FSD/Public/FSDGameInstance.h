#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Engine/GameInstance.h"
#include "TemporaryBuffChangedDelegate.h"
#include "ESteamServerJoinStatus.h"
#include "UObject/NoExportTypes.h"
#include "MinersManualNotificationDelegate.h"
#include "ESteamSearchRegion.h"
#include "ECharacterSelectorItemStatus.h"
#include "JoinSignatureDelegate.h"
#include "EMinersManualSection.h"
#include "GenericSignatureDelegate.h"
#include "OnLoaderStartSigDelegate.h"
#include "OnPlayLevelSequenceInCharacterWorldSigDelegate.h"
#include "ShowCharacterWorldSignatureDelegate.h"
#include "StartForgingDelegate.h"
#include "ForgingDoneDelegate.h"
#include "TutorialManagerSignatureDelegate.h"
#include "PlayerCharacterSignatureDelegate.h"
#include "FSDServerSearchOptions.h"
#include "ShowReconnectControllerDelegate.h"
#include "OnXBoxAccountPickerClosedDelegate.h"
#include "OnXBoxChangeUserDelegate.h"
#include "OnHDRGammaChangedDelegate.h"
#include "CravityChangedSignatureDelegate.h"
#include "NewPostProcessingManagerDelegate.h"
#include "SkinSignatureDelegate.h"
#include "PendingRewards.h"
#include "ClaimableRewardEntry.h"
#include "ShowCharacterSelectorSignatureDelegate.h"
#include "ShowViewer3DSignatureDelegate.h"
#include "PendingRewardsStats.h"
#include "ShowCharacterSelectorEqiupSlotSignatureDelegate.h"
#include "ShowCharacterSelectorEquipSignatureDelegate.h"
#include "ShowCharacterSelectorRotateSignatureDelegate.h"
#include "ShowCharacterSelectorEndScreenSignatureDelegate.h"
#include "GeneratedMissionSignatureDelegate.h"
#include "BoscoChangedDelegate.h"
#include "OnPrivilegeCheckCompleteDelegate.h"
#include "EDisconnectReason.h"
#include "EAlwaysLoadedWorlds.h"
#include "ECharselectionCameraLocation.h"
#include "FindSessionsCallbackProxy.h"
#include "Engine/EngineBaseTypes.h"
#include "UObject/NoExportTypes.h"
#include "NetworkConnectionInfo.h"
#include "FSDGameInstance.generated.h"

class AMolly;
class UGeneratedMission;
class UTemporaryBuff;
class UWindowWidget;
class UMouseCursorWidget;
class UHUDWarningWidget;
class UFSDSaveGame;
class ATutorialManager;
class UCampaignManager;
class APlayerCharacter;
class ABosco;
class UDeepDiveManager;
class UMissionResultInfo;
class AProceduralSetup;
class AActor;
class UWorld;
class UGoogleAnalyticsWrapper;
class USpecialEvent;
class APostProcessingManager;
class ACharacterSelectionSwitcher;
class UIconGenerationManager;
class UDifficultySetting;
class USchematic;
class UFSDCloudLoadSave;
class UFSDSessionUpdater;
class UFSDSendToURL;
class UFSDFriendsAndInvites;
class ULevelSequence;
class USoundSubmix;
class UObject;
class UNetDriver;
class UMutator;
class AFSDPlayerController;
class UItemSkin;
class UTexture2D;
class USoundBase;

UCLASS(NonTransient)
class FSD_API UFSDGameInstance : public UGameInstance {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSteamServerJoinStatusDelegate, ESteamServerJoinStatus, Status);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSteamSearchRegionDelegate, ESteamSearchRegion, Region);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnStartSearchForFriendsComplete, bool, bWasSuccessful, const FString&, ErrorStr);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FNewHUDWarningDelegate, UHUDWarningWidget*, newWidget);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDonkeyCharacterDelegate, AMolly*, InDonkey);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FTemporaryBuffChanged OnTemporaryBuffChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGenericSignature OnGameSettingsChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGenericSignature OnGraphicsSettingsChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGenericSignature OnPressStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FJoinSignature OnJoinPendingInvite;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGenericSignature OnSkinChangedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FOnLoaderStartSig OnLoaderStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FOnPlayLevelSequenceInCharacterWorldSig OnPlayLevelSequenceInCharacterWorld;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGenericSignature OnLoaderStop;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FShowCharacterWorldSignature OnCharacterSelectionStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FStartForging OnStartForging;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FStartForging OnSkipForging;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FForgingDone OnForgingDone;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGenericSignature OnCharacterSelectionStop;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGenericSignature OnShowCharacterSelectionRefresh;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FTutorialManagerSignature OnTutorialManagerSet;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FPlayerCharacterSignature OnLocalPlayerCharacterSet;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FShowReconnectController OnShowReconnectScreen;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FOnXBoxAccountPickerClosed OnXBoxAccountPickerClosed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FOnXBoxChangeUser OnXBoxChangeUser;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FOnHDRGammaChanged OnHDRGammaChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FCravityChangedSignature OnGravityChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FNewPostProcessingManager OnNewPostProcessingManager;
    
    UPROPERTY(BlueprintCallable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FSkinSignature OnPreviewSkinChanged;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool ShowingReconnectScreen;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FPendingRewards PendingMissionRewards;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<FClaimableRewardEntry> PendingPromotionRewards;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UMouseCursorWidget> MouseCursorWidget;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FShowCharacterSelectorSignature OnShowCharacterSelector;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FShowViewer3DSignature OnShowViewer3D;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FShowCharacterSelectorEqiupSlotSignature OnShowCharacterSelectorEquipSlot;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FShowCharacterSelectorEquipSignature OnShowCharacterSelectorEquip;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FShowCharacterSelectorRotateSignature OnShowCharacterSelectorRotate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FShowCharacterSelectorEndScreenSignature OnShowEndScreen;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    AProceduralSetup* ProceduralSetup;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool HasStartedAMission;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FString FSDPassword;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool FSDPrivateServer;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool SoloSession;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool IsJoiningInvite;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool FirstTimeInFrontend;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool SessionFirstStartOnSpaceRig;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool ShowFirstCharacterSelector;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool ShowSaveWarning;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    AActor* WorldViewTargetDummy;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UMissionResultInfo* MissionResultInfo;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool LoaderSequencePlaying;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FString LastPerksLoadout;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    AActor* CharacterSelectionLastViewTarget;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool HasSeenInfoScreen;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FTransform CharacterSelectionViewTargetTransform;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FTransform LoaderViewTargetTransform;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGeneratedMissionSignature OnGeneratedMissionChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FDonkeyCharacterDelegate OnDonkeyChanged;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AMolly> Donkey;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FBoscoChanged OnBoscoChanged;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool DEBUGSpawnRandomMissions;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    int32 DEBUGFixedPLSSeed;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 DEBUGSeedOverride;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool CanPlayOnline;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool CanCommunicateOnline;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FSteamSearchRegionDelegate OnSteamSearchRegionChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FSteamServerJoinStatusDelegate OnSteamServerJoinStatusChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FOnStartSearchForFriendsComplete OnStartSearchForFriendsComplete;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> FriendSessions;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UGoogleAnalyticsWrapper* GoogleAnalyticsWI;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    USpecialEvent* ForcedSpecialEvent;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool ShowMinerManualWorkInProgress;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FMinersManualNotification OnMinersManualNotification;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FNewHUDWarningDelegate OnNewHUDWarning;
    
protected:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float LastDreadnaughtKillTime;
    
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UWindowWidget> ActiveEscapeMenu;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APostProcessingManager> PostProcessingManager;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ABosco> Drone;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APlayerCharacter> LocalPlayerCharacter;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ATutorialManager> TutorialManager;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    ACharacterSelectionSwitcher* CharacterSelectionSwitcher;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool bGameSettingsChanged;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FFSDServerSearchOptions ServerSearchOptions;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool ServerSearchActive;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FOnPrivilegeCheckComplete OnPrivilegeCheckComplete;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool IsOnPressStartScreen;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool HasSeenStartScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AProceduralSetup> ProceduralLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIconGenerationManager> IconGenerationManagerClass;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UIconGenerationManager* IconGenerationManager;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UCampaignManager* CampaignManager;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UDeepDiveManager* DeepDiveManager;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UGeneratedMission* GeneratedMission;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UDifficultySetting* DesiredDifficulty;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UFSDSaveGame* SaveGame;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    EDisconnectReason DisconnectReason;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FString DisconnectErrorCode;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<UWorld*> AlwaysLoadedWorlds;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool ShowCharacterSelectionWorld;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> Viewer3DClass;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool ShowLoaderWorld;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool CharacterSelectionWorldActive;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool MixerInteractivityEnabled;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool LoaderWorldActive;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool ResetHUDWhenReturning;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool MovieModeActive;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool MovieModeActiveInSpacerig;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool MovieModeStartAtOrigin;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool MovieModeStartWithCameraShake;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    USchematic* ActiveForgeSchematic;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UFSDCloudLoadSave* FSDCloudLoadSave;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UFSDSessionUpdater* SessionUpdater;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UFSDSendToURL* SendToURL;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UFSDFriendsAndInvites* FriendsAndInvites;
    
    UPROPERTY(Transient, meta=(AllowPrivateAccess=true))
    double SessionStartTime;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    int32 SessionStartTimestamp;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    float InKBytesPerSecond;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    float OutKBytesPerSecond;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool PreSpawnNigaraParticles;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UTemporaryBuff* TemporaryBuff;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> NextLoaderSequence;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    EAlwaysLoadedWorlds NextLoaderLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> DeepDiveLoaderSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> DeepDiveLoaderSequence2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundSubmix* ControllerVibrationSubmix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundSubmix* ControllerSpeakerSubmix;
    
public:
    UFSDGameInstance();
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
    bool IsPendingInvitePasswordProtected();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPendingInviteModded();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMutatorActive(TSubclassOf<UMutator> mutatorClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGameModded();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFreeBeerRewardActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCharacterSelectionWorldVisible() const;
    
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
    FString GetDisconnectErrorCode() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FNetworkConnectionInfo> GetConnectionInfo();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APlayerCharacter* GetCharacterSelectorCharacter();
    
    UFUNCTION(BlueprintCallable)
    void GameUserSettingsChanged();
    
    UFUNCTION(BlueprintCallable)
    void CloseSessionLobby();
    
    UFUNCTION(BlueprintCallable)
    void ClearPendingRewards();
    
    UFUNCTION(BlueprintCallable)
    void ClearDisconnectError();
    
    UFUNCTION(BlueprintCallable)
    void ChangeSkinPreview(UItemSkin* PreviewSkin);
    
    UFUNCTION(BlueprintCallable)
    void CancelJoin();
    
    UFUNCTION(BlueprintCallable)
    UHUDWarningWidget* AddWarningToHUD(TSubclassOf<UHUDWarningWidget> WidgetClass, UTexture2D* Texture, USoundBase* PingSound);
    
    UFUNCTION(BlueprintCallable)
    void AddToFriendSessions(const FString& friendSessionId, const FString& friendName);
    
    UFUNCTION(BlueprintCallable)
    void AddStatValue(const FString& Key, float Value);
    
    UFUNCTION(BlueprintCallable)
    void AddStatCount(const FString& Key, int32 count);
    
};

