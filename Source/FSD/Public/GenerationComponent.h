#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "GenerationComponent.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UGenerationComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UGenerationComponent();
};

