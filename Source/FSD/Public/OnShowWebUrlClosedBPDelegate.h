#pragma once
#include "CoreMinimal.h"
#include "OnShowWebUrlClosedBPDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnShowWebUrlClosedBP, const FString&, LastURL);

