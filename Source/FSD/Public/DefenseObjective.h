#pragma once
#include "CoreMinimal.h"
#include "Objective.h"
#include "DefenseObjective.generated.h"

class ADefensePointActor;
class UDebrisPositioning;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UDefenseObjective : public UObjective {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 DefensePoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_PointsRepaired, meta=(AllowPrivateAccess=true))
    int32 PointsDefended;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<ADefensePointActor>> ObjectiveDefenseClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ADefensePointActor*> ActiveObjectiveDefenseActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDebrisPositioning* DebrisPositioning;
    
public:
    UDefenseObjective();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void PointDefended();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_PointsRepaired();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDefensePointsSpawned();
    
};

