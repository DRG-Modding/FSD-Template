#include "FrontendBlueprintLibrary.h"

void UFrontendBlueprintLibrary::OpenURLInExternalBrowser(const FString& URL) {
}

bool UFrontendBlueprintLibrary::IsShippingBuild() {
    return false;
}

void UFrontendBlueprintLibrary::GetStringFromClipboard(FString& fromClipboard) {
}

bool UFrontendBlueprintLibrary::FSDTargetPlatformIsXSX() {
    return false;
}

EFSDTargetPlatform UFrontendBlueprintLibrary::FSDTargetPlatform() {
    return EFSDTargetPlatform::Steam;
}

void UFrontendBlueprintLibrary::CopyStringToClipboard(const FString& toClipboard) {
}

UFrontendBlueprintLibrary::UFrontendBlueprintLibrary() {
}

