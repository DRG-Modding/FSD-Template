#pragma once
#include "CoreMinimal.h"
#include "CharacterStateComponent.h"
#include "FlyingStateComponent.generated.h"

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFlyingStateComponent : public UCharacterStateComponent {
    GENERATED_BODY()
public:
    UFlyingStateComponent();
};

