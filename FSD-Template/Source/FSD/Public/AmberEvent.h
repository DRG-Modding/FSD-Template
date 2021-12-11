#pragma once
#include "CoreMinimal.h"
#include "GameEvent.h"
#include "AmberEvent.generated.h"

class UDamageComponent;
class AFSDPawn;
class UAmberEventEnemyPool;
class UHealthComponentBase;
class APawn;

UCLASS()
class AAmberEvent : public AGameEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UDamageComponent* EndExplosionDamage;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<UAmberEventEnemyPool*> EnemyPools;
    
    UPROPERTY()
    TArray<AFSDPawn*> spawnedEnemies;
    
    UPROPERTY(Replicated, Transient)
    TWeakObjectPtr<UAmberEventEnemyPool> CurrentPool;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float InitialDelayBeforeSpawn;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxSpawnRange;
    
    UFUNCTION(BlueprintCallable)
    void OnSpawnedDeath(UHealthComponentBase* spawnedHealthComponent);
    
    UFUNCTION(BlueprintCallable)
    void OnEnemySpawned(APawn* Pawn);
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    AAmberEvent();
};

