#pragma once
#include "CoreMinimal.h"
#include "EnemySpawnedSignatureDelegate.generated.h"

class APawn;
class UEnemyDescriptor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEnemySpawnedSignature, APawn*, enemy, UEnemyDescriptor*, descriptor);

