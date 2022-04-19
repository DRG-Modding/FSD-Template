#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ArmorShatterDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FArmorShatterDelegate, const FVector&, Location);

