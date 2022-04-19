#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "WeaponRicochetDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FWeaponRicochetDelegate, const FVector&, Origin, const FVector&, Location, const FVector&, Normal);

