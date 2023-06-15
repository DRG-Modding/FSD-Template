#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OnRequestSeasonEndTimeCompleteDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnRequestSeasonEndTimeComplete, FDateTime, SeasonEndTime, bool, Successful);

