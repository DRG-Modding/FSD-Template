#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OnRadialDamageDelegate.generated.h"

UDELEGATE(BlueprintAuthorityOnly, BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnRadialDamage, float, Damage, float, BaseDamage, const FVector&, Position, float, Radius);

