#pragma once
#include "CoreMinimal.h"
#include "GameDifficulty.h"
#include "DifficultyDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDifficultyDelegate, const FGameDifficulty&, Setting);

