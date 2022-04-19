#include "FadeScreenSubSystem.h"

class UObject;
class UTexture;

bool UFadeScreenSubSystem::IsScreenFadingToBlack(UObject* WorldContext) {
    return false;
}

bool UFadeScreenSubSystem::IsScreenFadingFromBlack(UObject* WorldContext) {
    return false;
}

bool UFadeScreenSubSystem::IsScreenFading(UObject* WorldContext) {
    return false;
}

float UFadeScreenSubSystem::GetCurrentFadeAmount() const {
    return 0.0f;
}

void UFadeScreenSubSystem::FadeScreenToBlack(UObject* WorldContext, float FadeTime, float Delay, bool ResetExistingFades, bool CapFramerate, bool FadeWorldOnly, bool ToSpaceRig, UTexture* LoadingImage) {
}

void UFadeScreenSubSystem::FadeScreenFromBlack(UObject* WorldContext, float FadeTime, float Delay, bool ResetExistingFades, bool CapFramerate, bool FadeWorldOnly, bool ToSpaceRig) {
}

void UFadeScreenSubSystem::BlackoutScreen(UObject* WorldContext, bool FadeWorldOnly) {
}

UFadeScreenSubSystem::UFadeScreenSubSystem() {
}

