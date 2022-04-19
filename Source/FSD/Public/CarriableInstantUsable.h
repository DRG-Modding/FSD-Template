#pragma once
#include "CoreMinimal.h"
#include "InstantUsable.h"
#include "CarriableInstantUsable.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UCarriableInstantUsable : public UInstantUsable {
    GENERATED_BODY()
public:
    UCarriableInstantUsable();
};

