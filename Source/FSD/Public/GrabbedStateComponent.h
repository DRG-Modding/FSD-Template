#pragma once
#include "CoreMinimal.h"
#include "CharacterStateComponent.h"
#include "GrabbedStateComponent.generated.h"

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UGrabbedStateComponent : public UCharacterStateComponent {
    GENERATED_BODY()
public:
    UGrabbedStateComponent();
};

