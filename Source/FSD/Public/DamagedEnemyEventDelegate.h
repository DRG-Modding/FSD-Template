#pragma once
#include "CoreMinimal.h"
#include "DamagedEnemyEventDelegate.generated.h"

class UHealth;
class IHealth;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_SixParams(FDamagedEnemyEvent, const TScriptInterface<IHealth>&, EnemyHealth, float, Damage, float, DamageModifier, float, HealthRemaining, bool, IsWeakPoint, bool, IsRadial);

