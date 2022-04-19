#pragma once
#include "CoreMinimal.h"
#include "RandRange.h"
#include "Components/ActorComponent.h"
#include "PheromoneSpawnerComponent.generated.h"

class UEnemyDescriptor;
class AActor;

UCLASS(meta=(BlueprintSpawnableComponent))
class UPheromoneSpawnerComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRandRange SpawnInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttackPositioningCostModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnemyDescriptor* enemy;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TMap<AActor*, float> InfectedActors;
    
public:
    UPheromoneSpawnerComponent();
};

