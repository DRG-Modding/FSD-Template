#pragma once
#include "CoreMinimal.h"
#include "OnCarriableDepositedDelegate.generated.h"

class APlayerCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCarriableDeposited, APlayerCharacter*, fromCharacter);

