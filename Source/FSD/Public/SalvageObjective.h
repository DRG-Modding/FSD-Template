#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "DelegateDelegate.h"
#include "Objective.h"
#include "Templates/SubclassOf.h"
#include "SalvageObjective.generated.h"

class AActor;
class ADropPod;
class AMiniMule;
class AProceduralSetup;
class UCurveFloat;
class UDebrisBase;
class UDebrisPositioning;
class UGemResourceData;
class URepairableComponent;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FSD_API USalvageObjective : public UObjective {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SalvageActorCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGemResourceData* LegResource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LegCountPerActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LegDistanceToActor;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegate OnDisableLegSpheres;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDebrisPositioning* Positioning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UDebrisBase>> Debris;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AMiniMule> SalvageActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ADropPod> DamagedPodClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDebrisPositioning* DamagedPodPositioning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamagedPodMinDistanceToDropZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ADropPod* DamagedPod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ActorsToSalvage, meta=(AllowPrivateAccess=true))
    int32 ActorsToSalvage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ActorsSalvaged, meta=(AllowPrivateAccess=true))
    int32 ActorsSalvaged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RepairPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_PointsRepaired, meta=(AllowPrivateAccess=true))
    int32 PointsRepaired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinSalvageActorDistanceToLandingZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasMuleReturnedToPod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AMiniMule*> AllSalvageActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AMiniMule*> SalvagedActors;
    
public:
    USalvageObjective();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
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
    static FTransform FindRepairPointLocation(AProceduralSetup* Setup, const FVector& podLocation, float Radius, float maxVerticalDistance, UDebrisPositioning* DebrisPositioning, TSubclassOf<AActor> terrainPlacement, const TArray<FVector>& locationsToAvoid, UCurveFloat* AvoidCostCurve);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AllActorsSalvaged();
    
};

