#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "RawInputDeviceButtonProperties.generated.h"

USTRUCT(BlueprintType)
struct FRawInputDeviceButtonProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey Key;
    
    FSDRAWINPUT_API FRawInputDeviceButtonProperties();
};

