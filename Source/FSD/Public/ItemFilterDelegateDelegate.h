#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ItemFilterDelegateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FItemFilterDelegate, TSubclassOf<AActor>, itemClass, bool&, Result);

