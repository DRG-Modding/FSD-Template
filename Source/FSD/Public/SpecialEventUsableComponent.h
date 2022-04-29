#pragma once
#include "CoreMinimal.h"
#include "SingleUsableComponent.h"
#include "SpecialEventUsableComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USpecialEventUsableComponent : public USingleUsableComponent {
    GENERATED_BODY()
public:
    USpecialEventUsableComponent();
};

