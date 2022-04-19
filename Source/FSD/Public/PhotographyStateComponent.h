#pragma once
#include "CoreMinimal.h"
#include "CharacterStateComponent.h"
#include "PhotographyStateComponent.generated.h"

UCLASS(MinimalAPI, meta=(BlueprintSpawnableComponent))
class UPhotographyStateComponent : public UCharacterStateComponent {
    GENERATED_BODY()
public:
    UPhotographyStateComponent();
};

