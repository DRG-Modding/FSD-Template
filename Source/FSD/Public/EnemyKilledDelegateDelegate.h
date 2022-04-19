#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EnemyKilledDelegateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEnemyKilledDelegate, const FGameplayTagContainer&, enemyTags, AActor*, killedEnemy);

