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
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> BossActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UEnemyComponent> EnemyComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UEnemyHealthComponent> HealthComponent;
    
    FSD_API FBossFight();
};

