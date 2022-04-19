#pragma once
#include "CoreMinimal.h"
#include "OnEnemyKilledDelegateDelegate.generated.h"

class AActor;
class UFSDPhysicalMaterial;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnEnemyKilledDelegate, AActor*, Target, UFSDPhysicalMaterial*, PhysicalMaterial, bool, bWasDirectHit);

