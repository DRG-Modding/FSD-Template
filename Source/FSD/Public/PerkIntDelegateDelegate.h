#pragma once
#include "CoreMinimal.h"
#include "PerkIntDelegateDelegate.generated.h"

class UPerkAsset;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPerkIntDelegate, UPerkAsset*, Perk, int32, Value);

