#pragma once
#include "CoreMinimal.h"
#include "ControllerSettings.generated.h"

USTRUCT(BlueprintType)
struct FControllerSettings {
    GENERATED_BODY()
public:
    UPROPERTY()
    float AimInnerDeadZone;
    
    UPROPERTY()
    float AimSensitivity;
    
    UPROPERTY()
    float AimOuterAcceleration;
    
    FSD_API FControllerSettings();
};

