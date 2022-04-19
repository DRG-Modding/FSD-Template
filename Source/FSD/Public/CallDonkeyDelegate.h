#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CallDonkeyDelegate.generated.h"

class APlayerCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCallDonkey, FVector, Position, APlayerCharacter*, requester);

