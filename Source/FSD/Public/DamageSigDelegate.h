#pragma once
#include "CoreMinimal.h"
#include "DamageSigDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDamageSig, float, Amount);

