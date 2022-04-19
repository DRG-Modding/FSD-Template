#include "FrontendBlueprintLibrary.h"

void UFrontendBlueprintLibrary::OpenURLInExternalBrowser(const FString& URL) {
}

bool UFrontendBlueprintLibrary::IsShippingBuild() {
    return false;
}

EFSDTargetPlatform UFrontendBlueprintLibrary::FSDTargetPlatform() {
    return EFSDTargetPlatform::Steam;
}

UFrontendBlueprintLibrary::UFrontendBlueprintLibrary() {
}

