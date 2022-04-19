#pragma once
#include "CoreMinimal.h"
#include "ArmorPartDamagedDelegateDelegate.generated.h"

UDELEGATE(BlueprintAuthorityOnly, BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FArmorPartDamagedDelegate, FName, BoneName, float, Damage);

