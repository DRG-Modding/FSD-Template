#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "VectorDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FVectorDelegate, FVector, vectorValue);

