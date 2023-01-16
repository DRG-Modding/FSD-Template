#pragma once
#include "CoreMinimal.h"
#include "TemporaryBuffChangedDelegate.generated.h"

class APlayerCharacter;
class UTemporaryBuff;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTemporaryBuffChanged, UTemporaryBuff*, buff, APlayerCharacter*, AffectedPlayer);

