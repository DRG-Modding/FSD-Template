#pragma once
#include "CoreMinimal.h"
#include "SDCloudLoadDelegate.generated.h"

class UFSDSaveGame;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSDCloudLoad, const TArray<UFSDSaveGame*>&, savegames);

