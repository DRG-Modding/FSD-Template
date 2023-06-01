#pragma once
#include "CoreMinimal.h"
#include "JetBootsDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FJetBootsDelegate, float, jetFuel, bool, overHeated);

