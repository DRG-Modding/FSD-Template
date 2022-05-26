#pragma once
#include "CoreMinimal.h"
#include "DamageData.h"
#include "BodypartHitSigDelegate.generated.h"

UDELEGATE(BlueprintAuthorityOnly, BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FBodypartHitSig, float, Amount, float, BaseAmount, const FDamageData&, DamageData);

