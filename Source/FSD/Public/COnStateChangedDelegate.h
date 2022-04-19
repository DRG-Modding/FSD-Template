#pragma once
#include "CoreMinimal.h"
#include "COnStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCOnStateChanged, bool, IsIdling);

