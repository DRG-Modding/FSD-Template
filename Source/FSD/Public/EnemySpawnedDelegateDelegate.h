#pragma once
#include "CoreMinimal.h"
#include "EnemySpawnedDelegateDelegate.generated.h"

class APawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FEnemySpawnedDelegate, APawn*, enemy);

