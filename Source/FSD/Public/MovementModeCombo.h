#pragma once
#include "CoreMinimal.h"
#include "EMovementCustomMode.h"
#include "Engine/EngineTypes.h"
#include "MovementModeCombo.generated.h"

USTRUCT(BlueprintType)
struct FMovementModeCombo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EMovementMode> Mode;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EMovementCustomMode> CustomMode;
    
    FSD_API FMovementModeCombo();
};

