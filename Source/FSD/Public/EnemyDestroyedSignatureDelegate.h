#pragma once
#include "CoreMinimal.h"
#include "EnemyDestroyedSignatureDelegate.generated.h"

class APawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEnemyDestroyedSignature, APawn*, enemy);

