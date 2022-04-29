#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AnalogAimSettings.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FAnalogAimSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowDebugOutput;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D AimRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* SensitivityCurve;
    
    UPROPERTY(EditAnywhere)
    float LookAtStickyness;
    
    UPROPERTY(EditAnywhere)
    float StickynessRecoverySpeed;
    
    UPROPERTY(EditAnywhere)
    float StickynessMaxSensitivity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D ThirdPersonLookRate;
    
public:
    FSD_API FAnalogAimSettings();
};

