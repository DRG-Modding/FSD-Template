#pragma once
#include "CoreMinimal.h"
#include "SkinEventDelegate.generated.h"

class UItemSkin;
class UItemID;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSkinEvent, UItemSkin*, Skin, UItemID*, ItemID);

