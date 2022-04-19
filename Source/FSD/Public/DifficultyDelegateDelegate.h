#pragma once
#include "CoreMinimal.h"
#include "DifficultyDelegateDelegate.generated.h"

class UDifficultySetting;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDifficultyDelegate, UDifficultySetting*, Setting);

