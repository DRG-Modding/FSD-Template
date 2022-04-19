#pragma once
#include "CoreMinimal.h"
#include "NewPostProcessingManagerDelegate.generated.h"

class APostProcessingManager;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FNewPostProcessingManager, APostProcessingManager*, PostProcessingManager);

