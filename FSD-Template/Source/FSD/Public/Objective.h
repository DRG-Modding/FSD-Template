#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ObjectiveMissionIcon.h"
#include "Components/ActorComponent.h"
#include "MissionShouts.h"
#include "CreditsReward.h"
#include "Objective.generated.h"

class UMissionStat;
class UTexture2D;
class UObjective;
class UObjectiveWidget;
class UResourceData;
class UOptionalObjectiveWidget;
class UBiome;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FObjectiveOnObjectiveUpdated, UObjective*, Objective);

UCLASS(Abstract, Blueprintable)
class UObjective : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FObjectiveOnObjectiveUpdated OnObjectiveUpdated;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UObjectiveWidget> ObjectiveWidgetClass;
    
    UPROPERTY(EditAnywhere)
    FMissionShouts MissionShouts;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText MissionDescription;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 CompletionRewardInCredits;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 CompletionRewardInXP;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool ScaleObjectiveToMission;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool RequiredReturnObjectiveCompleted;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMissionStat* ObjectiveCompletedStat;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftClassPtr<UOptionalObjectiveWidget> OptionalObjectiveWidgetClass;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_IsPrimaryObjective)
    int32 IsPrimaryObjective;
    
    UPROPERTY(Transient)
    float MissionScale;
    
    UPROPERTY(EditAnywhere)
    TArray<UBiome*> BannedInBiomes;
    
    UFUNCTION(BlueprintCallable)
    void SignalObjectiveUpdated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_StartTracking();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsPrimaryObjective();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsTutorialObjective() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPrimary() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsObjectiveResource(UResourceData* InResource) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFinalBattle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCompleted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasReplicated() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<UObjectiveWidget> GetWidgetClassOrDefault(TSubclassOf<UObjectiveWidget> DefaultWidgetClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRewardXP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCreditsReward GetRewardCredits() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    TSubclassOf<UOptionalObjectiveWidget> GetOptionalMissionWidget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetObjectiveText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UTexture2D* GetObjectiveIconFromClass(TSubclassOf<UObjective> objectiveClass);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UTexture2D* GetObjectiveIcon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetObjectiveDescriptionFromClass(TSubclassOf<UObjective> objectiveClass, float missionLength);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FText GetObjectiveDescription(float missionLength);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetObjectiveAmountFromClass(TSubclassOf<UObjective> objectiveClass, float missionLength);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    int32 GetObjectiveAmount(float missionLength) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FObjectiveMissionIcon GetMissionIcon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FText GetInMissionText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FText GetInMissionCounterText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    UTexture2D* GetInMissionCounterIcon() const;
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UObjective();
};

