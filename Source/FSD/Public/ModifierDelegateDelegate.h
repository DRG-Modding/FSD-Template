#pragma once
#include "CoreMinimal.h"
#include "ModifierDelegateDelegate.generated.h"

class UPawnStat;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FModifierDelegate, UPawnStat*, PawnStat);

