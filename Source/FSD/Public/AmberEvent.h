#pragma once
#include "CoreMinimal.h"
#include "GameEvent.h"
#include "AmberEvent.generated.h"

class UDamageComponent;
class APawn;
class UAmberEventEnemyPool;
class AFSDPawn;
class UHealthComponentBase;

UCLASS(Blueprintable)
class AAmberEvent : public AGameEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UDamageComponent* EndExplosionDamage;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAmberEventEnemyPool*> EnemyPools;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AFSDPawn*> spawnedEnemies;
    
    UPROPERTY(EditAnywhere, Replicated, Transient)
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

