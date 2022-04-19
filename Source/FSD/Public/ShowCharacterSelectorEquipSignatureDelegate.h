#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ShowCharacterSelectorEquipSignatureDelegate.generated.h"

class AItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FShowCharacterSelectorEquipSignature, TSubclassOf<AItem>, itemClass, int32, EquipSlot);

