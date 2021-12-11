#include "GameEventAnimInstance.h"

UGameEventAnimInstance::UGameEventAnimInstance() {
    this->StageProgress = 0.00f;
    this->IsEventActive = false;
    this->AreEventStartersActive = false;
    this->EventFailed = false;
}

