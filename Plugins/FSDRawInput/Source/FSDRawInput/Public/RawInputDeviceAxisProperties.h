#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "RawInputDeviceAxisToButtonProperties.h"
#include "RawInputDeviceAxisProperties.generated.h"

USTRUCT(BlueprintType)
struct FRawInputDeviceAxisProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bMapToButton: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bInverted: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bGamepadStick: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRawInputDeviceAxisToButtonProperties> AxisToButtonMapping;
    
    FSDRAWINPUT_API FRawInputDeviceAxisProperties();
};

