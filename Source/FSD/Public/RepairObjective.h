#pragma once
#include "CoreMinimal.h"
#include "Objective.h"
#include "RepairObjective.generated.h"

class UDebrisPositioning;
class AActor;
class UGemResourceData;
class URepairableComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URepairObjective : public UObjective {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RepairedObjectives, meta=(AllowPrivateAccess=true))
    int32 RepairedObjectives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ObjectivesToRepair, meta=(AllowPrivateAccess=true))
    int32 ObjectivesToRepair;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> RepairObjectiveClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGemResourceData* RepairObjectiveResource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDebrisPositioning* Positioning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RepairResourcesPerActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RepairResourceDistanceFromActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinRepairObjectiveDistanceToLandingZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> RepairedObjectivesList;
    
public:
    URepairObjective();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_RepairedObjectives();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ObjectivesToRepair();
    
    UFUNCTION(BlueprintCallable)
    void OnObjectiveRepaired(URepairableComponent* repairable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AllObjectivesRepaired();
    
};

