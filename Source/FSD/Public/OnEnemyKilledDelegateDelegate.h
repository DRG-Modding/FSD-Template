#pragma once
#include "CoreMinimal.h"
#include "OnEnemyKilledDelegateDelegate.generated.h"

class UFSDPhysicalMaterial;
class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnEnemyKilledDelegate, AActor*, Target, UFSDPhysicalMaterial*, PhysicalMaterial, bool, bWasDirectHit);

