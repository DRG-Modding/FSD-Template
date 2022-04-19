#pragma once
#include "CoreMinimal.h"
#include "Objective.h"
#include "ShellBreakTimerSignatureDelegate.h"
#include "UObject/NoExportTypes.h"
#include "ShellBreakPauseChangeSignatureDelegate.h"
#include "MuleRefueledDelegate.h"
#include "EEscortMissionState.h"
#include "CannisterRegisteredDelegate.h"
#include "EscortObjective.generated.h"

class UDebrisBase;
class UCurveFloat;
class UDebrisPositioning;
class UCappedResource;
class AActor;
class AExtractorItem;
class AEscortDestination;
class AEscortMule;
class UCarvedResourceData;
class UResourceData;
class UHealthComponentBase;

UCLASS(Abstract, meta=(BlueprintSpawnableComponent))
class FSD_API UEscortObjective : public UObjective {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FShellBreakTimerSignature OnProgressUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FShellBreakPauseChangeSignature OnShellBreakPauseChange;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FMuleRefueled OnMuleRefueled;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool DidRescueDorettaHead;
    
    UPROPERTY(BlueprintReadWrite, Transient, ReplicatedUsing=OnRep_AreasToScan, meta=(AllowPrivateAccess=true))
    int32 AreasToScan;
    
protected:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    int32 ScanCount;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<FVector> ScanLocations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDebrisPositioning* Positioning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDebrisPositioning* EscortMulePositioning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* CostDistanceCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DebrisRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UDebrisBase*> ObjectDebris;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> RefuelObjectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AEscortDestination> DestinationClass;
    
    UPROPERTY(BlueprintReadWrite, Transient, ReplicatedUsing=OnRep_AreasScanned, meta=(AllowPrivateAccess=true))
    int32 AreasScanned;
    
    UPROPERTY(BlueprintReadWrite, Transient, ReplicatedUsing=OnRep_EscortState, meta=(AllowPrivateAccess=true))
    EEscortMissionState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FinalBattle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCarvedResourceData* FuelResource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UResourceData* GemResource;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FCannisterRegistered OnCannisterRegistered;
    
    UPROPERTY(BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
    float ServerShellProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SecondsToDestroyHeartstone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FullCanistersRequired;
    
    UPROPERTY(BlueprintReadWrite, Transient, ReplicatedUsing=OnRep_FullCanisters, meta=(AllowPrivateAccess=true))
    int32 FullCanisters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FuelResourceAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> GarageDropCarver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> EscortMuleDropBeaconClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> GarageClass;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FVector EscortMuleDropLocation;
    
    UPROPERTY(BlueprintReadWrite, Transient, ReplicatedUsing=OnRep_EscortMule, meta=(AllowPrivateAccess=true))
    AEscortMule* EscortMule;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
    AEscortDestination* EscortDestination;
    
public:
    UEscortObjective();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
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
    
};

