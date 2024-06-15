#include "StreamlineLibraryDLSSG.h"

UStreamlineLibraryDLSSG::UStreamlineLibraryDLSSG() {
}

void UStreamlineLibraryDLSSG::SetDLSSGMode(UStreamlineDLSSGMode DLSSGMode) {
}

UStreamlineFeatureSupport UStreamlineLibraryDLSSG::QueryDLSSGSupport() {
    return UStreamlineFeatureSupport::Supported;
}

bool UStreamlineLibraryDLSSG::IsDLSSGSupported() {
    return false;
}

bool UStreamlineLibraryDLSSG::IsDLSSGModeSupported(UStreamlineDLSSGMode DLSSGMode) {
    return false;
}

TArray<UStreamlineDLSSGMode> UStreamlineLibraryDLSSG::GetSupportedDLSSGModes() {
    return TArray<UStreamlineDLSSGMode>();
}

UStreamlineDLSSGMode UStreamlineLibraryDLSSG::GetDLSSGMode() {
    return UStreamlineDLSSGMode::Off;
}

void UStreamlineLibraryDLSSG::GetDLSSGFrameTiming(float& FrameRateInHertz, int32& FramesPresented) {
}

UStreamlineDLSSGMode UStreamlineLibraryDLSSG::GetDefaultDLSSGMode() {
    return UStreamlineDLSSGMode::Off;
}


