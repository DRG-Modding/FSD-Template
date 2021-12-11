#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "Objective.h"
#include "UObject/NoExportTypes.h"
#include "ERefineryState.h"
#include "RefineryObjective.generated.h"

class UDebrisPositioning;
class AProceduralSetup;
class AFSDRefinery;
class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRefineryObjectiveOnRefinerySpawned, AFSDRefinery*, InRefinery);

UCLASS(Abstract)
class URefineryObjective : public UObjective {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FRefineryObjectiveOnRefinerySpawned OnRefinerySpawned;
    
protected:
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<AFSDRefinery> refineryClass;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_Refinery)
    TWeakObjectPtr<AFSDRefinery> Refinery;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    ERefineryState RefineryState;
    
    UPROPERTY(EditAnywhere)
    UDebrisPositioning* RefineryPlacement;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<AActor> RawMaterialClass;
    
    UPROPERTY(EditAnywhere)
    UDebrisPositioning* RawMaterialPlacement;
    
    UPROPERTY(EditAnywhere)
    int32 RawMaterialCount;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bMissionCompleted;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool bIsFinalBattle;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    int32 OptionalTunnelRoomID;
    
public:
    UFUNCTION(BlueprintCallable)
    void SpawnWells(AProceduralSetup* setup, const FVector& rigLocation, float minDistanceBetween, const TArray<FVector2D>& minMaxDistancesToRig);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveRefinerySpawned(AFSDRefinery* InRefinery);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Refinery();
    
    UFUNCTION(BlueprintCallable)
    void OnRefineryStateChanged(ERefineryState InRefineryState);
    
public:
    UFUNCTION(BlueprintCallable)
    FVector GetRefinerySpawnLocation(TSubclassOf<AFSDRefinery> NewRefineryClass);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddMissionCriticalItems(AProceduralSetup* setup);
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    URefineryObjective();
};

