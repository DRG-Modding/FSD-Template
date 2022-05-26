#pragma once
#include "CoreMinimal.h"
#include "CoolDownProgressStyle.h"
#include "CoolDownProgressDelegateDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FCoolDownProgressDelegate, UObject*, CoolDownObject, const FCoolDownProgressStyle&, Style, float, Progress);

