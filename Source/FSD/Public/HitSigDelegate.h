#pragma once
#include "CoreMinimal.h"
#include "DamageData.h"
#include "HitSigDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FHitSig, float, Damage, const FDamageData&, DamageData, bool, anyHealthLost);

