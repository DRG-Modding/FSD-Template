#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EnemyKilledSignatureDelegate.generated.h"

class UDamageClass;
class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FEnemyKilledSignature, const FGameplayTagContainer&, enemyTags, AActor*, enemy, UDamageClass*, DamageClass);

