#pragma once
#include "CoreMinimal.h"
#include "FloatConfigChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFloatConfigChanged, float, NewValue);

