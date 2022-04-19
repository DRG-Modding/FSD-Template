#pragma once
#include "CoreMinimal.h"
#include "UpgradableGearComponent.h"
#include "UpgradableBoscoComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UUpgradableBoscoComponent : public UUpgradableGearComponent {
    GENERATED_BODY()
public:
    UUpgradableBoscoComponent();
};

