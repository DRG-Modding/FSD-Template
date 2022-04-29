#pragma once
#include "CoreMinimal.h"
#include "InstantUsable.h"
#include "CarriableInstantUsable.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UCarriableInstantUsable : public UInstantUsable {
    GENERATED_BODY()
public:
    UCarriableInstantUsable();
};

