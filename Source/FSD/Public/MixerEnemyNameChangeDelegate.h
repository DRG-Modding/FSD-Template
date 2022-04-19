#pragma once
#include "CoreMinimal.h"
#include "MixerEnemyNameChangeDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMixerEnemyNameChange, const FString&, mixerName);

