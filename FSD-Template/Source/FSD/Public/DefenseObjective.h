#pragma once
#include "CoreMinimal.h"
#include "Objective.h"
#include "DefenseObjective.generated.h"

class UDebrisPositioning;
class ADefensePointActor;

UCLASS(Abstract)
class UDefenseObjective : public UObjective {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Replicated)
    int32 DefensePoints;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_PointsRepaired)
    int32 PointsDefended;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<TSoftClassPtr<ADefensePointActor>> ObjectiveDefenseClasses;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    TArray<ADefensePointActor*> ActiveObjectiveDefenseActors;
    
    UPROPERTY(EditAnywhere, Instanced)
    UDebrisPositioning* DebrisPositioning;
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void PointDefended();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_PointsRepaired();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDefensePointsSpawned();
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UDefenseObjective();
};

