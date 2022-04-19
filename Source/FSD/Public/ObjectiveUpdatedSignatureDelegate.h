#pragma once
#include "CoreMinimal.h"
#include "ObjectiveUpdatedSignatureDelegate.generated.h"

class UObjective;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FObjectiveUpdatedSignature, UObjective*, Objective);

