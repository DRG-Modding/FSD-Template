#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagAssetInterface.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "UObject/NoExportTypes.h"
#include "GameEvent.generated.h"

class UChildActorComponent;
class AEventStarterButton;
class ARessuplyPod;
class UDialogDataAsset;
class AProceduralSetup;
class UDebrisPositioning;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGameEventTimeProgressChanged, float, CurrentProgress);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGameEventStageCompleteDelegate, int32, stageCompleted);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FGameEventEventTriggeredDelegate);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FGameEventEventFinishedDelegate);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGameEventProgressChangedDelegate, float, CurrentProgress);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGameEventObjectivesPerStageChanged, int32, stageCompleted);

UCLASS()
class AGameEvent : public AActor, public IGameplayTagAssetInterface {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGameEventEventTriggeredDelegate EventTriggeredDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FGameEventEventFinishedDelegate EventFinishedDelegate;
    
    UPROPERTY()
    FGameEventStageCompleteDelegate StageCompleteDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FGameEventProgressChangedDelegate ProgressChangedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FGameEventTimeProgressChanged TimeProgressChanged;
    
    UPROPERTY(BlueprintAssignable)
    FGameEventObjectivesPerStageChanged ObjectivesPerStageChanged;
    
protected:
    UPROPERTY()
    TArray<AEventStarterButton*> StarterObjects;
    
    UPROPERTY(Transient)
    bool bGameEventSetup;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText EventName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText ObjectiveText;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName AnalyticsName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTagContainer GameplayTags;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UChildActorComponent* StartEventObject;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDialogDataAsset* EventTriggeredShout;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDialogDataAsset* EventFinishedShout;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDialogDataAsset* EventFailedShout;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float EventTriggeredShoutDelay;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float EventFinishedShoutDelay;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_StageProgress)
    float StageProgress;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TimeLimit;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DelayUITime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, ReplicatedUsing=OnRep_ObjectivesPerStage)
    int32 objectivesPerStage;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_IsEventStartersActive)
    bool EventStartersActive;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool StopScriptedWavesWhileActive;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool StopNormalWavesWhileActive;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_EventStarted)
    bool EventStarted;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_FailedEvent)
    bool FailedEvent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool ShowRemainingTimeOnHUD;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool ShowScoreStatusOnHUD;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool SkipEventStarters;
    
private:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_EventParticipants)
    TArray<AActor*> EventParticipants;
    
protected:
    UFUNCTION(BlueprintCallable)
    void TrySetupGameEvent();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void TriggerEvent();
    
protected:
    UFUNCTION(BlueprintCallable)
    void StartShout();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void StageObjectiveCompleted();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    ARessuplyPod* SpawnEventPod(TSubclassOf<ARessuplyPod> podClass, const FVector& aSpawnLocation, int32 Delay);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    AActor* SpawnEventActor(TSubclassOf<AActor> eventActorClass, const FTransform& aSpawnLocation);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetStageProgress(float Progress);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetObjectivesPerStage(int32 NewObjectivesPerStage);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RemoveParticipant(AActor* participant);
    
    UFUNCTION(BlueprintCallable)
    void OnStarterObjectUsed(AEventStarterButton* eventStarter);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStageProgress(float Progress);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStageComplete(int32 Stage);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_StageProgress();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_ObjectivesPerStage();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_IsEventStartersActive();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_FailedEvent();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_EventStarted();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_EventParticipants();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEventTriggered();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEventFinished(bool eventSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEventBooted();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEventActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStageProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetShowTimeOnHUD() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetShowScoreOnHUD() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetObjectiveText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetObjectivesPerStage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetEventName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetEventFailed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDelayUITime() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void EndShout();
    
public:
    UFUNCTION(BlueprintCallable)
    FTransform DebreePositionPoint(AProceduralSetup* setup, const FVector& fromLocation, float MinDistance, float desiredDistance, UDebrisPositioning* DebrisPositioning, TSubclassOf<AActor> terrainPlacement, float maxPathLength);
    
    UFUNCTION(BlueprintCallable)
    void BootUpEvent();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AddStageProgress(float progressToAdd);
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    AGameEvent();
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    bool HasMatchingGameplayTag(FGameplayTag TagToCheck) const override PURE_VIRTUAL(HasMatchingGameplayTag, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAnyMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(HasAnyMatchingGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAllMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(HasAllMatchingGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(GetOwnedGameplayTags,);
    
};

