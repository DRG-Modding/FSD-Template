#pragma once
#include "CoreMinimal.h"
#include "ArmorPartDamagedDelegateDelegate.generated.h"

UDELEGATE(BlueprintAuthorityOnly) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FArmorPartDamagedDelegate, FName, BoneName, float, Damage);

