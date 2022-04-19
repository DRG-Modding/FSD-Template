#pragma once
#include "CoreMinimal.h"
#include "EHackingPodState.h"
#include "HackingPod_DelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHackingPod_Delegate, EHackingPodState, State);

