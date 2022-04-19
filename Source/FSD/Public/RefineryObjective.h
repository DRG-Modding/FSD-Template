#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Objective.h"
#include "ERefineryState.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "RefineryObjective.generated.h"

class AFSDRefinery;
class UDebrisPositioning;
class AProceduralSetup;
class AActor;

UCLASS(Abstract, meta=(BlueprintSpawnableComponent))
class FSD_API URefineryObjective : public UObjective {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRefineryDelegate, AFSDRefinery*, InRefinery);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FRefineryDelegate OnRefinerySpawned;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AFSDRefinery> refineryClass;
    
    UPROPERTY(BlueprintReadWrite, Transient, ReplicatedUsing=OnRep_Refinery, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AFSDRefinery> Refinery;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    ERefineryState RefineryState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDebrisPositioning* RefineryPlacement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> RawMaterialClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDebrisPositioning* RawMaterialPlacement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RawMaterialCount;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool bMissionCompleted;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool bIsFinalBattle;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    int32 OptionalTunnelRoomID;
    
public:
    URefineryObjective();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
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
    
};

