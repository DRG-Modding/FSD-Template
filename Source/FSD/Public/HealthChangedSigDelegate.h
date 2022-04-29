#pragma once
#include "CoreMinimal.h"
#include "HealthChangedSigDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHealthChangedSig, float, Health);

