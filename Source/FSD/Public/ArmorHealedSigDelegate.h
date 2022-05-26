#pragma once
#include "CoreMinimal.h"
#include "ArmorHealedSigDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FArmorHealedSig, float, Amount);

