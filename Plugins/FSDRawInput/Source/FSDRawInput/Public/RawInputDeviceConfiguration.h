#pragma once
#include "CoreMinimal.h"
#include "RawInputDeviceButtonProperties.h"
#include "RawInputDeviceAxisProperties.h"
#include "RawInputDeviceConfiguration.generated.h"

USTRUCT(BlueprintType)
struct FRawInputDeviceConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString VendorID;
    
    UPROPERTY(EditAnywhere)
    FString ProductID;
    
    UPROPERTY(EditAnywhere)
    TArray<FRawInputDeviceAxisProperties> AxisProperties;
    
    UPROPERTY(EditAnywhere)
    TArray<FRawInputDeviceButtonProperties> ButtonProperties;
    
    FSDRAWINPUT_API FRawInputDeviceConfiguration();
};

