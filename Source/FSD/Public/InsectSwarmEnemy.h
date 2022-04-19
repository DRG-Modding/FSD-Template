#pragma once
#include "CoreMinimal.h"
#include "EnemyDeepPathfinderCharacter.h"
#include "InsectSwarmEnemy.generated.h"

class UParticleSystemComponent;

UCLASS(Abstract)
class AInsectSwarmEnemy : public AEnemyDeepPathfinderCharacter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* SwarmParticles;
    
public:
    AInsectSwarmEnemy();
};

