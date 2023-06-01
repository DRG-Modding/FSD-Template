#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameState.h"
#include "Engine/LatentActionManager.h"
#include "Engine/NetSerialization.h"
#include "BoolDelegateDelegate.h"
#include "BoscoReviveCounterChangedDelegate.h"
#include "CountDownStartedDelegate.h"
#include "CountdownDelegate.h"
#include "CreditsReward.h"
#include "CurrentLeaderChangedDelegate.h"
#include "DelegateEventDelegate.h"
#include "DifficultyDelegateDelegate.h"
#include "EnemyKilledDelegateDelegate.h"
#include "FSDChatMessage.h"
#include "FSDLocalizedChatMessage.h"
#include "GameEventCompletedDelegateDelegate.h"
#include "GeneratedMissionSeed.h"
#include "Int32DelegateEventDelegate.h"
#include "ObjectivesDelegateDelegate.h"
#include "PlayerCharacterDelegateDelegate.h"
#include "PlayerDelegateDelegate.h"
#include "ReplicatedObjectives.h"
#include "ScaledEffect.h"
#include "FSDGameState.generated.h"

class ADeepCSGWorld;
class AFSDGameState;
class AFSDPlayerState;
class AGameStats;
class APlayerCharacter;
class APlayerState;
class AProceduralSetup;
class ATeamTransport;
class UAttackerManagerComponent;
class UDifficultyManager;
class UDifficultySetting;
class UDynamicMeshScaler;
class UFSDEvent;
class UGemProximityTracker;
class UGeneratedMission;
class UObjective;
class UPlayerCharacterID;
class UPlayerProximityTracker;
class UPrimitiveComponent;
class UResourceData;
class USeasonReplicatorComponent;
class UShowroomManager;
class USoundCue;
class USoundMixManagerComponent;
class USpawnEffectsComponent;
class UTeamResourcesComponent;

UCLASS(Blueprintable)
class FSD_API AFSDGameState : public AGameState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInt32DelegateEvent OnMissionTimeUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegateEvent OnTerrainGenerated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegateEvent OnTerrainGenerationStarting;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegateEvent OnMatchStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegateEvent OnMatchEnded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameEventCompletedDelegate OnGameEventCompletedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerDelegate OnPlayerJoined;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerDelegate OnPlayerLeave;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegateEvent OnContinueActive;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegateEvent OnContinueCountdownChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegateEvent OnAllDwarvesDown;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegateEvent OnTeamMemberCampaignMissionChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnemyKilledDelegate OnEnemyKilledEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerCharacterDelegate OnPlayerCharacterRegistered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    ATeamTransport* EscapePod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_FSDSessionID, meta=(AllowPrivateAccess=true))
    FString FSDSessionID;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoscoReviveCounterChanged OnBoscoReviveCounterChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bTeamDown;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoolDelegate OnTeamDown;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegateEvent OnObjectivesCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FObjectivesDelegate OnObjectiveAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDifficultyDelegate OnDifficultyChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCountDownStarted OnCountdownStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCountdown OnCountdownTimeChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegateEvent OnCountdownFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADeepCSGWorld* CSGWorld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 LastSupplyPodTimeStamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 LastCleaningPodTimeStamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AProceduralSetup* ProceduralSetup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool DelayLateJoin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* FakeMovementBase;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerSurvivalCreditBonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ResourceAmountPenalty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ObjectivesCreditPenalty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ObjectivesXPPenaltyNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ObjectivesXPPenaltyDeepDives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TextMissionCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TextSecondaryObjective;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TextSurvivalBonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TextMined;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TextCollected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TextBonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_BoscoReviveCounter, meta=(AllowPrivateAccess=true))
    int32 BoscoReviveCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpawnEffectsComponent* SpawnEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDynamicMeshScaler* MeshScaler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGemProximityTracker* GemProximityTracker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAttackerManagerComponent* AttackerManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDifficultyManager* DifficultyManagerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USoundMixManagerComponent* SoundMixManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USeasonReplicatorComponent* SeasonReplicatorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTeamResourcesComponent* TeamResources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsOnSpaceRig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PlayerMadeItToDropPod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<APlayerCharacter*> ActivePlayerCharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FReplicatedObjectives Objectives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CompletedGameEvent, meta=(AllowPrivateAccess=true))
    FText CompletedGameEventName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_GeneratedMissionSeed, meta=(AllowPrivateAccess=true))
    FGeneratedMissionSeed GeneratedMissionSeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ObjectivesCompleted, meta=(AllowPrivateAccess=true))
    bool objectivesCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentDifficultySetting, meta=(AllowPrivateAccess=true))
    UDifficultySetting* CurrentDifficultySetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RememberDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlayerProximityTracker* ProximityTracker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UShowroomManager* ShowroomManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AGameStats* GameStats;
    
    UPROPERTY(EditAnywhere, Transient, ReplicatedUsing=OnRep_MissionTime, meta=(AllowPrivateAccess=true))
    uint32 MissionTime;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint32 MissionStartTime;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint32 MissionHaz;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool PreventLatejoinCharacterDuplication;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_StartPressed, meta=(AllowPrivateAccess=true))
    bool StartPressed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ContinuePressed, meta=(AllowPrivateAccess=true))
    bool ContinuePressed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ContinueCountdown, meta=(AllowPrivateAccess=true))
    int32 ContinuesCountdown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_AllDwarvesDown, meta=(AllowPrivateAccess=true))
    bool AllDwarvesDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool missionAborted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CountdownRemaining, meta=(AllowPrivateAccess=true))
    int32 CountdownRemaining;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CountdownText, meta=(AllowPrivateAccess=true))
    FText countdownText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanCarryOverResources;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurrentLeaderChanged SessionLeaderChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerState* CurrentPlayerSessionLeader;
    
public:
    AFSDGameState();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo"))
    static void WaitForInitialGenerationDone(AFSDGameState* GameState, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    void StartCountdown(int32 Duration, const FText& countdownName);
    
    UFUNCTION(BlueprintCallable)
    void SetPreventLatejoinCharacterDuplication(bool prevent);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayersHaveReachedDroppod(bool newHasPlayerReached);
    
    UFUNCTION(BlueprintCallable)
    void SetGeneratedMissionParameters(UGeneratedMission* mission);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentDifficulty(UDifficultySetting* Setting, bool updateSessionSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetCompletionData(bool NewObjectivesCompleted, int32 playersInPod);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveGeneratedMissionReplicated();
    
public:
    UFUNCTION(BlueprintCallable)
    void PostLocalizedGameMessage(const FText& Msg, const TArray<FText>& Arguments);
    
    UFUNCTION(BlueprintCallable)
    void PostGameMessage(const FString& Msg);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_StartPressed(bool oldStartPressed);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ObjectivesCompleted();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MissionTime();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_GeneratedMissionSeed();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_FSDSessionID();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentDifficultySetting();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CountdownText();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CountdownRemaining(int32 prevTime);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ContinuePressed();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ContinueCountdown();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CompletedGameEvent();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BoscoReviveCounter();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AllDwarvesDown();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 MissionEndscreenSeed();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTutorialMission() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCountingDown() const;
    
    UFUNCTION(BlueprintCallable)
    void InitObjectives();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void HostDisbandedTeam();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasObjectivesReplicated() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleSeamlessTravelEvent();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFSDPlayerState* GetServerPlayerState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UObjective*> GetSecondaryObjectives() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AProceduralSetup* GetProceduralSetup();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UObjective* GetPrimaryObjective() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPreventLatejoinCharacterDuplication() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPlayersHaveReachedDroppod() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    TArray<UPlayerCharacterID*> GetPlayableCharacterIDs();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UObjective*> GetObjectives() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AFSDPlayerState*> GetNetworkSortedPlayerArray();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMissionTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMissionSuccessful() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMissionStartTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMissionRewardCreditSum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FCreditsReward> GetMissionRewardCredits() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMissionCompletedCreditReward(bool Primary, int32& OutReward) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetGlobalMissionSeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AGameStats* GetGameStats() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<UResourceData*, float> GetEndscreenResources() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDifficultyManager* GetDifficultyManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<UResourceData*, float> GetCollectedResources() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UFSDEvent*> GetActiveEventsFromMission() const;
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void ClientNewMessage(const FFSDChatMessage& Msg);
    
    UFUNCTION(BlueprintCallable)
    void Client_StartPressed();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Client_NewLocalizedMessage(const FFSDLocalizedChatMessage& Msg);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AllMissionEndResultsReceived() const;
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_SpawnScaledEffectAt(FScaledEffect Effect, FVector_NetQuantize Location);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_SpawnScaledEffectAndCueAt(FScaledEffect Effect, USoundCue* audio, FVector_NetQuantize Location);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void All_ServerQuit();
    
};

