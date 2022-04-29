#pragma once
#include "CoreMinimal.h"
#include "Objective.h"
#include "AdventureObjective.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FSD_API UAdventureObjective : public UObjective {
    GENERATED_BODY()
public:
    UAdventureObjective();
};

