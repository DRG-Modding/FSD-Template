#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "RawInputDeviceAxisToButtonProperties.generated.h"

USTRUCT(BlueprintType)
struct FRawInputDeviceAxisToButtonProperties {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float AxisValue;
    
    UPROPERTY(EditAnywhere)
    float AxisThreshold;
    
    UPROPERTY(EditAnywhere)
    FKey ButtonKey;
    
    FSDRAWINPUT_API FRawInputDeviceAxisToButtonProperties();
};

