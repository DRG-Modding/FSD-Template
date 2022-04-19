#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "GenerationComponent.generated.h"

UCLASS(Abstract, meta=(BlueprintSpawnableComponent))
class UGenerationComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UGenerationComponent();
};

