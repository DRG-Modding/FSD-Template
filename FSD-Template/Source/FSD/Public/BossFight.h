#pragma once
#include "CoreMinimal.h"
#include "BossFight.generated.h"

class AActor;
class UEnemyComponent;
class UEnemyHealthComponent;

USTRUCT(BlueprintType)
struct FBossFight {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    TWeakObjectPtr<AActor> BossActor;
    
    UPROPERTY(BlueprintReadWrite, Export)
    TWeakObjectPtr<UEnemyComponent> EnemyComponent;
    
    UPROPERTY(BlueprintReadWrite, Export)
    TWeakObjectPtr<UEnemyHealthComponent> HealthComponent;
    
    FSD_API FBossFight();
};

