#pragma once
#include "CoreMinimal.h"
#include "EThawInputDirection.h"
#include "ThawInputsDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FThawInputsDelegate, const TArray<EThawInputDirection>&, Inputs, bool, Initial);

