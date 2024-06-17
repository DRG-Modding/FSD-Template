#pragma once
#include "CoreMinimal.h"
#include "DamageData.h"
#include "BodypartHitSigDelegate.generated.h"

UDELEGATE(BlueprintAuthorityOnly, BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FBodypartHitSig, float, amount, float, BaseAmount, const FDamageData&, DamageData);

