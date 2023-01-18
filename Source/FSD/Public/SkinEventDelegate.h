#pragma once
#include "CoreMinimal.h"
#include "SkinEventDelegate.generated.h"

class UItemID;
class UItemSkin;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSkinEvent, UItemSkin*, Skin, UItemID*, ItemID);

