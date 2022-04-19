#pragma once
#include "CoreMinimal.h"
#include "SkinSignatureDelegate.generated.h"

class UItemSkin;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSkinSignature, UItemSkin*, Skin);

