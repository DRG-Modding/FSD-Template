#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "ProgressChangedSigDelegate.h"
#include "GameplayTagAssetInterface.h"
#include "DelegateEventDelegate.h"
#include "StageCompleteSigDelegate.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "UObject/NoExportTypes.h"
#include "GameEvent.generated.h"

class UChildActorComponent;
class AEventStarterButton;
class UDialogDataAsset;
class ARessuplyPod;
class AProceduralSetup;
class UDebrisPositioning;

UCLASS(Blueprintable)
class AGameEvent : public AActor, public IGameplayTagAssetInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegateEvent EventTriggeredDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegateEvent EventFinishedDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStageCompleteSig StageCompleteDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProgressChangedSig ProgressChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProgressChangedSig OnProgressBarChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProgressChangedSig TimeProgressChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStageCompleteSig ObjectivesPerStageChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AEventStarterButton*> StarterObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bGameEventSetup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText EventName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ObjectiveText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AnalyticsName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer GameplayTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UChildActorComponent* StartEventObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* EventTriggeredShout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* EventFinishedShout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* EventFailedShout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EventTriggeredShoutDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EventFinishedShoutDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_StageProgress, meta=(AllowPrivateAccess=true))
    float StageProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayUITime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ObjectivesPerStage, meta=(AllowPrivateAccess=true))
    int32 objectivesPerStage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_IsEventStartersActive, meta=(AllowPrivateAccess=true))
    bool EventStartersActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool StopScriptedWavesWhileActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool StopNormalWavesWhileActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_EventStarted, meta=(AllowPrivateAccess=true))
    bool EventStarted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_FailedEvent, meta=(AllowPrivateAccess=true))
    bool FailedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowRemainingTimeOnHUD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowScoreStatusOnHUD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowProgressBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProgressBarPct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SkipEventStarters;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_EventParticipants, meta=(AllowPrivateAccess=true))
    TArray<AActor*> EventParticipants;
    
public:
    AGameEvent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
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
    
    UFUNCTION(BlueprintCallable)
    void SetProgressBarPct(float InPct);
    
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
    bool IsEventCompleted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEventActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStageProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetShowTimeOnHUD() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetShowScoreOnHUD() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetShowProgressBar() const;
    
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

