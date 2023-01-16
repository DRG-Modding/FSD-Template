#pragma once
#include "CoreMinimal.h"
#include "AudioCallbackDelegate.generated.h"

class UAudioComponent;
class APlayerCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAudioCallback, APlayerCharacter*, Player, UAudioComponent*, audio);

