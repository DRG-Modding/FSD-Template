#pragma once
#include "CoreMinimal.h"
#include "BoscoChangedDelegate.generated.h"

class ABosco;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBoscoChanged, ABosco*, Bosco);

