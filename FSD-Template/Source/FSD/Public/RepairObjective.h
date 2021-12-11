#pragma once
#include "CoreMinimal.h"
#include "Objective.h"
#include "RepairObjective.generated.h"

class UDebrisPositioning;
class AActor;
class URepairableComponent;
class UGemResourceData;

UCLASS()
class URepairObjective : public UObjective {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RepairedObjectives)
    int32 RepairedObjectives;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, ReplicatedUsing=OnRep_ObjectivesToRepair)
    int32 ObjectivesToRepair;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftClassPtr<AActor> RepairObjectiveClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UGemResourceData* RepairObjectiveResource;
    
    UPROPERTY(EditAnywhere, Instanced)
    UDebrisPositioning* Positioning;
    
    UPROPERTY(EditAnywhere)
    int32 RepairResourcesPerActor;
    
    UPROPERTY(EditAnywhere)
    float RepairResourceDistanceFromActor;
    
    UPROPERTY(EditAnywhere)
    float MinRepairObjectiveDistanceToLandingZone;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TArray<AActor*> RepairedObjectivesList;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RepairedObjectives();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ObjectivesToRepair();
    
    UFUNCTION(BlueprintCallable)
    void OnObjectiveRepaired(URepairableComponent* repairable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AllObjectivesRepaired();
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    URepairObjective();
};

