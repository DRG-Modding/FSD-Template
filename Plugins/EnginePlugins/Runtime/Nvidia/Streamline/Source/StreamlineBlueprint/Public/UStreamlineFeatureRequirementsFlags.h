#pragma once
#include "CoreMinimal.h"
#include "UStreamlineFeatureRequirementsFlags.generated.h"

UENUM(BlueprintType)
enum class UStreamlineFeatureRequirementsFlags : uint8 {
    None,
    D3D11Supported,
    D3D12Supported,
    VulkanSupported = 4,
    VSyncOffRequired = 8,
    HardwareSchedulingRequired = 16,
};

