#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "EMovementCustomMode.h"
#include "MovementModeCombo.generated.h"

USTRUCT(BlueprintType)
struct FMovementModeCombo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EMovementMode> Mode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EMovementCustomMode> CustomMode;
    
    FSD_API FMovementModeCombo();
};

