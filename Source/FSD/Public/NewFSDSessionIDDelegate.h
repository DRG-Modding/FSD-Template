#pragma once
#include "CoreMinimal.h"
#include "NewFSDSessionIDDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FNewFSDSessionID, const FString&, sessionId);

