#pragma once
#include "CoreMinimal.h"
#include "SingleUsableComponent.h"
#include "SpecialEventUsableComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class USpecialEventUsableComponent : public USingleUsableComponent {
    GENERATED_BODY()
public:
    USpecialEventUsableComponent();
};

