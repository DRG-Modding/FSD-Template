#pragma once
#include "CoreMinimal.h"
#include "ObjectivesDelegateDelegate.generated.h"

class UObjective;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FObjectivesDelegate, UObjective*, Objective);

