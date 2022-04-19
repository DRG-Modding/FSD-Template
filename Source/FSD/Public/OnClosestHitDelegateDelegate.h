#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OnClosestHitDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnClosestHitDelegate, const FVector&, Location);

