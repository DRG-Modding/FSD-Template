#include "StreamlineLibraryReflex.h"

UStreamlineLibraryReflex::UStreamlineLibraryReflex() {
}

void UStreamlineLibraryReflex::SetReflexMode(const UStreamlineReflexMode Mode) {
}

UStreamlineFeatureSupport UStreamlineLibraryReflex::QueryReflexSupport() {
    return UStreamlineFeatureSupport::Supported;
}

bool UStreamlineLibraryReflex::IsReflexSupported() {
    return false;
}

float UStreamlineLibraryReflex::GetRenderLatencyInMs() {
    return 0.0f;
}

UStreamlineReflexMode UStreamlineLibraryReflex::GetReflexMode() {
    return UStreamlineReflexMode::Disabled;
}

float UStreamlineLibraryReflex::GetGameToRenderLatencyInMs() {
    return 0.0f;
}

float UStreamlineLibraryReflex::GetGameLatencyInMs() {
    return 0.0f;
}

UStreamlineReflexMode UStreamlineLibraryReflex::GetDefaultReflexMode() {
    return UStreamlineReflexMode::Disabled;
}


