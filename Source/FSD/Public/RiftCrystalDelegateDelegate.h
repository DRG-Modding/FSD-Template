#pragma once
#include "CoreMinimal.h"
#include "ERiftCrystalState.h"
#include "RiftCrystalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRiftCrystalDelegate, TEnumAsByte<ERiftCrystalState>, State);

