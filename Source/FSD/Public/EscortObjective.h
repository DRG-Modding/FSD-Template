#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Objective.h"
#include "EEscortMissionState.h"
#include "EscortObjective.generated.h"

class AEscortDestination;
class UDebrisPositioning;
class UDebrisBase;
class AExtractorItem;
class UCurveFloat;
class AActor;
class UCarvedResourceData;
class UResourceData;
class AEscortMule;
class UCappedResource;
class UHealthComponentBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEscortObjectiveOnProgressUpdated, float, Progress);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FEscortObjectiveOnMuleRefueled);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEscortObjectiveOnShellBreakPauseChange, bool, IsPaused);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEscortObjectiveOnCannisterRegistered, AExtractorItem*, Item);

UCLASS(Abstract)
class UEscortObjective : public UObjective {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FEscortObjectiveOnProgressUpdated OnProgressUpdated;
    
    UPROPERTY(BlueprintAssignable)
    FEscortObjectiveOnShellBreakPauseChange OnShellBreakPauseChange;
    
    UPROPERTY(BlueprintAssignable)
    FEscortObjectiveOnMuleRefueled OnMuleRefueled;
    
    UPROPERTY(BlueprintReadWrite)
    bool DidRescueDorettaHead;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_AreasToScan)
    int32 AreasToScan;
    
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 ScanCount;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TArray<FVector> ScanLocations;
    
    UPROPERTY(EditAnywhere, Instanced)
    UDebrisPositioning* Positioning;
    
    UPROPERTY(EditAnywhere, Instanced)
    UDebrisPositioning* EscortMulePositioning;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* CostDistanceCurve;
    
    UPROPERTY(EditAnywhere)
    float DebrisRadius;
    
    UPROPERTY(EditAnywhere, Export)
    TArray<UDebrisBase*> ObjectDebris;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftClassPtr<AActor> RefuelObjectClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftClassPtr<AEscortDestination> DestinationClass;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_AreasScanned)
    int32 AreasScanned;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_EscortState)
    EEscortMissionState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool FinalBattle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UCarvedResourceData* FuelResource;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UResourceData* GemResource;
    
    UPROPERTY(BlueprintAssignable)
    FEscortObjectiveOnCannisterRegistered OnCannisterRegistered;
    
    UPROPERTY(Replicated)
    float ServerShellProgress;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 SecondsToDestroyHeartstone;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 FullCanistersRequired;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_FullCanisters)
    int32 FullCanisters;
    
    UPROPERTY(EditAnywhere)
    int32 FuelResourceAmount;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<AActor> GarageDropCarver;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<AActor> EscortMuleDropBeaconClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftClassPtr<AActor> GarageClass;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector EscortMuleDropLocation;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_EscortMule)
    AEscortMule* EscortMule;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    AEscortDestination* EscortDestination;
    
public:
    UFUNCTION(BlueprintCallable)
    void SyncProgressTimer();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void StartShellBreak();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SpawnGarage();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetState(EEscortMissionState NewState);
    
    UFUNCTION(BlueprintCallable)
    void SetShellBreakPaused(bool newPaused);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetEscortMule(AEscortMule* MULE);
    
    UFUNCTION(BlueprintCallable)
    void RegisterFuelCannister(AExtractorItem* extractor);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RecordFailStage(bool muleDied);
    
    UFUNCTION(BlueprintCallable)
    void OnResourceChanged(UCappedResource* CappedResource, float Amount);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_FullCanisters();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_EscortState();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_EscortMule();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AreasToScan(int32 prevAmount);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AreasScanned(int32 prevAmount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMuleDied(UHealthComponentBase* HealthComponent);
    
    UFUNCTION(BlueprintCallable)
    void OnHealthChanged(float Health);
    
    UFUNCTION(BlueprintCallable)
    void OnFullCanistersChanged(int32 Amount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEscortMuleSpawnedEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetShellBreakProgress();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesPathExist(FVector Start, FVector End);
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UEscortObjective();
};

