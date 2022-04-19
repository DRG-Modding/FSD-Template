#pragma once
#include "CoreMinimal.h"
#include "LoSDelegateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLoSDelegate, AActor*, Target);

