#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "WeaponFiredDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FWeaponFiredDelegate, const FVector&, Location);

