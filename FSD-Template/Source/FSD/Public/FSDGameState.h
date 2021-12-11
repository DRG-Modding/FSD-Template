#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/GameState.h"
#include "GameplayTagContainer.h"
#include "CreditsReward.h"
#include "GeneratedMissionSeed.h"
#include "ReplicatedObjectives.h"
#include "FSDChatMessage.h"
#include "FSDLocalizedChatMessage.h"
#include "ScaledEffect.h"
#include "Engine/NetSerialization.h"
#include "FSDGameState.generated.h"

class UGemProximityTracker;
class APlayerCharacter;
class AProceduralSetup;
class AFSDPlayerState;
class UPrimitiveComponent;
class UDifficultySetting;
class AMiningPod;
class AActor;
class UObjective;
class ADeepCSGWorld;
class USpawnEffectsComponent;
class UDynamicMeshScaler;
class UFlareController;
class USoundMixManagerComponent;
class UAttackerManagerComponent;
class UDifficultyManager;
class USeasonReplicatorComponent;
class UTeamResourcesComponent;
class UPlayerProximityTracker;
class UFSDEvent;
class UShowroomManager;
class AGameStats;
class APlayerState;
class UGeneratedMission;
class UPlayerCharacterID;
class UResourceData;
class USoundCue;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFSDGameStateOnMissionTimeUpdated, int32, Value);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFSDGameStateOnPlayerLeave, AFSDPlayerState*, PlayerState);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFSDGameStateOnCountdownStarted, const FText&, countdownText);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFSDGameStateOnPlayerJoined, AFSDPlayerState*, PlayerState);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFSDGameStateOnTerrainGenerated);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFSDGameStateOnTerrainGenerationStarting);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFSDGameStateOnMatchStarted);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFSDGameStateOnMatchEnded);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFSDGameStateOnCountdownFinished);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFSDGameStateOnGameEventCompletedEvent, FText, GameEventName);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFSDGameStateOnContinueActive);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFSDGameStateOnContinueCountdownChanged);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFSDGameStateOnAllDwarvesDown);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFSDGameStateOnTeamMemberCampaignMissionChanged);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFSDGameStateOnEnemyKilledEvent, const FGameplayTagContainer&, enemyTags, AActor*, killedEnemy);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFSDGameStateOnPlayerCharacterRegistered, APlayerCharacter*, PlayerCharacter);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFSDGameStateOnBoscoReviveCounterChanged, int32, RevivesLeft);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFSDGameStateOnTeamDown, bool, boolValue);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFSDGameStateOnObjectivesCompleted);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFSDGameStateOnObjectiveAdded, UObjective*, Objective);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFSDGameStateOnDifficultyChanged, UDifficultySetting*, Setting);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFSDGameStateSessionLeaderChanged, const APlayerState*, PlayerState);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFSDGameStateOnCountdownTimeChanged, int32, SecondsLeft);

UCLASS()
class FSD_API AFSDGameState : public AGameState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FFSDGameStateOnMissionTimeUpdated OnMissionTimeUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FFSDGameStateOnTerrainGenerated OnTerrainGenerated;
    
    UPROPERTY(BlueprintAssignable)
    FFSDGameStateOnTerrainGenerationStarting OnTerrainGenerationStarting;
    
    UPROPERTY(BlueprintAssignable)
    FFSDGameStateOnMatchStarted OnMatchStarted;
    
    UPROPERTY(BlueprintAssignable)
    FFSDGameStateOnMatchEnded OnMatchEnded;
    
    UPROPERTY(BlueprintAssignable)
    FFSDGameStateOnGameEventCompletedEvent OnGameEventCompletedEvent;
    
    UPROPERTY(BlueprintAssignable)
    FFSDGameStateOnPlayerJoined OnPlayerJoined;
    
    UPROPERTY(BlueprintAssignable)
    FFSDGameStateOnPlayerLeave OnPlayerLeave;
    
    UPROPERTY(BlueprintAssignable)
    FFSDGameStateOnContinueActive OnContinueActive;
    
    UPROPERTY(BlueprintAssignable)
    FFSDGameStateOnContinueCountdownChanged OnContinueCountdownChanged;
    
    UPROPERTY(BlueprintAssignable)
    FFSDGameStateOnAllDwarvesDown OnAllDwarvesDown;
    
    UPROPERTY(BlueprintAssignable)
    FFSDGameStateOnTeamMemberCampaignMissionChanged OnTeamMemberCampaignMissionChanged;
    
    UPROPERTY(BlueprintAssignable)
    FFSDGameStateOnEnemyKilledEvent OnEnemyKilledEvent;
    
    UPROPERTY(BlueprintAssignable)
    FFSDGameStateOnPlayerCharacterRegistered OnPlayerCharacterRegistered;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    int32 CurrentLevel;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    AMiningPod* EscapePod;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_FSDSessionID)
    FString FSDSessionID;
    
    UPROPERTY(BlueprintAssignable)
    FFSDGameStateOnBoscoReviveCounterChanged OnBoscoReviveCounterChanged;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bTeamDown;
    
    UPROPERTY(BlueprintAssignable)
    FFSDGameStateOnTeamDown OnTeamDown;
    
    UPROPERTY(BlueprintAssignable)
    FFSDGameStateOnObjectivesCompleted OnObjectivesCompleted;
    
    UPROPERTY(BlueprintAssignable)
    FFSDGameStateOnObjectiveAdded OnObjectiveAdded;
    
    UPROPERTY(BlueprintAssignable)
    FFSDGameStateOnDifficultyChanged OnDifficultyChanged;
    
    UPROPERTY(BlueprintAssignable)
    FFSDGameStateOnCountdownStarted OnCountdownStarted;
    
    UPROPERTY(BlueprintAssignable)
    FFSDGameStateOnCountdownTimeChanged OnCountdownTimeChanged;
    
    UPROPERTY(BlueprintAssignable)
    FFSDGameStateOnCountdownFinished OnCountdownFinished;
    
    UPROPERTY(BlueprintReadOnly)
    ADeepCSGWorld* CSGWorld;
    
    UPROPERTY(Transient)
    int32 LastSupplyPodTimeStamp;
    
    UPROPERTY(BlueprintReadOnly)
    AProceduralSetup* ProceduralSetup;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool DelayLateJoin;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    UPrimitiveComponent* FakeMovementBase;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 PlayerSurvivalCreditBonus;
    
    UPROPERTY(EditAnywhere)
    float ResourceAmountPenalty;
    
    UPROPERTY(EditAnywhere)
    float ObjectivesCreditPenalty;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ObjectivesXPPenaltyNormal;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ObjectivesXPPenaltyDeepDives;
    
    UPROPERTY(EditAnywhere)
    FText TextMissionCompleted;
    
    UPROPERTY(EditAnywhere)
    FText TextSecondaryObjective;
    
    UPROPERTY(EditAnywhere)
    FText TextSurvivalBonus;
    
    UPROPERTY(EditAnywhere)
    FText TextMined;
    
    UPROPERTY(EditAnywhere)
    FText TextCollected;
    
    UPROPERTY(EditAnywhere)
    FText TextBonus;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_BoscoReviveCounter)
    int32 BoscoReviveCounter;
    
    UPROPERTY(Export, VisibleAnywhere)
    USpawnEffectsComponent* SpawnEffects;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UDynamicMeshScaler* MeshScaler;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UFlareController* FlareController;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UGemProximityTracker* GemProximityTracker;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UAttackerManagerComponent* AttackerManager;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UDifficultyManager* DifficultyManagerComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USoundMixManagerComponent* SoundMixManager;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USeasonReplicatorComponent* SeasonReplicatorComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTeamResourcesComponent* TeamResources;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsOnSpaceRig;
    
    UPROPERTY(BlueprintReadOnly)
    bool PlayerMadeItToDropPod;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    TArray<APlayerCharacter*> ActivePlayerCharacters;
    
    UPROPERTY(Replicated, Transient)
    FReplicatedObjectives Objectives;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_CompletedGameEvent)
    FText CompletedGameEventName;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_GeneratedMissionSeed)
    FGeneratedMissionSeed GeneratedMissionSeed;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_ObjectivesCompleted)
    bool objectivesCompleted;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, ReplicatedUsing=OnRep_CurrentDifficultySetting)
    UDifficultySetting* CurrentDifficultySetting;
    
    UPROPERTY(EditAnywhere)
    bool RememberDifficulty;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UPlayerProximityTracker* ProximityTracker;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UShowroomManager* ShowroomManager;
    
    UPROPERTY(Transient)
    AGameStats* GameStats;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_MissionTime)
    uint32 MissionTime;
    
    UPROPERTY(Transient)
    uint32 MissionStartTime;
    
    UPROPERTY(Transient)
    uint32 MissionHaz;
    
    UPROPERTY(Replicated, Transient)
    bool PreventLatejoinCharacterDuplication;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_StartPressed)
    bool StartPressed;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_ContinuePressed)
    bool ContinuePressed;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_ContinueCountdown)
    int32 ContinuesCountdown;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_AllDwarvesDown)
    bool AllDwarvesDown;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    bool MissionAborted;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_CountdownRemaining)
    int32 CountdownRemaining;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_CountdownText)
    FText countdownText;
    
    UPROPERTY(EditAnywhere)
    bool CanCarryOverResources;
    
    UPROPERTY(BlueprintAssignable)
    FFSDGameStateSessionLeaderChanged SessionLeaderChanged;
    
    UPROPERTY(BlueprintReadOnly)
    APlayerState* CurrentPlayerSessionLeader;
    
public:
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
    UObjective* GetSecondaryObjective() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AProceduralSetup* GetProceduralSetup();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UObjective* GetPrimaryObjective() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPreventLatejoinCharacterDuplication() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPlayersHaveReachedDroppod() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    TArray<TSubclassOf<APlayerCharacter>> GetPlayableCharacters();
    
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
    bool GetMissionCompletedCreditReward(bool primary, int32& OutReward) const;
    
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
    void All_SpawnScaledEffectAt(FScaledEffect effect, FVector_NetQuantize Location);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_SpawnScaledEffectAndCueAt(FScaledEffect effect, USoundCue* Audio, FVector_NetQuantize Location);
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    AFSDGameState();
};

