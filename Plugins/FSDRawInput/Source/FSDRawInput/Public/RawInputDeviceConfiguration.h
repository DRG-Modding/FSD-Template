#pragma once
#include "CoreMinimal.h"
#include "RawInputDeviceAxisProperties.h"
#include "RawInputDeviceButtonProperties.h"
#include "RawInputDeviceConfiguration.generated.h"

USTRUCT(BlueprintType)
struct FRawInputDeviceConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString VendorID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ProductID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRawInputDeviceAxisProperties> AxisProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRawInputDeviceButtonProperties> ButtonProperties;
    
    FSDRAWINPUT_API FRawInputDeviceConfiguration();
};

