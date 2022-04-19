#include "AudioFunctionLibrary.h"

class UObject;
class USoundClass;
class USoundMix;

float UAudioFunctionLibrary::SetSoundClassVolume(USoundClass* SoundClass, float Volume) {
    return 0.0f;
}

void UAudioFunctionLibrary::PushTimedSoundMix(UObject* contextObject, USoundMix* mix, float Duration) {
}

float UAudioFunctionLibrary::GetSoundClassVolume(USoundClass* SoundClass) {
    return 0.0f;
}

UAudioFunctionLibrary::UAudioFunctionLibrary() {
}

