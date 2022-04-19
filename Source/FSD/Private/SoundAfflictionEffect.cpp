#include "SoundAfflictionEffect.h"

USoundAfflictionEffect::USoundAfflictionEffect() {
    this->BeginSound = NULL;
    this->EndSound = NULL;
    this->Attach = false;
    this->FadeOnLoopEndDuration = 0.25f;
}

