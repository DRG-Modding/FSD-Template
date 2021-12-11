#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EnemyPawn.h"
#include "InsectSwarmSpawner.generated.h"

class AInsectSwarmEnemy;
class UStaticMeshComponent;
class AActor;

UCLASS(Abstract)
class AInsectSwarmSpawner : public AEnemyPawn {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<AInsectSwarmEnemy> SwarmType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SpawnHeightOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AlertDistance;
    
    UPROPERTY(EditAnywhere)
    float respawnDelay;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TWeakObjectPtr<AInsectSwarmEnemy> SwarmInstance;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UStaticMeshComponent* Receive_GetStaticMesh() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSwarmSpawned(AInsectSwarmEnemy* Swarm);
    
    UFUNCTION(BlueprintCallable)
    void OnSwarmDestroyed(AActor* DestroyedActor);
    
public:
    AInsectSwarmSpawner();
};

