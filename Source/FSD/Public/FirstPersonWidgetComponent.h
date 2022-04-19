#pragma once
#include "CoreMinimal.h"
#include "Components/WidgetComponent.h"
#include "FirstPersonWidgetComponent.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UFirstPersonWidgetComponent : public UWidgetComponent {
    GENERATED_BODY()
public:
    UFirstPersonWidgetComponent();
};

