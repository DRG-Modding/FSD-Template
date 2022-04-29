#pragma once
#include "CoreMinimal.h"
#include "SimpleArmorRadialDamagedDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSimpleArmorRadialDamagedDelegate, const TArray<uint8>&, destroyedParts);

