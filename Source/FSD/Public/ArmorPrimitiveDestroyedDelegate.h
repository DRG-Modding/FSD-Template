#pragma once
#include "CoreMinimal.h"
#include "ArmorPrimitiveDestroyedDelegate.generated.h"

class UPrimitiveComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FArmorPrimitiveDestroyed, UPrimitiveComponent*, collider);

