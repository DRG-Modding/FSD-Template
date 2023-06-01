#pragma once
#include "CoreMinimal.h"
#include "OnGetIsUpdatePendingBPDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnGetIsUpdatePendingBP, bool, bIsUpdatePending);

