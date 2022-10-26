#pragma once
#include "CoreMinimal.h"
#include "CleanupToolAnimInstance.h"
#include "VacuumAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UVacuumAnimInstance : public UCleanupToolAnimInstance {
    GENERATED_BODY()
public:
    UVacuumAnimInstance();
};

