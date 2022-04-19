#pragma once
#include "CoreMinimal.h"
#include "ETurn180Mode.h"
#include "ControllerSettings.generated.h"

USTRUCT(BlueprintType)
struct FControllerSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float AimInnerDeadZone;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float AimSensitivity;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float AimOuterAcceleration;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    ETurn180Mode Turn180Mode;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bPreviousItemEnabled;
    
    FSD_API FControllerSettings();
};

