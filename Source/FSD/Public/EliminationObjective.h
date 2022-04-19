#pragma once
#include "CoreMinimal.h"
#include "Objective.h"
#include "EliminationDescriptors.h"
#include "EliminationTarget.h"
#include "EliminationObjective.generated.h"

class UEnemyDescriptor;
class AFSDPawn;
class UCaveInfluencer;
class UDebrisPositioning;
class AActor;
class UDebrisBase;
class UHealthComponentBase;

UCLASS(Abstract, meta=(BlueprintSpawnableComponent))
class FSD_API UEliminationObjective : public UObjective {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ObjectCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDebrisPositioning* Positioning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> ExcludeRoomIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> ObjectToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCaveInfluencer* CaveInfluencer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DebrisRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UDebrisBase>> ObjectDebris;
    
    UPROPERTY(BlueprintReadWrite, Transient, ReplicatedUsing=OnRep_EnemiesKilled, meta=(AllowPrivateAccess=true))
    int32 EnemiesKilled;
    
    UPROPERTY(BlueprintReadWrite, Transient, ReplicatedUsing=OnRep_EnemiesToKill, meta=(AllowPrivateAccess=true))
    int32 EnemiesToKill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEliminationDescriptors> TargetDescriptors;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<FEliminationDescriptors> TargetQueue;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<FEliminationTarget> ActiveEliminationTargets;
    
public:
    UEliminationObjective();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RegisterEliminationTargets(const TArray<AFSDPawn*>& Targets);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveTargetSpawned();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveTargetKilled();
    
    UFUNCTION(BlueprintCallable)
    void OnTargetKilled(UHealthComponentBase* Health);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_EnemiesToKill(int32 prevAmount);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_EnemiesKilled(int32 prevAmount);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    TArray<UEnemyDescriptor*> GetNextTargetInQueue();
    
};

