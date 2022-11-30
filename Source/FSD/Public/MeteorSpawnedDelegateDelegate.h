#pragma once
#include "CoreMinimal.h"
#include "MeteorSpawnedDelegateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMeteorSpawnedDelegate, AActor*, spawned);

