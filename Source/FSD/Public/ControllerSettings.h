#pragma once
#include "CoreMinimal.h"
#include "ETurn180Mode.h"
#include "ControllerSettings.generated.h"

USTRUCT(BlueprintType)
struct FControllerSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float AimInnerDeadZone;
    
    UPROPERTY(EditAnywhere)
    float AimSensitivity;
    
    UPROPERTY(EditAnywhere)
    float AimOuterAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETurn180Mode Turn180Mode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPreviousItemEnabled;
    
    FSD_API FControllerSettings();
};

