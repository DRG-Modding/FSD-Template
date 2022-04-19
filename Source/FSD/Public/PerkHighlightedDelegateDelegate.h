#pragma once
#include "CoreMinimal.h"
#include "PerkHighlightedDelegateDelegate.generated.h"

class UPerkAsset;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPerkHighlightedDelegate, UPerkAsset*, Perk, bool, IsHighlighted);

