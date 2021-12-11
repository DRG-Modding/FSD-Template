#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AnalogAimSettings.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FAnalogAimSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool ShowDebugOutput;
    
protected:
    UPROPERTY(EditAnywhere)
    FVector2D AimRate;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* SensitivityCurve;
    
    UPROPERTY(EditAnywhere)
    float LookAtStickyness;
    
    UPROPERTY(EditAnywhere)
    float StickynessRecoverySpeed;
    
    UPROPERTY(EditAnywhere)
    float StickynessMaxSensitivity;
    
    UPROPERTY(EditAnywhere)
    FVector2D ThirdPersonLookRate;
    
public:
    FSD_API FAnalogAimSettings();
};

