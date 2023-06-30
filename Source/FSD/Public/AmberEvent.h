#pragma once
#include "CoreMinimal.h"
#include "GameEvent.h"
#include "AmberEvent.generated.h"

class AFSDPawn;
class APawn;
class UAmberEventEnemyPool;
class UDamageComponent;
class UHealthComponentBase;

UCLASS(Blueprintable)
class AAmberEvent : public AGameEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDamageComponent* EndExplosionDamage;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAmberEventEnemyPool*> EnemyPools;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AFSDPawn*> spawnedEnemies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UAmberEventEnemyPool> CurrentPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialDelayBeforeSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSpawnRange;
    
public:
    AAmberEvent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSpawnedDeath(UHealthComponentBase* spawnedHealthComponent);
    
    UFUNCTION(BlueprintCallable)
    void OnEnemySpawned(APawn* Pawn);
    
};

