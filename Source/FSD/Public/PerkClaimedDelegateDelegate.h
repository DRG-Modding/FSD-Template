#pragma once
#include "CoreMinimal.h"
#include "PerkClaimedDelegateDelegate.generated.h"

class UPerkAsset;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPerkClaimedDelegate, UPerkAsset*, Perk, int32, ClaimedTier);

