#pragma once
#include "CoreMinimal.h"
#include "ArmorPrimitiveDamagedDelegateDelegate.generated.h"

class UPrimitiveComponent;

UDELEGATE(BlueprintAuthorityOnly, BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FArmorPrimitiveDamagedDelegate, UPrimitiveComponent*, collider, float, Damage);

