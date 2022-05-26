#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "RawInputDeviceAxisToButtonProperties.generated.h"

USTRUCT(BlueprintType)
struct FRawInputDeviceAxisToButtonProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AxisValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AxisThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey ButtonKey;
    
    FSDRAWINPUT_API FRawInputDeviceAxisToButtonProperties();
};

