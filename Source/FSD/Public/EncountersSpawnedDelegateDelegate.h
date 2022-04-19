#pragma once
#include "CoreMinimal.h"
#include "EncountersSpawnedDelegateDelegate.generated.h"

class AProceduralSetup;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEncountersSpawnedDelegate, AProceduralSetup*, setup);

