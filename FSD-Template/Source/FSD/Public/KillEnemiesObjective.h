#pragma once
#include "CoreMinimal.h"
#include "Objective.h"
#include "KillEnemiesObjective.generated.h"

class UDebrisPositioning;
class UHealthComponentBase;
class UEnemyDescriptor;
class APawn;

UCLASS(Abstract)
class UKillEnemiesObjective : public UObjective {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 EnemyCount;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 ExtraEnemies;
    
    UPROPERTY(EditAnywhere, Instanced)
    UDebrisPositioning* Positioning;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UEnemyDescriptor* EnemyTarget;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_EnemiesKilled)
    int32 EnemiesKilled;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_EnemiesToKill)
    int32 EnemiesToKill;
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure=false)
    void RegisterTargetSpawned(APawn* Target) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveTargetKilled(UHealthComponentBase* Health);
    
    UFUNCTION(BlueprintCallable)
    void OnTargetKilled(UHealthComponentBase* Health);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_EnemiesToKill(int32 prevAmount);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_EnemiesKilled(int32 prevAmount);
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UKillEnemiesObjective();
};

