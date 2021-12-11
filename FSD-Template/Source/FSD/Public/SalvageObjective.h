#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Objective.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SalvageObjective.generated.h"

class UDebrisPositioning;
class URepairableComponent;
class UGemResourceData;
class UDebrisBase;
class AMiningPod;
class AMiniMule;
class AProceduralSetup;
class AActor;
class UCurveFloat;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FSalvageObjectiveOnDisableLegSpheres);

UCLASS(Abstract)
class USalvageObjective : public UObjective {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 SalvageActorCount;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UGemResourceData* LegResource;
    
    UPROPERTY(EditAnywhere)
    int32 LegCountPerActor;
    
    UPROPERTY(EditAnywhere)
    float LegDistanceToActor;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FSalvageObjectiveOnDisableLegSpheres OnDisableLegSpheres;
    
    UPROPERTY(EditAnywhere, Instanced)
    UDebrisPositioning* Positioning;
    
    UPROPERTY(EditAnywhere)
    TArray<TSoftObjectPtr<UDebrisBase>> Debris;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftClassPtr<AMiniMule> SalvageActor;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<AMiningPod> DamagedPodClass;
    
    UPROPERTY(EditAnywhere, Instanced)
    UDebrisPositioning* DamagedPodPositioning;
    
    UPROPERTY(EditAnywhere)
    float DamagedPodMinDistanceToDropZone;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    AMiningPod* DamagedPod;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_ActorsToSalvage)
    int32 ActorsToSalvage;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_ActorsSalvaged)
    int32 ActorsSalvaged;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 RepairPoints;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_PointsRepaired)
    int32 PointsRepaired;
    
    UPROPERTY(EditAnywhere)
    float MinSalvageActorDistanceToLandingZone;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TArray<AMiniMule*> AllSalvageActors;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TArray<AMiniMule*> SalvagedActors;
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void PointRepaired();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_PointsRepaired();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ActorsToSalvage(int32 prevAmount);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ActorsSalvaged(int32 prevAmount);
    
    UFUNCTION(BlueprintCallable)
    void OnActorRepaired(URepairableComponent* repairable);
    
public:
    UFUNCTION(BlueprintCallable)
    static FTransform FindRepairPointLocation(AProceduralSetup* setup, const FVector& podLocation, float Radius, float maxVerticalDistance, UDebrisPositioning* DebrisPositioning, TSubclassOf<AActor> terrainPlacement, const TArray<FVector>& locationsToAvoid, UCurveFloat* AvoidCostCurve);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AllActorsSalvaged();
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    USalvageObjective();
};

