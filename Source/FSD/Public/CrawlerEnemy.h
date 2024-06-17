#pragma once
#include "CoreMinimal.h"
#include "CoreSpawnEnemyBase.h"
#include "CrawlerEnemy.generated.h"

class UBallisticMovementComponent;
class UMeleeAttackComponent;

UCLASS(Blueprintable)
class ACrawlerEnemy : public ACoreSpawnEnemyBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMeleeAttackComponent* MeleeAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBallisticMovementComponent* BallisticMovement;
    
public:
    ACrawlerEnemy(const FObjectInitializer& ObjectInitializer);

};

