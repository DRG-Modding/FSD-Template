#include "UseAnimationSetting.h"

UUseAnimationSetting::UUseAnimationSetting() {
    this->BeginFP = NULL;
    this->EndFP = NULL;
    this->BeginTP = NULL;
    this->EndTP = NULL;
    this->IsManuallyControlled = false;
    this->BlockUseWhileActive = false;
    this->BlockUseWhileActiveDuration = 0.00f;
}

