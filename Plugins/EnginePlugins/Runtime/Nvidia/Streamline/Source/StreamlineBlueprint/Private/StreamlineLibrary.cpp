#include "StreamlineLibrary.h"

UStreamlineLibrary::UStreamlineLibrary() {
}

UStreamlineFeatureSupport UStreamlineLibrary::QueryStreamlineFeatureSupport(UStreamlineFeature Feature) {
    return UStreamlineFeatureSupport::Supported;
}

bool UStreamlineLibrary::IsStreamlineFeatureSupported(UStreamlineFeature Feature) {
    return false;
}

FStreamlineFeatureRequirements UStreamlineLibrary::GetStreamlineFeatureInformation(UStreamlineFeature Feature) {
    return FStreamlineFeatureRequirements{};
}

void UStreamlineLibrary::BreakStreamlineFeatureRequirements(UStreamlineFeatureRequirementsFlags Requirements, bool& D3D11Supported, bool& D3D12Supported, bool& VulkanSupported, bool& VSyncOffRequired, bool& HardwareSchedulingRequired) {
}


