#pragma once
#include "CoreMinimal.h"
#include "TargetValidator.h"
#include "LineOfSightValidator.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ULineOfSightValidator : public UTargetValidator {
    GENERATED_BODY()
public:
    ULineOfSightValidator();
};

