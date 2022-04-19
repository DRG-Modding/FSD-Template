#pragma once
#include "CoreMinimal.h"
#include "ShowCharacterSelectorEqiupSlotSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FShowCharacterSelectorEqiupSlotSignature, int32, EquipSlot);

