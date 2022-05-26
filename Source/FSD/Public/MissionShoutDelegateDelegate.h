#pragma once
#include "CoreMinimal.h"
#include "MissionShoutDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMissionShoutDelegate, const FText&, Text, float, Duration);

