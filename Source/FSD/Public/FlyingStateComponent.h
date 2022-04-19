#pragma once
#include "CoreMinimal.h"
#include "CharacterStateComponent.h"
#include "FlyingStateComponent.generated.h"

UCLASS(MinimalAPI, meta=(BlueprintSpawnableComponent))
class UFlyingStateComponent : public UCharacterStateComponent {
    GENERATED_BODY()
public:
    UFlyingStateComponent();
};

