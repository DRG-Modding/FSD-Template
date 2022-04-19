#pragma once
#include "CoreMinimal.h"
#include "CollectedVanityItemDeledateDelegate.generated.h"

class UVanityItem;
class UPlayerCharacterID;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCollectedVanityItemDeledate, UVanityItem*, Item, UPlayerCharacterID*, characterID);

