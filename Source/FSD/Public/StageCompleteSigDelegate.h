#pragma once
#include "CoreMinimal.h"
#include "StageCompleteSigDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FStageCompleteSig, int32, stageCompleted);

