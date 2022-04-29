#pragma once
#include "CoreMinimal.h"
#include "TetherRangeChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTetherRangeChanged, float, range);

