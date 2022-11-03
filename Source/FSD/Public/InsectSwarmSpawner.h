#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EnemyPawn.h"
#include "InsectSwarmSpawner.generated.h"

class AInsectSwarmEnemy;
class UStaticMeshComponent;
class AActor;

UCLASS(Abstract, Blueprintable)
class AInsectSwarmSpawner : public AEnemyPawn {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AInsectSwarmEnemy> SwarmType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnHeightOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AlertDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float respawnDelay;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<AInsectSwarmEnemy> SwarmInstance;
    
public:
    AInsectSwarmSpawner();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UStaticMeshComponent* Receive_GetStaticMesh() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSwarmSpawned(AInsectSwarmEnemy* Swarm);
    
    UFUNCTION(BlueprintCallable)
    void OnSwarmDestroyed(AActor* DestroyedActor);
    
};

