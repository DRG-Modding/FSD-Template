#pragma once
#include "CoreMinimal.h"
#include "AttackerPositioningComponent.h"
#include "EnemyAttackerPositioningComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UEnemyAttackerPositioningComponent : public UAttackerPositioningComponent {
    GENERATED_BODY()
public:
    UEnemyAttackerPositioningComponent();
};

