#pragma once
#include "CoreMinimal.h"
#include "UDLSSSupport.generated.h"

UENUM()
enum class UDLSSSupport : uint8 {
    Supported,
    NotSupported,
    NotSupportedIncompatibleHardware,
    NotSupportedDriverOutOfDate,
    NotSupportedOperatingSystemOutOfDate,
    NotSupportedByPlatformAtBuildTime,
    NotSupportedIncompatibleAPICaptureToolActive,
};

