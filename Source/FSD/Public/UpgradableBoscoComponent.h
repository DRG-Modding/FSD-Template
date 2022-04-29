#pragma once
#include "CoreMinimal.h"
#include "UpgradableGearComponent.h"
#include "UpgradableBoscoComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UUpgradableBoscoComponent : public UUpgradableGearComponent {
    GENERATED_BODY()
public:
    UUpgradableBoscoComponent();
};

