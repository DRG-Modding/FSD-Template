#pragma once
#include "CoreMinimal.h"
#include "ResourceDelegateDelegate.generated.h"

class UResourceData;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FResourceDelegate, UResourceData*, Resource, float, amount);

