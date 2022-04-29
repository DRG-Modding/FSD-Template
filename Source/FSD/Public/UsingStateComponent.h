#pragma once
#include "CoreMinimal.h"
#include "CharacterStateComponent.h"
#include "UsingStateComponent.generated.h"

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UUsingStateComponent : public UCharacterStateComponent {
    GENERATED_BODY()
public:
    UUsingStateComponent();
};

