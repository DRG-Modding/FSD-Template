#pragma once
#include "CoreMinimal.h"
#include "RiftSpawnerDelegateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRiftSpawnerDelegate, AActor*, spawnedRift);

