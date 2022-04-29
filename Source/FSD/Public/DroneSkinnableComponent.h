#pragma once
#include "CoreMinimal.h"
#include "SkinnableComponent.h"
#include "DroneSkinnableComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UDroneSkinnableComponent : public USkinnableComponent {
    GENERATED_BODY()
public:
    UDroneSkinnableComponent();
};

