#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/GameMode.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EPauseReason.h"
#include "FSDGameMode.generated.h"

class UFormationsManagerComponent;
class UEnemySpawnManager;
class AFSDPlayerController;
class APlayerCharacter;
class UKeepInsideWorld;
class UDifficultyManager;
class UObjectivesManager;
class UPheromoneSpawnerComponent;
class UMissionManager;
class UEncounterManager;
class UCritterManager;
class AMiningPod;
class UWidget;
class AMolly;
class ABosco;
class UEnemyDescriptor;
class UEnemyWaveManager;
class AFSDGameMode;
class AActor;
class APlayerController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFSDGameModeOnMatchStarted);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFSDGameModeOnAllControllersReady);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFSDGameModeOnPlayerLoggedIn, AFSDPlayerController*, Controller);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFSDGameModeOnDonkeyCalled, FVector, Position, APlayerCharacter*, requester);

UCLASS(MinimalAPI, NonTransient)
class AFSDGameMode : public AGameMode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FFSDGameModeOnMatchStarted OnMatchStarted;
    
    UPROPERTY(BlueprintAssignable)
    FFSDGameModeOnAllControllersReady OnAllControllersReady;
    
    UPROPERTY(BlueprintAssignable)
    FFSDGameModeOnPlayerLoggedIn OnPlayerLoggedIn;
    
    UPROPERTY(BlueprintAssignable)
    FFSDGameModeOnDonkeyCalled OnDonkeyCalled;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool GenerationStarted;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UPheromoneSpawnerComponent* PheromoneComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UEnemySpawnManager* EnemySpawnManager;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UObjectivesManager* ObjectivesManager;
    
    UPROPERTY(Export, VisibleAnywhere)
    UKeepInsideWorld* KeepInsideWorld;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UMissionManager* MissionManager;
    
    UPROPERTY(Export, Transient)
    UEncounterManager* EncounterManagerComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UCritterManager* CritterManager;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TArray<AFSDPlayerController*> PlayerControllers;
    
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UFormationsManagerComponent* FormationsManager;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<AMiningPod> DropPodClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftClassPtr<AMolly> MuleClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftClassPtr<AMiningPod> DropodEscapeClass;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<ABosco> droneClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftClassPtr<UWidget> CheatUI;
    
    UPROPERTY(EditAnywhere)
    float ContinueCountdown;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool PreventAllLatejoin;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool PreventLateJoinOnMissionStart;
    
    UPROPERTY(EditAnywhere)
    float PlayerSpawnHeightOffset;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float FriendlyFireGracePeriod;
    
    UPROPERTY(EditAnywhere)
    TArray<UEnemyDescriptor*> ForcedEnemyPool;
    
    UPROPERTY(EditAnywhere)
    bool UseNormalEncounters;
    
    UPROPERTY(EditAnywhere)
    bool UseStationaryEncounter;
    
    UPROPERTY(EditAnywhere)
    bool AllowSpecialEncounters;
    
    UPROPERTY(Export, Transient)
    UEnemyWaveManager* CachedWaveManager;
    
public:
    UFUNCTION(BlueprintCallable)
    void StartGame();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SpawnMissionCriticalItems();
    
protected:
    UFUNCTION(BlueprintCallable)
    void SignalEndLevelToClients();
    
public:
    UFUNCTION(BlueprintCallable)
    void ResetDeaths();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RecieveEndLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RecieveAllDwarvesDown();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Recieve_ContinueTimerEnded();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceivePostSeamlessTravel();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnObjectivesInitialized();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLevelGenerationComplete(int32 pass);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnControllerDestroyed(AActor* Controller);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LoadSpaceRig();
    
    UFUNCTION(BlueprintCallable)
    void LoadMission(const FString& MapName, TSoftClassPtr<AFSDGameMode> optionalGameMode);
    
    UFUNCTION(BlueprintCallable)
    void HostAbortMission();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UEnemyWaveManager* GetWaveManager() const;
    
    UFUNCTION(BlueprintCallable)
    AActor* GetPlayerStart(AFSDPlayerController* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<AMolly> GetMuleClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UEncounterManager* GetEncounterManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSoftObjectPath GetDropPodPath() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSoftObjectPath GetDropPodEscapePath() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<AMiningPod> GetDropPodEscapeClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<AMiningPod> GetDropPodClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSoftObjectPath GetDronePath() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<ABosco> GetDroneClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDifficultyManager* GetDifficultyManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentLevel() const;
    
    UFUNCTION(BlueprintCallable)
    bool FSDSetPause(APlayerController* PC, EPauseReason pauseReason);
    
    UFUNCTION(BlueprintCallable)
    bool FSDKickPlayer(APlayerController* KickedPlayer, const FText& KickReason);
    
    UFUNCTION(BlueprintCallable)
    bool FSDClearPause(EPauseReason pauseReason);
    
    UFUNCTION(BlueprintCallable)
    void EndLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DonkeyButtonPressed();
    
    UFUNCTION(BlueprintCallable)
    void DestroyNonLocalPlayers();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Debug_ShowPlayerSpheres();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool AllPlayersHaveSelectedCharacter() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool AllPlayersHaveGeneratedLevel() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void AddControllerForGracePeriod(APlayerCharacter* APlayerCharacter);
    
public:
    UFUNCTION(BlueprintCallable)
    void AboutMission();
    
    AFSDGameMode();
};

