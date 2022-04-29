#pragma once
#include "CoreMinimal.h"
#include "Objective.h"
#include "ResourceBasedObjective.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UResourceBasedObjective : public UObjective {
    GENERATED_BODY()
public:
    UResourceBasedObjective();
};

