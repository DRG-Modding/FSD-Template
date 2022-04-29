#pragma once
#include "CoreMinimal.h"
#include "CustomCounterDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FCustomCounterDelegate, float, Value, float, NormalizedTime);

