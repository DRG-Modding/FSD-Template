#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "TickableActionBase.generated.h"

UCLASS()
class UTickableActionBase : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UTickableActionBase();
};

