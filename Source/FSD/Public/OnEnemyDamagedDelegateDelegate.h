#pragma once
#include "CoreMinimal.h"
#include "OnEnemyDamagedDelegateDelegate.generated.h"

class UFSDPhysicalMaterial;
class UHealthComponentBase;
class UPrimitiveComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnEnemyDamagedDelegate, UHealthComponentBase*, Health, float, Amount, UPrimitiveComponent*, Component, UFSDPhysicalMaterial*, PhysicalMaterial);

