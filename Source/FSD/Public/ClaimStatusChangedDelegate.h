#pragma once
#include "CoreMinimal.h"
#include "ClaimStatusChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FClaimStatusChanged, bool, AllClaimed);

