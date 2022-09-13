#pragma once
#include "CoreMinimal.h"
#include "DamageData.h"
#include "DeathSigDetailedDelegate.generated.h"

class UDamageTag;
class UHealthComponent;

UDELEGATE(BlueprintAuthorityOnly, BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FDeathSigDetailed, UHealthComponent*, HealthComponent, float, damageAmount, const FDamageData&, DamageData, const TArray<UDamageTag*>&, Tags);

