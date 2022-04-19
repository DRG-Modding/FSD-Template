#pragma once
#include "CoreMinimal.h"
#include "OnPushedStatusEffectDelegate.generated.h"

class UHealthComponentBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPushedStatusEffect, UHealthComponentBase*, Health);

