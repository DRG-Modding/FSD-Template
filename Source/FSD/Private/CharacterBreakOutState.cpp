#include "CharacterBreakOutState.h"

UCharacterBreakOutState::UCharacterBreakOutState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SuccessSound = NULL;
    this->FailSound = NULL;
    this->ErrorGracePeriod = 0.00f;
    this->HoldToBreakTime = 0.25f;
    this->WrongInputPenaltyTime = 0.25f;
    this->InitialWaitPeriod = 0.10f;
    this->UseLegacy = true;
    this->ResetOnFail = false;
}


